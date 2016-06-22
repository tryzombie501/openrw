#ifndef _GAME_STATE_HPP_
#define _GAME_STATE_HPP_
#include <render/ViewCamera.hpp>
#include <engine/TimestepInfo.hpp>
#include "MenuSystem.hpp"
#include "GameWindow.hpp"

#include <SDL2/SDL.h>
#include <glm/gtc/quaternion.hpp>

#include <functional>
#include <queue>

class RWGame;
class GameWorld;

struct State
{
	// Helper for global menu behaviour
	Menu* currentMenu;
	Menu* nextMenu;

	RWGame* game;
	
	State(RWGame* game)
	 : currentMenu(nullptr), nextMenu(nullptr), game(game) {}
	
	virtual void enter() = 0;
	virtual void exit() = 0;
	
	virtual void tick(const TimestepInfo& dt) = 0;
	
	virtual void draw(GameRenderer* r, const TimestepInfo& ts)
	{
		RW_UNUSED(ts);
		if(getCurrentMenu()) {
			getCurrentMenu()->draw(r);
		}
	}
	
	virtual ~State() {
		if(getCurrentMenu()) {
			delete getCurrentMenu();
		}
	}
	
	void enterMenu(Menu* menu)
	{
		nextMenu = menu;
	}
	
	Menu* getCurrentMenu()
	{
		if(nextMenu) {
			if(currentMenu) {
				delete currentMenu;
			}
			currentMenu = nextMenu;
			nextMenu = nullptr;
		}
		return currentMenu;
	}

	virtual void handleEvent(const SDL_Event& e);

	virtual const ViewCamera& getCamera();
	
	/**
	 * Returns false if the game world should not should
	 * not update while this state is active
	 */
	virtual bool shouldWorldUpdate();

	GameWorld* getWorld();
	GameWindow& getWindow();
};

struct StateManager
{
	static StateManager& get()
	{
		static StateManager m;
		return m;
	}
	
	std::deque<State*> states;
	
	void enter(State* state)
	{
		states.push_back(state);
		state->enter();
	}

	void exec(State* state)
	{
		exit();
		enter(state);
	}
	
	void tick(const TimestepInfo& dt)
	{
		states.back()->tick(dt);
	}
	
	void draw(GameRenderer* r, const TimestepInfo& ts)
	{
		states.back()->draw(r, ts);
	}
	
	void exit()
	{
		// TODO: Resole states being leaked.
		states.back()->exit();
		states.pop_back();
		if(states.size() > 0) {
			states.back()->enter();
		}
	}
};

#endif

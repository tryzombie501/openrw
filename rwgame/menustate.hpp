#ifndef MENUSTATE_HPP
#define MENUSTATE_HPP

#include <SDL2/SDL_events.h>
#include "State.hpp"

class MenuState : public State
{
public:
	MenuState(RWGame* game);

	void enter() override;
	void exit() override;

	void tick(const TimestepInfo& dt) override;

	void enterMainMenu();
	void enterLoadMenu();

	void handleEvent(const SDL_Event& event) override;
};

#endif // MENUSTATE_HPP

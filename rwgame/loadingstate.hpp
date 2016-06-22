#ifndef LOADINGSTATE_HPP
#define LOADINGSTATE_HPP

#include <SDL2/SDL_events.h>
#include "State.hpp"

class LoadingState : public State
{
	State* next;
public:
	LoadingState(RWGame* game);

	void enter() override;
	void exit() override;

	void tick(const TimestepInfo& dt) override;

	void draw(GameRenderer* r, const TimestepInfo& ts) override;

	void setNextState(State* nextState);
	
	bool shouldWorldUpdate() override;

	void handleEvent(const SDL_Event& event) override;
};

#endif // LOADINGSTATE_HPP

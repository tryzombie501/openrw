#ifndef PAUSESTATE_HPP
#define PAUSESTATE_HPP

#include <SDL2/SDL_events.h>
#include "State.hpp"

class PauseState : public State
{
public:
	PauseState(RWGame* game);

	virtual void enter();
	virtual void exit();

	void tick(const TimestepInfo& dt) override;
	
    void draw(GameRenderer* , const TimestepInfo&) override;

	void handleEvent(const SDL_Event& event) override;
};

#endif // PAUSESTATE_HPP

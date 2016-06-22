#ifndef _RWGAME_BENCHMARKSTATE_HPP_
#define _RWGAME_BENCHMARKSTATE_HPP_

#include <SDL2/SDL_events.h>
#include "State.hpp"

class BenchmarkState : public State
{
	struct TrackPoint {
		float time;
		glm::vec3 position;
		glm::quat angle;
	};
	std::vector<TrackPoint> track;

	ViewCamera trackCam;

	std::string benchfile;

	float benchmarkTime;
	float duration;
	uint32_t frameCounter;
public:
	BenchmarkState(RWGame* game, const std::string& benchfile);

	void enter() override;
	void exit() override;

	void tick(const TimestepInfo& dt) override;
	void draw(GameRenderer* r, const TimestepInfo& ts) override;

	void handleEvent(const SDL_Event& event) override;

	const ViewCamera& getCamera();
};

#endif

#ifndef INGAMESTATE_HPP
#define INGAMESTATE_HPP

#include <SDL2/SDL_events.h>
#include "State.hpp"

class PlayerController;

class IngameState : public State
{
	enum CameraMode
	{
		CAMERA_CLOSE = 0,
		CAMERA_NORMAL = 1,
		CAMERA_FAR = 2,
		CAMERA_TOPDOWN = 3,
		/** Used for counting - not a valid camera mode */
		CAMERA_MAX
	};

	bool started;
    std::string save;
	bool newgame;
	ViewCamera _look;
	/** Player input */
	glm::vec3 _movement;
	glm::vec3 cameraPosition;
	/** Timer to hold user camera position */
	float autolookTimer;
	CameraMode camMode;

	/// Current camera yaw and pitch
	glm::vec2 m_cameraAngles;
	/// Invert Y axis movement
	bool m_invertedY;
	/// Free look in vehicles.
	bool m_vehicleFreeLook;
public:
    /**
     * @brief IngameState
     * @param game
     * @param newgame
     * @param game An empty string, a save game to load, or the string "test".
     */
    IngameState(RWGame* game, bool newgame = true, const std::string& save = "");

	void startTest();
	void startGame();

	void enter() override;
	void exit() override;

	void tick(const TimestepInfo& dt) override;
	void draw(GameRenderer* r, const TimestepInfo& ts) override;

	void handleEvent(const SDL_Event& event) override;
	void handlePlayerInput(const SDL_Event& event);

	bool shouldWorldUpdate() override;

	const ViewCamera& getCamera() override;
};

#endif // INGAMESTATE_HPP

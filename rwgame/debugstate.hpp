#ifndef DEBUGSTATE_HPP
#define DEBUGSTATE_HPP

#include <SDL2/SDL_events.h>
#include "State.hpp"

class DebugState : public State
{
	ViewCamera _debugCam;
	glm::vec3 _movement;
	glm::vec2 _debugLook;
	bool _freeLook;
	bool _sonicMode;
	bool _invertedY;

	Menu* createDebugMenu();
	Menu* createMapMenu();
	Menu* createVehicleMenu();
	Menu* createAIMenu();
	Menu* createWeaponMenu();

public:
	DebugState(RWGame* game, const glm::vec3& vp = {}, const glm::quat& vd = {});

	void enter() override;
	void exit() override;

	void tick(const TimestepInfo& dt) override;
	void draw(GameRenderer* r, const TimestepInfo& ts) override;

	void handleEvent(const SDL_Event& event) override;

	void printCameraDetails();

	void spawnVehicle(unsigned int id);
	void spawnFollower(unsigned int id);
	void giveItem(InventoryItem* item);

	const ViewCamera& getCamera();
};

#endif // DEBUGSTATE_HPP

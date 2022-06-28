#pragma once
#include "Module.h"

class Tower : public IModule {
private:
	float motion = 0.5f;
	bool center = true;
	bool Center();
	bool tryTower(vec3_t blockBelow);

public:
	Tower();
	~Tower();

	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onDisable() override;
	virtual void onPlayerTick(C_Player* plr) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
};

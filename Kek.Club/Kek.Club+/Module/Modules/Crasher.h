#pragma once
#include "Module.h"

class Crasher : public IModule {
public:
	int CrasherPPS = 10;

	SettingEnum method;

	Crasher();
	~Crasher();

	const char* getModuleName() override;
	virtual void onEnable() override;
	virtual void onTick(C_GameMode* gm) override;
	virtual void onSendPacket(C_Packet* packet) override;
};

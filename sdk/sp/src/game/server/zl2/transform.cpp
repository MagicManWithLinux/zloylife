#include "cbase.h"

void CC_TransformPlayerToPenguin() {
	CBasePlayer *pPlayer = UTIL_GetLocalPlayer();
	
	if(!pPlayer)
		return;
	else {
		pPlayer -> SetModel("models/alyx.mdl");
	}
}

static ConCommand TransformPlayerToPenguin("transformtopenguin", CC_TransformPlayerToPenguin, "sets player model to penguin (alyx temporary)");

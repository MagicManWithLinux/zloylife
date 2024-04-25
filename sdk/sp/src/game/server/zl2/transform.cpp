#include "cbase.h"

#define TRANSFORM_MODEL	"models/alyx.mdl"

void CC_TransformPlayerToPenguin(void) {
	CBasePlayer *pPlayer = UTIL_GetLocalPlayer();
	
	if(!pPlayer)
		return;
	else {
		pPlayer -> SetModel(TRANSFORM_MODEL);
	}
}

static ConCommand TransformPlayerToPenguin("transformtopenguin", CC_TransformPlayerToPenguin, "sets player model to penguin (alyx temporary)");

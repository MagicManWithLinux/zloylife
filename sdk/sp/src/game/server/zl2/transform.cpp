#include "cbase.h"
#include "baseentity.h"
#include "gamestats.h"
#include "player.h"
#include "transform.h"

#define TRANSFORM_MODEL	"models/private/private.mdl"
#define PLAYER_MODEL	"models/player.mdl"

/*
void CTransformPlayerToPenguin::IKilledCombine() {
	CBasePlayer *pPlayer = UTIL_GetLocalPlayer();
}
*/

void CTransformPlayerToPenguin::Command(void) {
	CBasePlayer *pPlayer = UTIL_GetLocalPlayer();
	
	if(!pPlayer)
		return;
	else if(!IsPenguinAlready) {
		pPlayer -> SetModel(TRANSFORM_MODEL);
		IsPenguinAlready = true;
		pPlayer -> ToggleFlag(FL_NOTARGET);
	}
	else if(IsPenguinAlready) {
		pPlayer -> SetModel(PLAYER_MODEL);
		IsPenguinAlready = false;
		pPlayer -> ToggleFlag(FL_NOTARGET);
	}
}

void CC_TransformPlayerToPenguin(void) {
	CTransformPlayerToPenguin tptp;

	tptp.Command();
}

static ConCommand TransformPlayerToPenguin("transformtopenguin", CC_TransformPlayerToPenguin, "sets player model to penguin");

#include "cbase.h"
#include "vstdlib/random.h"

class CRandomPenguin {
public:
	int rInt;
	const char* modelList[4] = {
		"models/kowalski/kowalski.mdl",
		"models/private/private.mdl",
		"models/rico/rico.mdl",
		"models/skipper/skipper.mdl"
	};
	const char *RandomPenguin();
};

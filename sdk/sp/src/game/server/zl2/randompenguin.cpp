#include "cbase.h"
#include "randompenguin.h"

const char *CRandomPenguin::RandomPenguin() {
	rInt = random -> RandomInt(0, 3);
	return modelList[rInt];
}

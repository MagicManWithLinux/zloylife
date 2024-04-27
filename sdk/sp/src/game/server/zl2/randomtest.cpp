#include "cbase.h"
#include "vstdlib/random.h"
#include <stdlib.h>
#include <tchar.h>

class CRandomTest {
public:
	int rInt;
	char rChar[10];
	void PrintRandomNum(void);
};

void CRandomTest::PrintRandomNum(void) {
	rInt = random->RandomInt(0, 4);
	_itoa(rInt, rChar, 10);

	TCHAR* rtChar = _tcsdup(rChar);

	Msg(rtChar);
}

void CC_RandomTest(void) {
	CRandomTest random;
	random.PrintRandomNum();
}

static ConCommand TransformPlayerToPenguin("randomtest", CC_RandomTest, "test Source SDK random function");

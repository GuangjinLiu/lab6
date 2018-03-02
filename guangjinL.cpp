#include <GL/glx.h>
#include "fonts.h"

void showName() {
	Rect r;
	//
	r.bot =  100;
	r.left = 100;
	r.center = 1;
	ggprint8b(&r, 16, 0x00ffff00, "Guangjin Liu" );
}







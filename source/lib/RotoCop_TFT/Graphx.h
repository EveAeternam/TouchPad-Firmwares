/*
  Graphx.h - RotoCop Graphics Library (v1)
  Created by Evangeline Archer, November 10, 2017.
  Property of RotoCop
*/

#ifndef Graphx_h
#define Graphx_h

#define SCREEN_X 240
#define SCREEN_Y 320
#define HALF_X 120
#define HALF_Y 160
#define THIRD_X 80
#define THIRD_Y 106

#include "Arduino.h"

class GFX
{
  public:
	void debugLines(void);
	void rotoCopLogo(int x, int y);
	void drawUI(void);
	void drawSixBoxes(void);
};

extern GFX Gfx;

#endif
/*
  Graphx.cpp - RotoCop Graphics Library (v1)
  Created by Evangeline Archer, November 10, 2017.
  Property of RotoCop
*/

#include "Arduino.h"
#include "Graphx.h"
#include <TFTv2.h>

void GFX::debugLines()
{
	Tft.drawVerticalLine(HALF_X,0,400,RED);
	Tft.drawVerticalLine(THIRD_X,0,400,YELLOW);
	Tft.drawVerticalLine(THIRD_X*2,0,400,YELLOW);
	Tft.drawVerticalLine(THIRD_X/2,0,400,WHITE);
	Tft.drawVerticalLine(THIRD_X/2*5,0,400,WHITE);

}

void GFX::rotoCopLogo(int x, int y)
{
	Tft.drawCircle(x-15, y-15, 17,BLUE);
	Tft.drawCircle(x+15, y-15, 17,BLUE);
	Tft.drawCircle(x-15, y+15, 17,BLUE);
	Tft.drawCircle(x+15, y+15, 17,BLUE);

	Tft.fillRectangle(x-23,y-23,48,48,BLACK);
  
	Tft.drawCircle(x-15, y-15, 15,BLUE);
	Tft.drawCircle(x+15, y-15, 15,BLUE);
	Tft.drawCircle(x-15, y+15, 15,BLUE);
	Tft.drawCircle(x+15, y+15, 15,BLUE);

	Tft.drawLine(x-15,y-15,x+15,y+15,CYAN);
	Tft.drawLine(x-14,y-15,x+15,y+14,CYAN);
	Tft.drawLine(x-15,y-14,x+14,y+15,CYAN);
	Tft.drawLine(x-15,y+15,x+15,y-15,CYAN);
	Tft.drawLine(x-14,y+15,x+14,y-15,CYAN);
	Tft.drawLine(x-15,y+14,x+15,y-14,CYAN);

	Tft.drawLine(x-12,y-18,x-18,y-12,BLUE);
	Tft.drawLine(x+12,y+18,x+18,y+12,BLUE);
	Tft.drawLine(x-12,y+18,x-18,y+12,BLUE);
	Tft.drawLine(x+12,y-18,x+18,y-12,BLUE);

	//Tft.drawVerticalLine(x,0,400,RED);
	//Tft.drawHorizontalLine(0,y,400,RED);
}

void GFX::drawUI()
{
	Tft.drawString("RotoCop",40,THIRD_Y,3,CYAN);
	Tft.drawString("Control",65,HALF_Y,2,CYAN);
	Tft.drawString("Station",65,HALF_Y+20,2,CYAN);
	Tft.drawString("v1 (09/11/17)",70,THIRD_Y*2,1,GRAY1);
	Tft.drawRectangle(THIRD_X-20,HALF_Y-10,THIRD_X+40,80,BLUE);
	Tft.drawRectangle(THIRD_X/2+1,240,THIRD_X*2-3,20,BLUE);
}

void GFX::drawSixBoxes()
{
	Tft.drawRectangle(0,0,HALF_X-1,THIRD_Y-1,GRAY1);
	Tft.drawRectangle(HALF_X,0,HALF_X-1,THIRD_Y-1,GRAY1);

	Tft.drawRectangle(0,THIRD_Y,HALF_X-1,THIRD_Y-1,GRAY1);
	Tft.drawRectangle(HALF_X,THIRD_Y,HALF_X-1,THIRD_Y-1,GRAY1);

	Tft.drawRectangle(0,THIRD_Y*2,HALF_X-1,THIRD_Y-1,GRAY1);
	Tft.drawRectangle(HALF_X,THIRD_Y*2,HALF_X-1,THIRD_Y-1,GRAY1);
}

GFX Gfx=GFX();
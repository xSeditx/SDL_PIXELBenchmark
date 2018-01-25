#include<iostream>
#include"Window.h"
#include <memory>
using namespace std;


void main()
{

	WINDOW Main(0,0,300,300,"SDL Benchmark Test");
	SET_ACTIVE_WINDOW(&Main);
	
	
	while(LOOP_GAME()){
	_CLS;
	double TIME = SDL_GetTicks();
	        ITERATE(y,SCREEN->HEIGHT){
	        	ITERATE(x,SCREEN->WIDTH){
					    Uint32 COLOR = RGB(RANDOM(255),RANDOM(255),RANDOM(255));
					    SET_PIXEL(x,y,COLOR);
	        	}
	        }
			Print(SCREEN->FPS); TIME = 0;
    _SYNC;
	}


}



//========== This is just basically a callback function to handle any additional keyboard stuff a normal program might have
int KEYBOARD_HANDLER(int);
int KEYBOARD_HANDLER(int message){
	return false;
}
//================================= Just added it because it was screaming at me because I didnt make one like I normally do lol

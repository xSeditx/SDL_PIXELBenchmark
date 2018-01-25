#include<iostream>
#include"Window.h"
#include <memory>

// Just realized after loading this to Github, Your going to need your SDL2.lib & SDLmain.lib like normal linked, SDL_IMAGE...maybe,
// I dont think any of those functions are here but I made this from another project I was working on so idk what the linker thinks 
// about that
//

using namespace std;


void main()
{

	WINDOW Main(0,0,300,300,"SDL Benchmark Test");
	SET_ACTIVE_WINDOW(&Main);

	while(LOOP_GAME()){
_CLS;
	        ITERATE(y, SCREEN->HEIGHT){
	        	ITERATE(x, SCREEN->WIDTH){
					    Uint32 COLOR = RGB(RANDOM(255),RANDOM(255),RANDOM(255));
					    SET_PIXEL(x,y,COLOR);
	        	}
	        }
			Print(SCREEN->FPS);
_SYNC;
	}

}



//========== This is just basically a callback function to handle any additional keyboard stuff a normal program might have
int KEYBOARD_HANDLER(int);
int KEYBOARD_HANDLER(int message){
	return false;
}
//======Just added it because compiler was screaming at me because I didnt make one like I normally do lol and my little window abstraction
// kind of requires that I have a input handler

#include "ANativeWindowCreator.h"
#include "GraphicsManager.h"
//android::ANativeWindowCreator::DisplayInfo *display1; 
extern "C"{
extern int Android_SurfaceWidth;
extern int Android_SurfaceHeight;
	ANativeWindow* window;
	android::ANativeWindowCreator::DisplayInfo *display1;
int  Android_JNI_SetOrientation(){
      	android::ANativeWindowCreator::DisplayInfo display = android::ANativeWindowCreator::GetDisplayInfo();
		/*if (display.height > display.width) {
			std::swap(display.height, display.width);
		}*/
Android_SurfaceWidth=display.width;
Android_SurfaceHeight=display.height;
display1=&display;
        fprintf(stderr," Android_JNI_SetOrientation\n");
        return 0;
}
	ANativeWindow*  Android_JNI_GetNativeWindow() {
		window = android::ANativeWindowCreator::Create("test", display1->width, display1->width);
		return window; 
	}
	int get_height(){
		return display1->height; 
	}
	int get_width(){
		return display1->width; 
	}
}



#include "api-ok.h"
#define dlog 1
extern "C"{
	extern int Android_SurfaceWidth;
	extern int Android_SurfaceHeight;
	ANativeWindow* window;
	int  Android_JNI_SetOrientation(){
		android::ANativeWindowCreator::DisplayInfo display = android::ANativeWindowCreator::GetDisplayInfo();
		/*
		   if (display.height > display.width) {
		   std::swap(display.height, display.width);
		   }*/
		//修改为一半
		display.height=display.height/2;
		Android_SurfaceWidth=display.width;
		Android_SurfaceHeight=display.height;
		fprintf(stderr," Android_JNI_SetOrientation\n");
		return 0;
	}
	ANativeWindow*  Android_JNI_GetNativeWindow() {
		window = android::ANativeWindowCreator::Create("test", Android_SurfaceWidth, Android_SurfaceHeight);
		if(dlog)fprintf(stderr," Android_JNI_GetNativeWindow\ndisplaysize: %dx%d\n",Android_SurfaceWidth,Android_SurfaceHeight);
		return window; 
	}
	int Android_JNI_GetDisplayDPI(float *ddpi, float *xdpi, float *ydpi){
		*ddpi=-1;
		*xdpi=-1;
		*ydpi=-1;
		if(dlog)fprintf(stderr,"Android_JNI_GetDisplayDPI\n");
		return 0;
	}
}


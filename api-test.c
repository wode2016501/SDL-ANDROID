#include <stdio.h>
#define dlog 1
int  Android_ActivityMutex_Lock_Running(){
	if(dlog)fprintf(stderr," Android_ActivityMutex_Lock_Running\n");
	return 0;
}
/*
int  Android_JNI_SetOrientation(){
	if(dlog)fprintf(stderr," Android_JNI_SetOrientation\n");
	return 0;
}
int  Android_JNI_GetNativeWindow(){
	if(dlog)fprintf(stderr," Android_JNI_GetNativeWindow\n");
	return 0;
}
*/
int  Android_JNI_SetActivityTitle(){
	if(dlog)fprintf(stderr," Android_JNI_SetActivityTitle\n");
	return 0;
}
int  Android_JNI_SetWindowStyle(){
	if(dlog)fprintf(stderr," Android_JNI_SetWindowStyle\n");
	return 0;
}
int  SDL_IsDeXMode(){
	if(dlog)fprintf(stderr," SDL_IsDeXMode\n");
	return 0;
}
int  SDL_IsChromebook(){
	if(dlog)fprintf(stderr," SDL_IsChromebook\n");
	return 0;
}
int  Android_JNI_MinizeWindow(){
	if(dlog)fprintf(stderr," Android_JNI_MinizeWindow\n");
	return 0;
}
int  Android_JNI_ShowMessageBox(){
	if(dlog)fprintf(stderr," Android_JNI_ShowMessageBox\n");
	return 0;
}
int  Android_JNI_SetupThread(){
	if(dlog)fprintf(stderr," Android_JNI_SetupThread\n");
	return 0;
}
int  Android_JNI_InitTouch(){
	if(dlog)fprintf(stderr," Android_JNI_InitTouch\n");
	return 0;
}
int  Android_JNI_SetClipboardText(){
	if(dlog)fprintf(stderr," Android_JNI_SetClipboardText\n");
	return 0;
}
int  Android_JNI_GetClipboardText(){
	if(dlog)fprintf(stderr," Android_JNI_GetClipboardText\n");
	return 0;
}
int  Android_JNI_HasClipboardText(){
	if(dlog)fprintf(stderr," Android_JNI_HasClipboardText\n");
	return 0;
}
int  Android_JNI_CreateCustomCursor(){
	if(dlog)fprintf(stderr," Android_JNI_CreateCustomCursor\n");
	return 0;
}
int  Android_JNI_SetCustomCursor(){
	if(dlog)fprintf(stderr," Android_JNI_SetCustomCursor\n");
	return 0;
}
int  Android_JNI_SetSystemCursor(){
	if(dlog)fprintf(stderr," Android_JNI_SetSystemCursor\n");
	return 0;
}
int  Android_JNI_ShowScreenKeyboard(){
	if(dlog)fprintf(stderr," Android_JNI_ShowScreenKeyboard\n");
	return 0;
}
int  Android_JNI_DestroyCustomCursor(){
	if(dlog)fprintf(stderr," Android_JNI_DestroyCustomCursor\n");
	return 0;
}
int  Android_JNI_HideScreenKeyboard(){
	if(dlog)fprintf(stderr," Android_JNI_HideScreenKeyboard\n");
	return 0;
}
int  Android_JNI_IsScreenKeyboardShown(){
	if(dlog)fprintf(stderr," Android_JNI_IsScreenKeyboardShown\n");
	return 0;
}
int  Android_JNI_SupportsRelativeMouse(){
	if(dlog)fprintf(stderr," Android_JNI_SupportsRelativeMouse\n");
	return 0;
}
int  Android_JNI_SetRelativeMouseEnabled(){
	if(dlog)fprintf(stderr," Android_JNI_SetRelativeMouseEnabled\n");
	return 0;
}
int  Android_JNI_GetDisplayNaturalOrientation(){
	if(dlog)fprintf(stderr," Android_JNI_GetDisplayNaturalOrientation\n");
	return 0;
}
int  Android_JNI_GetDisplayCurrentOrientation(){
	if(dlog)fprintf(stderr," Android_JNI_GetDisplayCurrentOrientation\n");
	return 0;
}
int  Android_JNI_SuspendScreenSaver(){
	if(dlog)fprintf(stderr," Android_JNI_SuspendScreenSaver\n");
	return 0;
}
int  Android_JNI_PollInputDevices(){
	if(dlog)fprintf(stderr," Android_JNI_PollInputDevices\n");
	return 0;
}
int  Android_JNI_HapticRumble(){
	if(dlog)fprintf(stderr," Android_JNI_HapticRumble\n");
	return 0;
}
int  SDL_RequestAndroidPermission(){
	if(dlog)fprintf(stderr," SDL_RequestAndroidPermission\n");
	return 0;
}
int  Android_JNI_PollHapticDevices(){
	if(dlog)fprintf(stderr," Android_JNI_PollHapticDevices\n");
	return 0;
}
int  Android_JNI_HapticRun(){
	if(dlog)fprintf(stderr," Android_JNI_HapticRun\n");
	return 0;
}
int  Android_JNI_HapticStop(){
	if(dlog)fprintf(stderr," Android_JNI_HapticStop\n");
	return 0;
}
int  SDL_GetAndroidInternalStoragePath(){
	if(dlog)fprintf(stderr," SDL_GetAndroidInternalStoragePath\n");
	return 0;
}
int  Android_AudioThreadInit(){
	if(dlog)fprintf(stderr," Android_AudioThreadInit\n");
	return 0;
}
int  SDL_GetAndroidSDKVersion(){
	if(dlog)fprintf(stderr," SDL_GetAndroidSDKVersion\n");
	return 0;
}
int  Android_StartAudioHotplug(){
	if(dlog)fprintf(stderr," Android_StartAudioHotplug\n");
	return 0;
}
int  Android_StopAudioHotplug(){
	if(dlog)fprintf(stderr," Android_StopAudioHotplug\n");
	return 0;
}
int  Android_JNI_OpenAudioDevice(){
	if(dlog)fprintf(stderr," Android_JNI_OpenAudioDevice\n");
	return 0;
}
int  Android_JNI_WriteAudioBuffer(){
	if(dlog)fprintf(stderr," Android_JNI_WriteAudioBuffer\n");
	return 0;
}
int  Android_JNI_GetAudioBuffer(){
	if(dlog)fprintf(stderr," Android_JNI_GetAudioBuffer\n");
	return 0;
}
int  SDL_IsAndroidTablet(){
	if(dlog)fprintf(stderr," SDL_IsAndroidTablet\n");
	return 0;
}
int  Android_JNI_OpenFileDescriptor(){
	if(dlog)fprintf(stderr," Android_JNI_OpenFileDescriptor\n");
	return 0;
}
int  Android_JNI_FileOpen(){
	if(dlog)fprintf(stderr," Android_JNI_FileOpen\n");
	return 0;
}
int  Android_JNI_FileSize(){
	if(dlog)fprintf(stderr," Android_JNI_FileSize\n");
	return 0;
}
int  Android_JNI_FileSeek(){
	if(dlog)fprintf(stderr," Android_JNI_FileSeek\n");
	return 0;
}
int  Android_JNI_FileRead(){
	if(dlog)fprintf(stderr," Android_JNI_FileRead\n");
	return 0;
}
int  Android_JNI_FileWrite(){
	if(dlog)fprintf(stderr," Android_JNI_FileWrite\n");
	return 0;
}
int  Android_JNI_FileClose(){
	if(dlog)fprintf(stderr," Android_JNI_FileClose\n");
	return 0;
}
int  Android_JNI_CloseAudioDevice(){
	if(dlog)fprintf(stderr," Android_JNI_CloseAudioDevice\n");
	return 0;
}
int  Android_JNI_RecordAudioBuffer(){
	if(dlog)fprintf(stderr," Android_JNI_RecordAudioBuffer\n");
	return 0;
}
int  Android_JNI_FlushRecordedAudio(){
	if(dlog)fprintf(stderr," Android_JNI_FlushRecordedAudio\n");
	return 0;
}
void sleep(int);
int  Android_JNI_GetManifestEnvironmentVariables(){
	if(dlog)fprintf(stderr," Android_JNI_GetManifestEnvironmentVariables\n");
	return 0;
}
int  Android_JNI_ShouldMinimizeOnFocusLoss(){
	if(dlog)fprintf(stderr," Android_JNI_ShouldMinimizeOnFocusLoss\n");
	return 0;
}
int  Android_ActivityMutex_Unlock(){
	if(dlog)fprintf(stderr," Android_ActivityMutex_Unlock\n");
	return 0;
}

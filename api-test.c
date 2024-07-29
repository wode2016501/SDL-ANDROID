#include <stdio.h>
int  Android_ActivityMutex_Lock_Running(){
	fprintf(stderr," Android_ActivityMutex_Lock_Running\n");
	return 0;
}
/*
int  Android_JNI_SetOrientation(){
	fprintf(stderr," Android_JNI_SetOrientation\n");
	return 0;
}
int  Android_JNI_GetNativeWindow(){
	fprintf(stderr," Android_JNI_GetNativeWindow\n");
	return 0;
}
*/
int  Android_JNI_SetActivityTitle(){
	fprintf(stderr," Android_JNI_SetActivityTitle\n");
	return 0;
}
int  Android_JNI_SetWindowStyle(){
	fprintf(stderr," Android_JNI_SetWindowStyle\n");
	return 0;
}
int  SDL_IsDeXMode(){
	fprintf(stderr," SDL_IsDeXMode\n");
	return 0;
}
int  SDL_IsChromebook(){
	fprintf(stderr," SDL_IsChromebook\n");
	return 0;
}
int  Android_JNI_MinizeWindow(){
	fprintf(stderr," Android_JNI_MinizeWindow\n");
	return 0;
}
int  Android_JNI_ShowMessageBox(){
	fprintf(stderr," Android_JNI_ShowMessageBox\n");
	return 0;
}
int  Android_JNI_SetupThread(){
	fprintf(stderr," Android_JNI_SetupThread\n");
	return 0;
}
int  Android_JNI_InitTouch(){
	fprintf(stderr," Android_JNI_InitTouch\n");
	return 0;
}
int  Android_JNI_SetClipboardText(){
	fprintf(stderr," Android_JNI_SetClipboardText\n");
	return 0;
}
int  Android_JNI_GetClipboardText(){
	fprintf(stderr," Android_JNI_GetClipboardText\n");
	return 0;
}
int  Android_JNI_HasClipboardText(){
	fprintf(stderr," Android_JNI_HasClipboardText\n");
	return 0;
}
int  Android_JNI_CreateCustomCursor(){
	fprintf(stderr," Android_JNI_CreateCustomCursor\n");
	return 0;
}
int  Android_JNI_SetCustomCursor(){
	fprintf(stderr," Android_JNI_SetCustomCursor\n");
	return 0;
}
int  Android_JNI_SetSystemCursor(){
	fprintf(stderr," Android_JNI_SetSystemCursor\n");
	return 0;
}
int  Android_JNI_ShowScreenKeyboard(){
	fprintf(stderr," Android_JNI_ShowScreenKeyboard\n");
	return 0;
}
int  Android_JNI_DestroyCustomCursor(){
	fprintf(stderr," Android_JNI_DestroyCustomCursor\n");
	return 0;
}
int  Android_JNI_HideScreenKeyboard(){
	fprintf(stderr," Android_JNI_HideScreenKeyboard\n");
	return 0;
}
int  Android_JNI_IsScreenKeyboardShown(){
	fprintf(stderr," Android_JNI_IsScreenKeyboardShown\n");
	return 0;
}
int  Android_JNI_SupportsRelativeMouse(){
	fprintf(stderr," Android_JNI_SupportsRelativeMouse\n");
	return 0;
}
int  Android_JNI_SetRelativeMouseEnabled(){
	fprintf(stderr," Android_JNI_SetRelativeMouseEnabled\n");
	return 0;
}
int  Android_JNI_GetDisplayNaturalOrientation(){
	fprintf(stderr," Android_JNI_GetDisplayNaturalOrientation\n");
	return 0;
}
int  Android_JNI_GetDisplayCurrentOrientation(){
	fprintf(stderr," Android_JNI_GetDisplayCurrentOrientation\n");
	return 0;
}
int  Android_JNI_SuspendScreenSaver(){
	fprintf(stderr," Android_JNI_SuspendScreenSaver\n");
	return 0;
}
int  Android_JNI_PollInputDevices(){
	fprintf(stderr," Android_JNI_PollInputDevices\n");
	return 0;
}
int  Android_JNI_HapticRumble(){
	fprintf(stderr," Android_JNI_HapticRumble\n");
	return 0;
}
int  SDL_RequestAndroidPermission(){
	fprintf(stderr," SDL_RequestAndroidPermission\n");
	return 0;
}
int  Android_JNI_PollHapticDevices(){
	fprintf(stderr," Android_JNI_PollHapticDevices\n");
	return 0;
}
int  Android_JNI_HapticRun(){
	fprintf(stderr," Android_JNI_HapticRun\n");
	return 0;
}
int  Android_JNI_HapticStop(){
	fprintf(stderr," Android_JNI_HapticStop\n");
	return 0;
}
int  SDL_GetAndroidInternalStoragePath(){
	fprintf(stderr," SDL_GetAndroidInternalStoragePath\n");
	return 0;
}
int  Android_AudioThreadInit(){
	fprintf(stderr," Android_AudioThreadInit\n");
	return 0;
}
int  SDL_GetAndroidSDKVersion(){
	fprintf(stderr," SDL_GetAndroidSDKVersion\n");
	return 0;
}
int  Android_StartAudioHotplug(){
	fprintf(stderr," Android_StartAudioHotplug\n");
	return 0;
}
int  Android_StopAudioHotplug(){
	fprintf(stderr," Android_StopAudioHotplug\n");
	return 0;
}
int  Android_JNI_OpenAudioDevice(){
	fprintf(stderr," Android_JNI_OpenAudioDevice\n");
	return 0;
}
int  Android_JNI_WriteAudioBuffer(){
	fprintf(stderr," Android_JNI_WriteAudioBuffer\n");
	return 0;
}
int  Android_JNI_GetAudioBuffer(){
	fprintf(stderr," Android_JNI_GetAudioBuffer\n");
	return 0;
}
int  SDL_IsAndroidTablet(){
	fprintf(stderr," SDL_IsAndroidTablet\n");
	return 0;
}
int  Android_JNI_OpenFileDescriptor(){
	fprintf(stderr," Android_JNI_OpenFileDescriptor\n");
	return 0;
}
int  Android_JNI_FileOpen(){
	fprintf(stderr," Android_JNI_FileOpen\n");
	return 0;
}
int  Android_JNI_FileSize(){
	fprintf(stderr," Android_JNI_FileSize\n");
	return 0;
}
int  Android_JNI_FileSeek(){
	fprintf(stderr," Android_JNI_FileSeek\n");
	return 0;
}
int  Android_JNI_FileRead(){
	fprintf(stderr," Android_JNI_FileRead\n");
	return 0;
}
int  Android_JNI_FileWrite(){
	fprintf(stderr," Android_JNI_FileWrite\n");
	return 0;
}
int  Android_JNI_FileClose(){
	fprintf(stderr," Android_JNI_FileClose\n");
	return 0;
}
int  Android_JNI_CloseAudioDevice(){
	fprintf(stderr," Android_JNI_CloseAudioDevice\n");
	return 0;
}
int  Android_JNI_RecordAudioBuffer(){
	fprintf(stderr," Android_JNI_RecordAudioBuffer\n");
	return 0;
}
int  Android_JNI_FlushRecordedAudio(){
	fprintf(stderr," Android_JNI_FlushRecordedAudio\n");
	return 0;
}
int  Android_JNI_GetManifestEnvironmentVariables(){
	fprintf(stderr," Android_JNI_GetManifestEnvironmentVariables\n");
	return 0;
}
int  Android_JNI_ShouldMinimizeOnFocusLoss(){
	fprintf(stderr," Android_JNI_ShouldMinimizeOnFocusLoss\n");
	return 0;
}
int  Android_ActivityMutex_Unlock(){
	fprintf(stderr," Android_ActivityMutex_Unlock\n");
	return 0;
}

#AndroidImgui的Androidwindow移植到sdl上显示


git https://github.com/wode2016501/AndroidImgui

cp api-ok.cpp AndroidImgui/src 

cd AndroidImgui/scr

c++ api-ok.cpp -c -I. 

cp api-ok.o ../..

gcc api-test.c -c

#下载SDL源码解压

#2.0

#echo |tee $(find -name SDL_main.h) $(find -name  SDL_android.c)

#3.0

  echo |tee $(find -name  SDL_android.c)
  
  #SDL_main.h:116
  
          //#define SDL_MAIN_NEEDED 1

#编译得到静态库

#测试

gcc SDL-main/test/testvulkan.c api-ok.o api-test.o SDL-main/build/*.a

adb push  a.out /data/local/tmp

adb shell  /data/local/tmp/a.out

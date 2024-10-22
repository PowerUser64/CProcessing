cmake_minimum_required(VERSION 3.29)

project(CProcessingExample C)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include_directories(./CProcessing/inc ./inc-linux-overrides)

include_directories(./CProcessing/GLAD ./CProcessing/GLFW
                    ./CProcessing/nanovg/src ./CProcessing/GLFW/inc)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_library(
  CProcessing
  ./CProcessing/Source/CP_Color.c
  ./CProcessing/Source/CP_File.c
  ./CProcessing/Source/CP_Graphics.c
  ./CProcessing/Source/CP_Image.c
  ./CProcessing/Source/CP_Input.c
  ./CProcessing/Source/CP_Math.c
  ./CProcessing/Source/CP_Noise.c
  ./CProcessing/Source/CP_Random.c
  ./CProcessing/Source/CP_Setting.c
  ./CProcessing/Source/CP_Sound.c
  ./CProcessing/Source/CP_System.c
  ./CProcessing/Source/CP_Text.c
  ./CProcessing/Source/CP_Time.c
  ./CProcessing/Source/Internal_Color.h
  ./CProcessing/Source/Internal_File.h
  ./CProcessing/Source/Internal_Image.h
  ./CProcessing/Source/Internal_Input.h
  ./CProcessing/Source/Internal_Math.h
  ./CProcessing/Source/Internal_Noise.h
  ./CProcessing/Source/Internal_Random.h
  ./CProcessing/Source/Internal_Resources.h
  ./CProcessing/Source/Internal_Sound.h
  ./CProcessing/Source/Internal_System.h
  ./CProcessing/Source/Internal_Text.h
  ./CProcessing/Source/tinycthread.c
  ./CProcessing/Source/tinycthread.h
  ./CProcessing/Source/vect.c
  ./CProcessing/Source/vect.h)

add_executable(main ./main.c)

target_link_libraries(main CProcessing GLFW GL glibc)

link_directories(./CProcessing/GLFW/lib/x64 ./CProcessing/FMOD/lib/x64)

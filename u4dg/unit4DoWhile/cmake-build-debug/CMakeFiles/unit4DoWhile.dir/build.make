# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\sanay\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.5233.144\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\sanay\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.5233.144\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\unit4DoWhile.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\unit4DoWhile.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\unit4DoWhile.dir\flags.make

CMakeFiles\unit4DoWhile.dir\main.cpp.obj: CMakeFiles\unit4DoWhile.dir\flags.make
CMakeFiles\unit4DoWhile.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/unit4DoWhile.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\unit4DoWhile.dir\main.cpp.obj /FdCMakeFiles\unit4DoWhile.dir\ /FS -c "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\main.cpp"
<<

CMakeFiles\unit4DoWhile.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit4DoWhile.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\unit4DoWhile.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\main.cpp"
<<

CMakeFiles\unit4DoWhile.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit4DoWhile.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\unit4DoWhile.dir\main.cpp.s /c "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\main.cpp"
<<

# Object files for target unit4DoWhile
unit4DoWhile_OBJECTS = \
"CMakeFiles\unit4DoWhile.dir\main.cpp.obj"

# External object files for target unit4DoWhile
unit4DoWhile_EXTERNAL_OBJECTS =

unit4DoWhile.exe: CMakeFiles\unit4DoWhile.dir\main.cpp.obj
unit4DoWhile.exe: CMakeFiles\unit4DoWhile.dir\build.make
unit4DoWhile.exe: CMakeFiles\unit4DoWhile.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable unit4DoWhile.exe"
	C:\Users\sanay\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.5233.144\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\unit4DoWhile.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\unit4DoWhile.dir\objects1.rsp @<<
 /out:unit4DoWhile.exe /implib:unit4DoWhile.lib /pdb:"C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\cmake-build-debug\unit4DoWhile.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\unit4DoWhile.dir\build: unit4DoWhile.exe

.PHONY : CMakeFiles\unit4DoWhile.dir\build

CMakeFiles\unit4DoWhile.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\unit4DoWhile.dir\cmake_clean.cmake
.PHONY : CMakeFiles\unit4DoWhile.dir\clean

CMakeFiles\unit4DoWhile.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile" "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile" "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\cmake-build-debug" "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\cmake-build-debug" "C:\Users\sanay\Documents\CompSCi Programs\CompSci10\u4dg\unit4DoWhile\cmake-build-debug\CMakeFiles\unit4DoWhile.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\unit4DoWhile.dir\depend

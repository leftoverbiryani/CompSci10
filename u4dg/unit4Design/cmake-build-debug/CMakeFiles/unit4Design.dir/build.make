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
CMAKE_COMMAND = C:\Users\sanay\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6817.32\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\sanay\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6817.32\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\unit4Design.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\unit4Design.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\unit4Design.dir\flags.make

CMakeFiles\unit4Design.dir\main.cpp.obj: CMakeFiles\unit4Design.dir\flags.make
CMakeFiles\unit4Design.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/unit4Design.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\unit4Design.dir\main.cpp.obj /FdCMakeFiles\unit4Design.dir\ /FS -c C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\main.cpp
<<

CMakeFiles\unit4Design.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit4Design.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\unit4Design.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\main.cpp
<<

CMakeFiles\unit4Design.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit4Design.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\unit4Design.dir\main.cpp.s /c C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\main.cpp
<<

# Object files for target unit4Design
unit4Design_OBJECTS = \
"CMakeFiles\unit4Design.dir\main.cpp.obj"

# External object files for target unit4Design
unit4Design_EXTERNAL_OBJECTS =

unit4Design.exe: CMakeFiles\unit4Design.dir\main.cpp.obj
unit4Design.exe: CMakeFiles\unit4Design.dir\build.make
unit4Design.exe: CMakeFiles\unit4Design.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable unit4Design.exe"
	C:\Users\sanay\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6817.32\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\unit4Design.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\unit4Design.dir\objects1.rsp @<<
 /out:unit4Design.exe /implib:unit4Design.lib /pdb:C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\cmake-build-debug\unit4Design.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\unit4Design.dir\build: unit4Design.exe

.PHONY : CMakeFiles\unit4Design.dir\build

CMakeFiles\unit4Design.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\unit4Design.dir\cmake_clean.cmake
.PHONY : CMakeFiles\unit4Design.dir\clean

CMakeFiles\unit4Design.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\cmake-build-debug C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\cmake-build-debug C:\Users\sanay\Documents\apCompSci10\CompSci10\u4dg\unit4Design\cmake-build-debug\CMakeFiles\unit4Design.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\unit4Design.dir\depend


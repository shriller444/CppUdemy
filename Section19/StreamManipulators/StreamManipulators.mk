##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=StreamManipulators
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/Section19
ProjectPath            :=D:/UdemyMain/c++/Section19/StreamManipulators
IntermediateDirectory  :=../build-$(ConfigurationName)/StreamManipulators
OutDir                 :=../build-$(ConfigurationName)/StreamManipulators
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simon
Date                   :=26/07/2020
CodeLitePath           :=D:/CodeLite
LinkerName             :=D:/mingw/mingw64/bin/g++.exe
SharedObjectLinkerName :=D:/mingw/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=D:/mingw/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/mingw/mingw64/bin/ar.exe rcu
CXX      := D:/mingw/mingw64/bin/g++.exe
CC       := D:/mingw/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/mingw/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\CodeLite
Objects0=../build-$(ConfigurationName)/StreamManipulators/dfsdfsdf.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/StreamManipulators/Boolean.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/StreamManipulators/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\StreamManipulators" mkdir "..\build-$(ConfigurationName)\StreamManipulators"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\StreamManipulators" mkdir "..\build-$(ConfigurationName)\StreamManipulators"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/StreamManipulators/.d:
	@if not exist "..\build-$(ConfigurationName)\StreamManipulators" mkdir "..\build-$(ConfigurationName)\StreamManipulators"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/StreamManipulators/dfsdfsdf.cpp$(ObjectSuffix): dfsdfsdf.cpp ../build-$(ConfigurationName)/StreamManipulators/dfsdfsdf.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section19/StreamManipulators/dfsdfsdf.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/dfsdfsdf.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/StreamManipulators/dfsdfsdf.cpp$(DependSuffix): dfsdfsdf.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/StreamManipulators/dfsdfsdf.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/StreamManipulators/dfsdfsdf.cpp$(DependSuffix) -MM dfsdfsdf.cpp

../build-$(ConfigurationName)/StreamManipulators/dfsdfsdf.cpp$(PreprocessSuffix): dfsdfsdf.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/StreamManipulators/dfsdfsdf.cpp$(PreprocessSuffix) dfsdfsdf.cpp

../build-$(ConfigurationName)/StreamManipulators/Boolean.cpp$(ObjectSuffix): Boolean.cpp ../build-$(ConfigurationName)/StreamManipulators/Boolean.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section19/StreamManipulators/Boolean.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Boolean.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/StreamManipulators/Boolean.cpp$(DependSuffix): Boolean.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/StreamManipulators/Boolean.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/StreamManipulators/Boolean.cpp$(DependSuffix) -MM Boolean.cpp

../build-$(ConfigurationName)/StreamManipulators/Boolean.cpp$(PreprocessSuffix): Boolean.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/StreamManipulators/Boolean.cpp$(PreprocessSuffix) Boolean.cpp


-include ../build-$(ConfigurationName)/StreamManipulators//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



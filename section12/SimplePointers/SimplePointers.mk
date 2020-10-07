##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SimplePointers
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/section12
ProjectPath            :=D:/UdemyMain/c++/section12/SimplePointers
IntermediateDirectory  :=../build-$(ConfigurationName)/SimplePointers
OutDir                 :=../build-$(ConfigurationName)/SimplePointers
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simon
Date                   :=16/07/2020
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
Objects0=../build-$(ConfigurationName)/SimplePointers/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/SimplePointers/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\SimplePointers" mkdir "..\build-$(ConfigurationName)\SimplePointers"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\SimplePointers" mkdir "..\build-$(ConfigurationName)\SimplePointers"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/SimplePointers/.d:
	@if not exist "..\build-$(ConfigurationName)\SimplePointers" mkdir "..\build-$(ConfigurationName)\SimplePointers"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/SimplePointers/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/SimplePointers/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/section12/SimplePointers/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/SimplePointers/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/SimplePointers/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/SimplePointers/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/SimplePointers/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/SimplePointers/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/SimplePointers//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



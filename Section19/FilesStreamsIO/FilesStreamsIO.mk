##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=FilesStreamsIO
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/Section19
ProjectPath            :=D:/UdemyMain/c++/Section19/FilesStreamsIO
IntermediateDirectory  :=../build-$(ConfigurationName)/FilesStreamsIO
OutDir                 :=../build-$(ConfigurationName)/FilesStreamsIO
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simon
Date                   :=27/07/2020
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
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/mingw/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\CodeLite
Objects0=../build-$(ConfigurationName)/FilesStreamsIO/test.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/FilesStreamsIO/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\FilesStreamsIO" mkdir "..\build-$(ConfigurationName)\FilesStreamsIO"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\FilesStreamsIO" mkdir "..\build-$(ConfigurationName)\FilesStreamsIO"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/FilesStreamsIO/.d:
	@if not exist "..\build-$(ConfigurationName)\FilesStreamsIO" mkdir "..\build-$(ConfigurationName)\FilesStreamsIO"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/FilesStreamsIO/test.cpp$(ObjectSuffix): test.cpp ../build-$(ConfigurationName)/FilesStreamsIO/test.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section19/FilesStreamsIO/test.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FilesStreamsIO/test.cpp$(DependSuffix): test.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FilesStreamsIO/test.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FilesStreamsIO/test.cpp$(DependSuffix) -MM test.cpp

../build-$(ConfigurationName)/FilesStreamsIO/test.cpp$(PreprocessSuffix): test.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FilesStreamsIO/test.cpp$(PreprocessSuffix) test.cpp


-include ../build-$(ConfigurationName)/FilesStreamsIO//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



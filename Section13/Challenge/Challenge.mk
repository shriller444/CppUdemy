##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Challenge
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/Section13
ProjectPath            :=D:/UdemyMain/c++/Section13/Challenge
IntermediateDirectory  :=../build-$(ConfigurationName)/Challenge
OutDir                 :=../build-$(ConfigurationName)/Challenge
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simon
Date                   :=08/09/2020
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
Objects0=../build-$(ConfigurationName)/Challenge/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Challenge/Movies.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Challenge/Movie.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Challenge/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Challenge" mkdir "..\build-$(ConfigurationName)\Challenge"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Challenge" mkdir "..\build-$(ConfigurationName)\Challenge"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Challenge/.d:
	@if not exist "..\build-$(ConfigurationName)\Challenge" mkdir "..\build-$(ConfigurationName)\Challenge"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Challenge/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Challenge/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section13/Challenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Challenge/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Challenge/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Challenge/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Challenge/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Challenge/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Challenge/Movies.cpp$(ObjectSuffix): Movies.cpp ../build-$(ConfigurationName)/Challenge/Movies.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section13/Challenge/Movies.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Movies.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Challenge/Movies.cpp$(DependSuffix): Movies.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Challenge/Movies.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Challenge/Movies.cpp$(DependSuffix) -MM Movies.cpp

../build-$(ConfigurationName)/Challenge/Movies.cpp$(PreprocessSuffix): Movies.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Challenge/Movies.cpp$(PreprocessSuffix) Movies.cpp

../build-$(ConfigurationName)/Challenge/Movie.cpp$(ObjectSuffix): Movie.cpp ../build-$(ConfigurationName)/Challenge/Movie.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section13/Challenge/Movie.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Movie.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Challenge/Movie.cpp$(DependSuffix): Movie.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Challenge/Movie.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Challenge/Movie.cpp$(DependSuffix) -MM Movie.cpp

../build-$(ConfigurationName)/Challenge/Movie.cpp$(PreprocessSuffix): Movie.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Challenge/Movie.cpp$(PreprocessSuffix) Movie.cpp


-include ../build-$(ConfigurationName)/Challenge//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



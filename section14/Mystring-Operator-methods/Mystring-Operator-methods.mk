##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Mystring-Operator-methods
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/section14
ProjectPath            :=D:/UdemyMain/c++/section14/Mystring-Operator-methods
IntermediateDirectory  :=../build-$(ConfigurationName)/Mystring-Operator-methods
OutDir                 :=../build-$(ConfigurationName)/Mystring-Operator-methods
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simon
Date                   :=21/07/2020
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
Objects0=../build-$(ConfigurationName)/Mystring-Operator-methods/Mystring.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Mystring-Operator-methods/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Mystring-Operator-methods/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Mystring-Operator-methods" mkdir "..\build-$(ConfigurationName)\Mystring-Operator-methods"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Mystring-Operator-methods" mkdir "..\build-$(ConfigurationName)\Mystring-Operator-methods"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Mystring-Operator-methods/.d:
	@if not exist "..\build-$(ConfigurationName)\Mystring-Operator-methods" mkdir "..\build-$(ConfigurationName)\Mystring-Operator-methods"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Mystring-Operator-methods/Mystring.cpp$(ObjectSuffix): Mystring.cpp ../build-$(ConfigurationName)/Mystring-Operator-methods/Mystring.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/section14/Mystring-Operator-methods/Mystring.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mystring.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Mystring-Operator-methods/Mystring.cpp$(DependSuffix): Mystring.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Mystring-Operator-methods/Mystring.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Mystring-Operator-methods/Mystring.cpp$(DependSuffix) -MM Mystring.cpp

../build-$(ConfigurationName)/Mystring-Operator-methods/Mystring.cpp$(PreprocessSuffix): Mystring.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Mystring-Operator-methods/Mystring.cpp$(PreprocessSuffix) Mystring.cpp

../build-$(ConfigurationName)/Mystring-Operator-methods/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Mystring-Operator-methods/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/section14/Mystring-Operator-methods/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Mystring-Operator-methods/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Mystring-Operator-methods/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Mystring-Operator-methods/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Mystring-Operator-methods/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Mystring-Operator-methods/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/Mystring-Operator-methods//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


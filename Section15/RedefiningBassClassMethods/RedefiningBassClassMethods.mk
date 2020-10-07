##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=RedefiningBassClassMethods
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/Section15
ProjectPath            :=D:/UdemyMain/c++/Section15/RedefiningBassClassMethods
IntermediateDirectory  :=../build-$(ConfigurationName)/RedefiningBassClassMethods
OutDir                 :=../build-$(ConfigurationName)/RedefiningBassClassMethods
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simon
Date                   :=23/07/2020
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
Objects0=../build-$(ConfigurationName)/RedefiningBassClassMethods/Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/RedefiningBassClassMethods/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/RedefiningBassClassMethods/Savings_Account.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/RedefiningBassClassMethods/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\RedefiningBassClassMethods" mkdir "..\build-$(ConfigurationName)\RedefiningBassClassMethods"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\RedefiningBassClassMethods" mkdir "..\build-$(ConfigurationName)\RedefiningBassClassMethods"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/RedefiningBassClassMethods/.d:
	@if not exist "..\build-$(ConfigurationName)\RedefiningBassClassMethods" mkdir "..\build-$(ConfigurationName)\RedefiningBassClassMethods"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/RedefiningBassClassMethods/Account.cpp$(ObjectSuffix): Account.cpp ../build-$(ConfigurationName)/RedefiningBassClassMethods/Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/RedefiningBassClassMethods/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/RedefiningBassClassMethods/Account.cpp$(DependSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/RedefiningBassClassMethods/Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/RedefiningBassClassMethods/Account.cpp$(DependSuffix) -MM Account.cpp

../build-$(ConfigurationName)/RedefiningBassClassMethods/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/RedefiningBassClassMethods/Account.cpp$(PreprocessSuffix) Account.cpp

../build-$(ConfigurationName)/RedefiningBassClassMethods/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/RedefiningBassClassMethods/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/RedefiningBassClassMethods/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/RedefiningBassClassMethods/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/RedefiningBassClassMethods/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/RedefiningBassClassMethods/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/RedefiningBassClassMethods/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/RedefiningBassClassMethods/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/RedefiningBassClassMethods/Savings_Account.cpp$(ObjectSuffix): Savings_Account.cpp ../build-$(ConfigurationName)/RedefiningBassClassMethods/Savings_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/RedefiningBassClassMethods/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/RedefiningBassClassMethods/Savings_Account.cpp$(DependSuffix): Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/RedefiningBassClassMethods/Savings_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/RedefiningBassClassMethods/Savings_Account.cpp$(DependSuffix) -MM Savings_Account.cpp

../build-$(ConfigurationName)/RedefiningBassClassMethods/Savings_Account.cpp$(PreprocessSuffix): Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/RedefiningBassClassMethods/Savings_Account.cpp$(PreprocessSuffix) Savings_Account.cpp


-include ../build-$(ConfigurationName)/RedefiningBassClassMethods//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



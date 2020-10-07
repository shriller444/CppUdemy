##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Challenge
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/Section15
ProjectPath            :=D:/UdemyMain/c++/Section15/Challenge
IntermediateDirectory  :=../build-$(ConfigurationName)/Challenge
OutDir                 :=../build-$(ConfigurationName)/Challenge
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simon
Date                   :=24/07/2020
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
Objects0=../build-$(ConfigurationName)/Challenge/Trust_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Challenge/Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Challenge/Savings_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Challenge/Checking_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Challenge/Account_Util.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Challenge/main.cpp$(ObjectSuffix) 



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
../build-$(ConfigurationName)/Challenge/Trust_Account.cpp$(ObjectSuffix): Trust_Account.cpp ../build-$(ConfigurationName)/Challenge/Trust_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/Challenge/Trust_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Trust_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Challenge/Trust_Account.cpp$(DependSuffix): Trust_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Challenge/Trust_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Challenge/Trust_Account.cpp$(DependSuffix) -MM Trust_Account.cpp

../build-$(ConfigurationName)/Challenge/Trust_Account.cpp$(PreprocessSuffix): Trust_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Challenge/Trust_Account.cpp$(PreprocessSuffix) Trust_Account.cpp

../build-$(ConfigurationName)/Challenge/Account.cpp$(ObjectSuffix): Account.cpp ../build-$(ConfigurationName)/Challenge/Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/Challenge/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Challenge/Account.cpp$(DependSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Challenge/Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Challenge/Account.cpp$(DependSuffix) -MM Account.cpp

../build-$(ConfigurationName)/Challenge/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Challenge/Account.cpp$(PreprocessSuffix) Account.cpp

../build-$(ConfigurationName)/Challenge/Savings_Account.cpp$(ObjectSuffix): Savings_Account.cpp ../build-$(ConfigurationName)/Challenge/Savings_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/Challenge/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Challenge/Savings_Account.cpp$(DependSuffix): Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Challenge/Savings_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Challenge/Savings_Account.cpp$(DependSuffix) -MM Savings_Account.cpp

../build-$(ConfigurationName)/Challenge/Savings_Account.cpp$(PreprocessSuffix): Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Challenge/Savings_Account.cpp$(PreprocessSuffix) Savings_Account.cpp

../build-$(ConfigurationName)/Challenge/Checking_Account.cpp$(ObjectSuffix): Checking_Account.cpp ../build-$(ConfigurationName)/Challenge/Checking_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/Challenge/Checking_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Checking_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Challenge/Checking_Account.cpp$(DependSuffix): Checking_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Challenge/Checking_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Challenge/Checking_Account.cpp$(DependSuffix) -MM Checking_Account.cpp

../build-$(ConfigurationName)/Challenge/Checking_Account.cpp$(PreprocessSuffix): Checking_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Challenge/Checking_Account.cpp$(PreprocessSuffix) Checking_Account.cpp

../build-$(ConfigurationName)/Challenge/Account_Util.cpp$(ObjectSuffix): Account_Util.cpp ../build-$(ConfigurationName)/Challenge/Account_Util.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/Challenge/Account_Util.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account_Util.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Challenge/Account_Util.cpp$(DependSuffix): Account_Util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Challenge/Account_Util.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Challenge/Account_Util.cpp$(DependSuffix) -MM Account_Util.cpp

../build-$(ConfigurationName)/Challenge/Account_Util.cpp$(PreprocessSuffix): Account_Util.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Challenge/Account_Util.cpp$(PreprocessSuffix) Account_Util.cpp

../build-$(ConfigurationName)/Challenge/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Challenge/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/Challenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Challenge/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Challenge/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Challenge/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Challenge/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Challenge/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/Challenge//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



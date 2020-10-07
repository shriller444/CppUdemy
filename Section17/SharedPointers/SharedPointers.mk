##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SharedPointers
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/Section17
ProjectPath            :=D:/UdemyMain/c++/Section17/SharedPointers
IntermediateDirectory  :=../build-$(ConfigurationName)/SharedPointers
OutDir                 :=../build-$(ConfigurationName)/SharedPointers
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simon
Date                   :=25/07/2020
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
Objects0=../build-$(ConfigurationName)/SharedPointers/Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/SharedPointers/Account_Util.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/SharedPointers/Checking_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/SharedPointers/Trust_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/SharedPointers/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/SharedPointers/Savings_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/SharedPointers/I_Printable.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/SharedPointers/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\SharedPointers" mkdir "..\build-$(ConfigurationName)\SharedPointers"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\SharedPointers" mkdir "..\build-$(ConfigurationName)\SharedPointers"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/SharedPointers/.d:
	@if not exist "..\build-$(ConfigurationName)\SharedPointers" mkdir "..\build-$(ConfigurationName)\SharedPointers"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/SharedPointers/Account.cpp$(ObjectSuffix): Account.cpp ../build-$(ConfigurationName)/SharedPointers/Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section17/SharedPointers/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/SharedPointers/Account.cpp$(DependSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/SharedPointers/Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/SharedPointers/Account.cpp$(DependSuffix) -MM Account.cpp

../build-$(ConfigurationName)/SharedPointers/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/SharedPointers/Account.cpp$(PreprocessSuffix) Account.cpp

../build-$(ConfigurationName)/SharedPointers/Account_Util.cpp$(ObjectSuffix): Account_Util.cpp ../build-$(ConfigurationName)/SharedPointers/Account_Util.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section17/SharedPointers/Account_Util.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account_Util.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/SharedPointers/Account_Util.cpp$(DependSuffix): Account_Util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/SharedPointers/Account_Util.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/SharedPointers/Account_Util.cpp$(DependSuffix) -MM Account_Util.cpp

../build-$(ConfigurationName)/SharedPointers/Account_Util.cpp$(PreprocessSuffix): Account_Util.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/SharedPointers/Account_Util.cpp$(PreprocessSuffix) Account_Util.cpp

../build-$(ConfigurationName)/SharedPointers/Checking_Account.cpp$(ObjectSuffix): Checking_Account.cpp ../build-$(ConfigurationName)/SharedPointers/Checking_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section17/SharedPointers/Checking_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Checking_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/SharedPointers/Checking_Account.cpp$(DependSuffix): Checking_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/SharedPointers/Checking_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/SharedPointers/Checking_Account.cpp$(DependSuffix) -MM Checking_Account.cpp

../build-$(ConfigurationName)/SharedPointers/Checking_Account.cpp$(PreprocessSuffix): Checking_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/SharedPointers/Checking_Account.cpp$(PreprocessSuffix) Checking_Account.cpp

../build-$(ConfigurationName)/SharedPointers/Trust_Account.cpp$(ObjectSuffix): Trust_Account.cpp ../build-$(ConfigurationName)/SharedPointers/Trust_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section17/SharedPointers/Trust_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Trust_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/SharedPointers/Trust_Account.cpp$(DependSuffix): Trust_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/SharedPointers/Trust_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/SharedPointers/Trust_Account.cpp$(DependSuffix) -MM Trust_Account.cpp

../build-$(ConfigurationName)/SharedPointers/Trust_Account.cpp$(PreprocessSuffix): Trust_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/SharedPointers/Trust_Account.cpp$(PreprocessSuffix) Trust_Account.cpp

../build-$(ConfigurationName)/SharedPointers/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/SharedPointers/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section17/SharedPointers/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/SharedPointers/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/SharedPointers/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/SharedPointers/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/SharedPointers/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/SharedPointers/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/SharedPointers/Savings_Account.cpp$(ObjectSuffix): Savings_Account.cpp ../build-$(ConfigurationName)/SharedPointers/Savings_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section17/SharedPointers/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/SharedPointers/Savings_Account.cpp$(DependSuffix): Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/SharedPointers/Savings_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/SharedPointers/Savings_Account.cpp$(DependSuffix) -MM Savings_Account.cpp

../build-$(ConfigurationName)/SharedPointers/Savings_Account.cpp$(PreprocessSuffix): Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/SharedPointers/Savings_Account.cpp$(PreprocessSuffix) Savings_Account.cpp

../build-$(ConfigurationName)/SharedPointers/I_Printable.cpp$(ObjectSuffix): I_Printable.cpp ../build-$(ConfigurationName)/SharedPointers/I_Printable.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section17/SharedPointers/I_Printable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/SharedPointers/I_Printable.cpp$(DependSuffix): I_Printable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/SharedPointers/I_Printable.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/SharedPointers/I_Printable.cpp$(DependSuffix) -MM I_Printable.cpp

../build-$(ConfigurationName)/SharedPointers/I_Printable.cpp$(PreprocessSuffix): I_Printable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/SharedPointers/I_Printable.cpp$(PreprocessSuffix) I_Printable.cpp


-include ../build-$(ConfigurationName)/SharedPointers//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ConstructorException
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/Section18
ProjectPath            :=D:/UdemyMain/c++/Section18/ConstructorException
IntermediateDirectory  :=../build-$(ConfigurationName)/ConstructorException
OutDir                 :=../build-$(ConfigurationName)/ConstructorException
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
Objects0=../build-$(ConfigurationName)/ConstructorException/I_Printable.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/ConstructorException/Account_Util.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/ConstructorException/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/ConstructorException/Savings_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/ConstructorException/Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/ConstructorException/Trust_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/ConstructorException/Checking_Account.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/ConstructorException/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\ConstructorException" mkdir "..\build-$(ConfigurationName)\ConstructorException"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\ConstructorException" mkdir "..\build-$(ConfigurationName)\ConstructorException"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/ConstructorException/.d:
	@if not exist "..\build-$(ConfigurationName)\ConstructorException" mkdir "..\build-$(ConfigurationName)\ConstructorException"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/ConstructorException/I_Printable.cpp$(ObjectSuffix): I_Printable.cpp ../build-$(ConfigurationName)/ConstructorException/I_Printable.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section18/ConstructorException/I_Printable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ConstructorException/I_Printable.cpp$(DependSuffix): I_Printable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ConstructorException/I_Printable.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ConstructorException/I_Printable.cpp$(DependSuffix) -MM I_Printable.cpp

../build-$(ConfigurationName)/ConstructorException/I_Printable.cpp$(PreprocessSuffix): I_Printable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ConstructorException/I_Printable.cpp$(PreprocessSuffix) I_Printable.cpp

../build-$(ConfigurationName)/ConstructorException/Account_Util.cpp$(ObjectSuffix): Account_Util.cpp ../build-$(ConfigurationName)/ConstructorException/Account_Util.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section18/ConstructorException/Account_Util.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account_Util.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ConstructorException/Account_Util.cpp$(DependSuffix): Account_Util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ConstructorException/Account_Util.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ConstructorException/Account_Util.cpp$(DependSuffix) -MM Account_Util.cpp

../build-$(ConfigurationName)/ConstructorException/Account_Util.cpp$(PreprocessSuffix): Account_Util.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ConstructorException/Account_Util.cpp$(PreprocessSuffix) Account_Util.cpp

../build-$(ConfigurationName)/ConstructorException/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/ConstructorException/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section18/ConstructorException/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ConstructorException/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ConstructorException/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ConstructorException/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/ConstructorException/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ConstructorException/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/ConstructorException/Savings_Account.cpp$(ObjectSuffix): Savings_Account.cpp ../build-$(ConfigurationName)/ConstructorException/Savings_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section18/ConstructorException/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ConstructorException/Savings_Account.cpp$(DependSuffix): Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ConstructorException/Savings_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ConstructorException/Savings_Account.cpp$(DependSuffix) -MM Savings_Account.cpp

../build-$(ConfigurationName)/ConstructorException/Savings_Account.cpp$(PreprocessSuffix): Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ConstructorException/Savings_Account.cpp$(PreprocessSuffix) Savings_Account.cpp

../build-$(ConfigurationName)/ConstructorException/Account.cpp$(ObjectSuffix): Account.cpp ../build-$(ConfigurationName)/ConstructorException/Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section18/ConstructorException/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ConstructorException/Account.cpp$(DependSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ConstructorException/Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ConstructorException/Account.cpp$(DependSuffix) -MM Account.cpp

../build-$(ConfigurationName)/ConstructorException/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ConstructorException/Account.cpp$(PreprocessSuffix) Account.cpp

../build-$(ConfigurationName)/ConstructorException/Trust_Account.cpp$(ObjectSuffix): Trust_Account.cpp ../build-$(ConfigurationName)/ConstructorException/Trust_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section18/ConstructorException/Trust_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Trust_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ConstructorException/Trust_Account.cpp$(DependSuffix): Trust_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ConstructorException/Trust_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ConstructorException/Trust_Account.cpp$(DependSuffix) -MM Trust_Account.cpp

../build-$(ConfigurationName)/ConstructorException/Trust_Account.cpp$(PreprocessSuffix): Trust_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ConstructorException/Trust_Account.cpp$(PreprocessSuffix) Trust_Account.cpp

../build-$(ConfigurationName)/ConstructorException/Checking_Account.cpp$(ObjectSuffix): Checking_Account.cpp ../build-$(ConfigurationName)/ConstructorException/Checking_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section18/ConstructorException/Checking_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Checking_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/ConstructorException/Checking_Account.cpp$(DependSuffix): Checking_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/ConstructorException/Checking_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/ConstructorException/Checking_Account.cpp$(DependSuffix) -MM Checking_Account.cpp

../build-$(ConfigurationName)/ConstructorException/Checking_Account.cpp$(PreprocessSuffix): Checking_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/ConstructorException/Checking_Account.cpp$(PreprocessSuffix) Checking_Account.cpp


-include ../build-$(ConfigurationName)/ConstructorException//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



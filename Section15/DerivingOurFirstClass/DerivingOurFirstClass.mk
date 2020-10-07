##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=DerivingOurFirstClass
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/Section15
ProjectPath            :=D:/UdemyMain/c++/Section15/DerivingOurFirstClass
IntermediateDirectory  :=../build-$(ConfigurationName)/DerivingOurFirstClass
OutDir                 :=../build-$(ConfigurationName)/DerivingOurFirstClass
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
Objects0=../build-$(ConfigurationName)/DerivingOurFirstClass/Savings_Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/DerivingOurFirstClass/Account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/DerivingOurFirstClass/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/DerivingOurFirstClass/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\DerivingOurFirstClass" mkdir "..\build-$(ConfigurationName)\DerivingOurFirstClass"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\DerivingOurFirstClass" mkdir "..\build-$(ConfigurationName)\DerivingOurFirstClass"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/DerivingOurFirstClass/.d:
	@if not exist "..\build-$(ConfigurationName)\DerivingOurFirstClass" mkdir "..\build-$(ConfigurationName)\DerivingOurFirstClass"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/DerivingOurFirstClass/Savings_Account.cpp$(ObjectSuffix): Savings_Account.cpp ../build-$(ConfigurationName)/DerivingOurFirstClass/Savings_Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/DerivingOurFirstClass/Savings_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings_Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/DerivingOurFirstClass/Savings_Account.cpp$(DependSuffix): Savings_Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/DerivingOurFirstClass/Savings_Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/DerivingOurFirstClass/Savings_Account.cpp$(DependSuffix) -MM Savings_Account.cpp

../build-$(ConfigurationName)/DerivingOurFirstClass/Savings_Account.cpp$(PreprocessSuffix): Savings_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/DerivingOurFirstClass/Savings_Account.cpp$(PreprocessSuffix) Savings_Account.cpp

../build-$(ConfigurationName)/DerivingOurFirstClass/Account.cpp$(ObjectSuffix): Account.cpp ../build-$(ConfigurationName)/DerivingOurFirstClass/Account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/DerivingOurFirstClass/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/DerivingOurFirstClass/Account.cpp$(DependSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/DerivingOurFirstClass/Account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/DerivingOurFirstClass/Account.cpp$(DependSuffix) -MM Account.cpp

../build-$(ConfigurationName)/DerivingOurFirstClass/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/DerivingOurFirstClass/Account.cpp$(PreprocessSuffix) Account.cpp

../build-$(ConfigurationName)/DerivingOurFirstClass/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/DerivingOurFirstClass/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section15/DerivingOurFirstClass/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/DerivingOurFirstClass/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/DerivingOurFirstClass/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/DerivingOurFirstClass/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/DerivingOurFirstClass/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/DerivingOurFirstClass/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/DerivingOurFirstClass//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



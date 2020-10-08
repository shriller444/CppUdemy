##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=FriendsOfClass
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/UdemyMain/c++/Section13
ProjectPath            :=D:/UdemyMain/c++/Section13/FriendsOfClass
IntermediateDirectory  :=../build-$(ConfigurationName)/FriendsOfClass
OutDir                 :=../build-$(ConfigurationName)/FriendsOfClass
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simon
Date                   :=08/10/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
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
RcCompilerName         :=windres
LinkOptions            := 
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/FriendsOfClass/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FriendsOfClass/Other_class.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FriendsOfClass/Player.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/FriendsOfClass/Friend_class.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/FriendsOfClass/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\FriendsOfClass" mkdir "..\build-$(ConfigurationName)\FriendsOfClass"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\FriendsOfClass" mkdir "..\build-$(ConfigurationName)\FriendsOfClass"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/FriendsOfClass/.d:
	@if not exist "..\build-$(ConfigurationName)\FriendsOfClass" mkdir "..\build-$(ConfigurationName)\FriendsOfClass"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/FriendsOfClass/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/FriendsOfClass/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section13/FriendsOfClass/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FriendsOfClass/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FriendsOfClass/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FriendsOfClass/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/FriendsOfClass/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FriendsOfClass/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/FriendsOfClass/Other_class.cpp$(ObjectSuffix): Other_class.cpp ../build-$(ConfigurationName)/FriendsOfClass/Other_class.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section13/FriendsOfClass/Other_class.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Other_class.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FriendsOfClass/Other_class.cpp$(DependSuffix): Other_class.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FriendsOfClass/Other_class.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FriendsOfClass/Other_class.cpp$(DependSuffix) -MM Other_class.cpp

../build-$(ConfigurationName)/FriendsOfClass/Other_class.cpp$(PreprocessSuffix): Other_class.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FriendsOfClass/Other_class.cpp$(PreprocessSuffix) Other_class.cpp

../build-$(ConfigurationName)/FriendsOfClass/Player.cpp$(ObjectSuffix): Player.cpp ../build-$(ConfigurationName)/FriendsOfClass/Player.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section13/FriendsOfClass/Player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FriendsOfClass/Player.cpp$(DependSuffix): Player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FriendsOfClass/Player.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FriendsOfClass/Player.cpp$(DependSuffix) -MM Player.cpp

../build-$(ConfigurationName)/FriendsOfClass/Player.cpp$(PreprocessSuffix): Player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FriendsOfClass/Player.cpp$(PreprocessSuffix) Player.cpp

../build-$(ConfigurationName)/FriendsOfClass/Friend_class.cpp$(ObjectSuffix): Friend_class.cpp ../build-$(ConfigurationName)/FriendsOfClass/Friend_class.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/UdemyMain/c++/Section13/FriendsOfClass/Friend_class.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Friend_class.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/FriendsOfClass/Friend_class.cpp$(DependSuffix): Friend_class.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/FriendsOfClass/Friend_class.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/FriendsOfClass/Friend_class.cpp$(DependSuffix) -MM Friend_class.cpp

../build-$(ConfigurationName)/FriendsOfClass/Friend_class.cpp$(PreprocessSuffix): Friend_class.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/FriendsOfClass/Friend_class.cpp$(PreprocessSuffix) Friend_class.cpp


-include ../build-$(ConfigurationName)/FriendsOfClass//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



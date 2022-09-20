##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=BankAccountSecondReview
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/Users/abdullahelkhodary/Documents/firstWorkSpace
ProjectPath            :=/Users/abdullahelkhodary/Documents/firstWorkSpace/BankAccountSecondReview
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Abdullah Elkhodary
Date                   :=28/06/2022
CodeLitePath           :="/Users/abdullahelkhodary/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
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
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="BankAccountSecondReview.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
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
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/account.cpp$(ObjectSuffix) $(IntermediateDirectory)/CurrencyExchange.cpp$(ObjectSuffix) $(IntermediateDirectory)/InterestRate.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/abdullahelkhodary/Documents/firstWorkSpace/BankAccountSecondReview/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/account.cpp$(ObjectSuffix): account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/account.cpp$(DependSuffix) -MM account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/abdullahelkhodary/Documents/firstWorkSpace/BankAccountSecondReview/account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/account.cpp$(PreprocessSuffix): account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/account.cpp$(PreprocessSuffix) account.cpp

$(IntermediateDirectory)/CurrencyExchange.cpp$(ObjectSuffix): CurrencyExchange.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CurrencyExchange.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CurrencyExchange.cpp$(DependSuffix) -MM CurrencyExchange.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/abdullahelkhodary/Documents/firstWorkSpace/BankAccountSecondReview/CurrencyExchange.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CurrencyExchange.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CurrencyExchange.cpp$(PreprocessSuffix): CurrencyExchange.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CurrencyExchange.cpp$(PreprocessSuffix) CurrencyExchange.cpp

$(IntermediateDirectory)/InterestRate.cpp$(ObjectSuffix): InterestRate.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InterestRate.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InterestRate.cpp$(DependSuffix) -MM InterestRate.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/abdullahelkhodary/Documents/firstWorkSpace/BankAccountSecondReview/InterestRate.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InterestRate.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InterestRate.cpp$(PreprocessSuffix): InterestRate.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InterestRate.cpp$(PreprocessSuffix) InterestRate.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/



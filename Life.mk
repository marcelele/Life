##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Life
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/Marceli Baczewski/Documents/Life"
ProjectPath            :="C:/Users/Marceli Baczewski/Documents/Life/Life"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Marceli Baczewski
Date                   :=18/04/2016
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Life.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
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
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/args.c$(ObjectSuffix) $(IntermediateDirectory)/cells.c$(ObjectSuffix) $(IntermediateDirectory)/io.c$(ObjectSuffix) $(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/rules.c$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/args.c$(ObjectSuffix): args.c $(IntermediateDirectory)/args.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Marceli Baczewski/Documents/Life/Life/args.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/args.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/args.c$(DependSuffix): args.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/args.c$(ObjectSuffix) -MF$(IntermediateDirectory)/args.c$(DependSuffix) -MM "args.c"

$(IntermediateDirectory)/args.c$(PreprocessSuffix): args.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/args.c$(PreprocessSuffix) "args.c"

$(IntermediateDirectory)/cells.c$(ObjectSuffix): cells.c $(IntermediateDirectory)/cells.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Marceli Baczewski/Documents/Life/Life/cells.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/cells.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/cells.c$(DependSuffix): cells.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/cells.c$(ObjectSuffix) -MF$(IntermediateDirectory)/cells.c$(DependSuffix) -MM "cells.c"

$(IntermediateDirectory)/cells.c$(PreprocessSuffix): cells.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/cells.c$(PreprocessSuffix) "cells.c"

$(IntermediateDirectory)/io.c$(ObjectSuffix): io.c $(IntermediateDirectory)/io.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Marceli Baczewski/Documents/Life/Life/io.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/io.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/io.c$(DependSuffix): io.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/io.c$(ObjectSuffix) -MF$(IntermediateDirectory)/io.c$(DependSuffix) -MM "io.c"

$(IntermediateDirectory)/io.c$(PreprocessSuffix): io.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/io.c$(PreprocessSuffix) "io.c"

$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Marceli Baczewski/Documents/Life/Life/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM "main.c"

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) "main.c"

$(IntermediateDirectory)/rules.c$(ObjectSuffix): rules.c $(IntermediateDirectory)/rules.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Marceli Baczewski/Documents/Life/Life/rules.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rules.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/rules.c$(DependSuffix): rules.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/rules.c$(ObjectSuffix) -MF$(IntermediateDirectory)/rules.c$(DependSuffix) -MM "rules.c"

$(IntermediateDirectory)/rules.c$(PreprocessSuffix): rules.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/rules.c$(PreprocessSuffix) "rules.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/



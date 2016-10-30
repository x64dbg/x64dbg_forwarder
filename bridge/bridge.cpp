#ifdef _WIN64
#pragma comment(linker, "/export:BridgeAlloc=x64bridge.BridgeAlloc")
#pragma comment(linker, "/export:BridgeFree=x64bridge.BridgeFree")
#pragma comment(linker, "/export:BridgeGetDbgVersion=x64bridge.BridgeGetDbgVersion")
#pragma comment(linker, "/export:BridgeInit=x64bridge.BridgeInit")
#pragma comment(linker, "/export:BridgeSettingGet=x64bridge.BridgeSettingGet")
#pragma comment(linker, "/export:BridgeSettingGetUint=x64bridge.BridgeSettingGetUint")
#pragma comment(linker, "/export:BridgeSettingSet=x64bridge.BridgeSettingSet")
#pragma comment(linker, "/export:BridgeSettingSetUint=x64bridge.BridgeSettingSetUint")
#pragma comment(linker, "/export:BridgeStart=x64bridge.BridgeStart")
#pragma comment(linker, "/export:DbgAssembleAt=x64bridge.DbgAssembleAt")
#pragma comment(linker, "/export:DbgClearAutoBookmarkRange=x64bridge.DbgClearAutoBookmarkRange")
#pragma comment(linker, "/export:DbgClearAutoCommentRange=x64bridge.DbgClearAutoCommentRange")
#pragma comment(linker, "/export:DbgClearAutoFunctionRange=x64bridge.DbgClearAutoFunctionRange")
#pragma comment(linker, "/export:DbgClearAutoLabelRange=x64bridge.DbgClearAutoLabelRange")
#pragma comment(linker, "/export:DbgCmdExec=x64bridge.DbgCmdExec")
#pragma comment(linker, "/export:DbgCmdExecDirect=x64bridge.DbgCmdExecDirect")
#pragma comment(linker, "/export:DbgDisasmAt=x64bridge.DbgDisasmAt")
#pragma comment(linker, "/export:DbgDisasmFastAt=x64bridge.DbgDisasmFastAt")
#pragma comment(linker, "/export:DbgExit=x64bridge.DbgExit")
#pragma comment(linker, "/export:DbgFunctionAdd=x64bridge.DbgFunctionAdd")
#pragma comment(linker, "/export:DbgFunctionDel=x64bridge.DbgFunctionDel")
#pragma comment(linker, "/export:DbgFunctionGet=x64bridge.DbgFunctionGet")
#pragma comment(linker, "/export:DbgFunctionOverlaps=x64bridge.DbgFunctionOverlaps")
#pragma comment(linker, "/export:DbgFunctions=x64bridge.DbgFunctions")
#pragma comment(linker, "/export:DbgGetBookmarkAt=x64bridge.DbgGetBookmarkAt")
#pragma comment(linker, "/export:DbgGetBpxTypeAt=x64bridge.DbgGetBpxTypeAt")
#pragma comment(linker, "/export:DbgGetBranchDestination=x64bridge.DbgGetBranchDestination")
#pragma comment(linker, "/export:DbgGetCommentAt=x64bridge.DbgGetCommentAt")
#pragma comment(linker, "/export:DbgGetFunctionTypeAt=x64bridge.DbgGetFunctionTypeAt")
#pragma comment(linker, "/export:DbgGetLabelAt=x64bridge.DbgGetLabelAt")
#pragma comment(linker, "/export:DbgGetLoopTypeAt=x64bridge.DbgGetLoopTypeAt")
#pragma comment(linker, "/export:DbgGetModuleAt=x64bridge.DbgGetModuleAt")
#pragma comment(linker, "/export:DbgGetRegDump=x64bridge.DbgGetRegDump")
#pragma comment(linker, "/export:DbgGetStringAt=x64bridge.DbgGetStringAt")
#pragma comment(linker, "/export:DbgInit=x64bridge.DbgInit")
#pragma comment(linker, "/export:DbgIsBpDisabled=x64bridge.DbgIsBpDisabled")
#pragma comment(linker, "/export:DbgIsDebugging=x64bridge.DbgIsDebugging")
#pragma comment(linker, "/export:DbgIsJumpGoingToExecute=x64bridge.DbgIsJumpGoingToExecute")
#pragma comment(linker, "/export:DbgIsRunLocked=x64bridge.DbgIsRunLocked")
#pragma comment(linker, "/export:DbgIsValidExpression=x64bridge.DbgIsValidExpression")
#pragma comment(linker, "/export:DbgLoopAdd=x64bridge.DbgLoopAdd")
#pragma comment(linker, "/export:DbgLoopDel=x64bridge.DbgLoopDel")
#pragma comment(linker, "/export:DbgLoopGet=x64bridge.DbgLoopGet")
#pragma comment(linker, "/export:DbgLoopOverlaps=x64bridge.DbgLoopOverlaps")
#pragma comment(linker, "/export:DbgMemFindBaseAddr=x64bridge.DbgMemFindBaseAddr")
#pragma comment(linker, "/export:DbgMemGetPageSize=x64bridge.DbgMemGetPageSize")
#pragma comment(linker, "/export:DbgMemIsValidReadPtr=x64bridge.DbgMemIsValidReadPtr")
#pragma comment(linker, "/export:DbgMemMap=x64bridge.DbgMemMap")
#pragma comment(linker, "/export:DbgMemRead=x64bridge.DbgMemRead")
#pragma comment(linker, "/export:DbgMemWrite=x64bridge.DbgMemWrite")
#pragma comment(linker, "/export:DbgMenuEntryClicked=x64bridge.DbgMenuEntryClicked")
#pragma comment(linker, "/export:DbgModBaseFromName=x64bridge.DbgModBaseFromName")
#pragma comment(linker, "/export:DbgScriptAbort=x64bridge.DbgScriptAbort")
#pragma comment(linker, "/export:DbgScriptBpGet=x64bridge.DbgScriptBpGet")
#pragma comment(linker, "/export:DbgScriptBpToggle=x64bridge.DbgScriptBpToggle")
#pragma comment(linker, "/export:DbgScriptCmdExec=x64bridge.DbgScriptCmdExec")
#pragma comment(linker, "/export:DbgScriptGetBranchInfo=x64bridge.DbgScriptGetBranchInfo")
#pragma comment(linker, "/export:DbgScriptGetLineType=x64bridge.DbgScriptGetLineType")
#pragma comment(linker, "/export:DbgScriptLoad=x64bridge.DbgScriptLoad")
#pragma comment(linker, "/export:DbgScriptRun=x64bridge.DbgScriptRun")
#pragma comment(linker, "/export:DbgScriptSetIp=x64bridge.DbgScriptSetIp")
#pragma comment(linker, "/export:DbgScriptStep=x64bridge.DbgScriptStep")
#pragma comment(linker, "/export:DbgScriptUnload=x64bridge.DbgScriptUnload")
#pragma comment(linker, "/export:DbgSetAutoBookmarkAt=x64bridge.DbgSetAutoBookmarkAt")
#pragma comment(linker, "/export:DbgSetAutoCommentAt=x64bridge.DbgSetAutoCommentAt")
#pragma comment(linker, "/export:DbgSetAutoFunctionAt=x64bridge.DbgSetAutoFunctionAt")
#pragma comment(linker, "/export:DbgSetAutoLabelAt=x64bridge.DbgSetAutoLabelAt")
#pragma comment(linker, "/export:DbgSetBookmarkAt=x64bridge.DbgSetBookmarkAt")
#pragma comment(linker, "/export:DbgSetCommentAt=x64bridge.DbgSetCommentAt")
#pragma comment(linker, "/export:DbgSetLabelAt=x64bridge.DbgSetLabelAt")
#pragma comment(linker, "/export:DbgSettingsUpdated=x64bridge.DbgSettingsUpdated")
#pragma comment(linker, "/export:DbgStackCommentGet=x64bridge.DbgStackCommentGet")
#pragma comment(linker, "/export:DbgSymbolEnum=x64bridge.DbgSymbolEnum")
#pragma comment(linker, "/export:DbgValFromString=x64bridge.DbgValFromString")
#pragma comment(linker, "/export:DbgValToString=x64bridge.DbgValToString")
#pragma comment(linker, "/export:DbgWinEvent=x64bridge.DbgWinEvent")
#pragma comment(linker, "/export:DbgWinEventGlobal=x64bridge.DbgWinEventGlobal")
#pragma comment(linker, "/export:GuiAddLogMessage=x64bridge.GuiAddLogMessage")
#pragma comment(linker, "/export:GuiAddRecentFile=x64bridge.GuiAddRecentFile")
#pragma comment(linker, "/export:GuiAddStatusBarMessage=x64bridge.GuiAddStatusBarMessage")
#pragma comment(linker, "/export:GuiAutoCompleteAddCmd=x64bridge.GuiAutoCompleteAddCmd")
#pragma comment(linker, "/export:GuiAutoCompleteClearAll=x64bridge.GuiAutoCompleteClearAll")
#pragma comment(linker, "/export:GuiAutoCompleteDelCmd=x64bridge.GuiAutoCompleteDelCmd")
#pragma comment(linker, "/export:GuiDisasmAt=x64bridge.GuiDisasmAt")
#pragma comment(linker, "/export:GuiDumpAt=x64bridge.GuiDumpAt")
#pragma comment(linker, "/export:GuiGetDisassembly=x64bridge.GuiGetDisassembly")
#pragma comment(linker, "/export:GuiGetLineWindow=x64bridge.GuiGetLineWindow")
#pragma comment(linker, "/export:GuiGetWindowHandle=x64bridge.GuiGetWindowHandle")
#pragma comment(linker, "/export:GuiLoadSourceFile=x64bridge.GuiLoadSourceFile")
#pragma comment(linker, "/export:GuiLogClear=x64bridge.GuiLogClear")
#pragma comment(linker, "/export:GuiMenuAdd=x64bridge.GuiMenuAdd")
#pragma comment(linker, "/export:GuiMenuAddEntry=x64bridge.GuiMenuAddEntry")
#pragma comment(linker, "/export:GuiMenuAddSeparator=x64bridge.GuiMenuAddSeparator")
#pragma comment(linker, "/export:GuiMenuClear=x64bridge.GuiMenuClear")
#pragma comment(linker, "/export:GuiReferenceAddColumn=x64bridge.GuiReferenceAddColumn")
#pragma comment(linker, "/export:GuiReferenceDeleteAllColumns=x64bridge.GuiReferenceDeleteAllColumns")
#pragma comment(linker, "/export:GuiReferenceGetCellContent=x64bridge.GuiReferenceGetCellContent")
#pragma comment(linker, "/export:GuiReferenceGetRowCount=x64bridge.GuiReferenceGetRowCount")
#pragma comment(linker, "/export:GuiReferenceInitialize=x64bridge.GuiReferenceInitialize")
#pragma comment(linker, "/export:GuiReferenceReloadData=x64bridge.GuiReferenceReloadData")
#pragma comment(linker, "/export:GuiReferenceSetCellContent=x64bridge.GuiReferenceSetCellContent")
#pragma comment(linker, "/export:GuiReferenceSetProgress=x64bridge.GuiReferenceSetProgress")
#pragma comment(linker, "/export:GuiReferenceSetRowCount=x64bridge.GuiReferenceSetRowCount")
#pragma comment(linker, "/export:GuiReferenceSetSearchStartCol=x64bridge.GuiReferenceSetSearchStartCol")
#pragma comment(linker, "/export:GuiReferenceSetSingleSelection=x64bridge.GuiReferenceSetSingleSelection")
#pragma comment(linker, "/export:GuiRepaintTableView=x64bridge.GuiRepaintTableView")
#pragma comment(linker, "/export:GuiScriptAdd=x64bridge.GuiScriptAdd")
#pragma comment(linker, "/export:GuiScriptClear=x64bridge.GuiScriptClear")
#pragma comment(linker, "/export:GuiScriptEnableHighlighting=x64bridge.GuiScriptEnableHighlighting")
#pragma comment(linker, "/export:GuiScriptError=x64bridge.GuiScriptError")
#pragma comment(linker, "/export:GuiScriptMessage=x64bridge.GuiScriptMessage")
#pragma comment(linker, "/export:GuiScriptMsgyn=x64bridge.GuiScriptMsgyn")
#pragma comment(linker, "/export:GuiScriptSetInfoLine=x64bridge.GuiScriptSetInfoLine")
#pragma comment(linker, "/export:GuiScriptSetIp=x64bridge.GuiScriptSetIp")
#pragma comment(linker, "/export:GuiScriptSetTitle=x64bridge.GuiScriptSetTitle")
#pragma comment(linker, "/export:GuiSelectionGet=x64bridge.GuiSelectionGet")
#pragma comment(linker, "/export:GuiSelectionSet=x64bridge.GuiSelectionSet")
#pragma comment(linker, "/export:GuiSetDebugState=x64bridge.GuiSetDebugState")
#pragma comment(linker, "/export:GuiSetLastException=x64bridge.GuiSetLastException")
#pragma comment(linker, "/export:GuiStackDumpAt=x64bridge.GuiStackDumpAt")
#pragma comment(linker, "/export:GuiSymbolLogAdd=x64bridge.GuiSymbolLogAdd")
#pragma comment(linker, "/export:GuiSymbolLogClear=x64bridge.GuiSymbolLogClear")
#pragma comment(linker, "/export:GuiSymbolRefreshCurrent=x64bridge.GuiSymbolRefreshCurrent")
#pragma comment(linker, "/export:GuiSymbolSetProgress=x64bridge.GuiSymbolSetProgress")
#pragma comment(linker, "/export:GuiSymbolUpdateModuleList=x64bridge.GuiSymbolUpdateModuleList")
#pragma comment(linker, "/export:GuiUpdateAllViews=x64bridge.GuiUpdateAllViews")
#pragma comment(linker, "/export:GuiUpdateBreakpointsView=x64bridge.GuiUpdateBreakpointsView")
#pragma comment(linker, "/export:GuiUpdateCallStack=x64bridge.GuiUpdateCallStack")
#pragma comment(linker, "/export:GuiUpdateDisassemblyView=x64bridge.GuiUpdateDisassemblyView")
#pragma comment(linker, "/export:GuiUpdateDumpView=x64bridge.GuiUpdateDumpView")
#pragma comment(linker, "/export:GuiUpdateMemoryView=x64bridge.GuiUpdateMemoryView")
#pragma comment(linker, "/export:GuiUpdatePatches=x64bridge.GuiUpdatePatches")
#pragma comment(linker, "/export:GuiUpdateRegisterView=x64bridge.GuiUpdateRegisterView")
#pragma comment(linker, "/export:GuiUpdateSideBar=x64bridge.GuiUpdateSideBar")
#pragma comment(linker, "/export:GuiUpdateThreadView=x64bridge.GuiUpdateThreadView")
#pragma comment(linker, "/export:GuiUpdateWindowTitle=x64bridge.GuiUpdateWindowTitle")
#else //x86
#pragma comment(linker, "/export:BridgeAlloc=x32bridge.BridgeAlloc")
#pragma comment(linker, "/export:BridgeFree=x32bridge.BridgeFree")
#pragma comment(linker, "/export:BridgeGetDbgVersion=x32bridge.BridgeGetDbgVersion")
#pragma comment(linker, "/export:BridgeInit=x32bridge.BridgeInit")
#pragma comment(linker, "/export:BridgeSettingGet=x32bridge.BridgeSettingGet")
#pragma comment(linker, "/export:BridgeSettingGetUint=x32bridge.BridgeSettingGetUint")
#pragma comment(linker, "/export:BridgeSettingSet=x32bridge.BridgeSettingSet")
#pragma comment(linker, "/export:BridgeSettingSetUint=x32bridge.BridgeSettingSetUint")
#pragma comment(linker, "/export:BridgeStart=x32bridge.BridgeStart")
#pragma comment(linker, "/export:DbgAssembleAt=x32bridge.DbgAssembleAt")
#pragma comment(linker, "/export:DbgClearAutoBookmarkRange=x32bridge.DbgClearAutoBookmarkRange")
#pragma comment(linker, "/export:DbgClearAutoCommentRange=x32bridge.DbgClearAutoCommentRange")
#pragma comment(linker, "/export:DbgClearAutoFunctionRange=x32bridge.DbgClearAutoFunctionRange")
#pragma comment(linker, "/export:DbgClearAutoLabelRange=x32bridge.DbgClearAutoLabelRange")
#pragma comment(linker, "/export:DbgCmdExec=x32bridge.DbgCmdExec")
#pragma comment(linker, "/export:DbgCmdExecDirect=x32bridge.DbgCmdExecDirect")
#pragma comment(linker, "/export:DbgDisasmAt=x32bridge.DbgDisasmAt")
#pragma comment(linker, "/export:DbgDisasmFastAt=x32bridge.DbgDisasmFastAt")
#pragma comment(linker, "/export:DbgExit=x32bridge.DbgExit")
#pragma comment(linker, "/export:DbgFunctionAdd=x32bridge.DbgFunctionAdd")
#pragma comment(linker, "/export:DbgFunctionDel=x32bridge.DbgFunctionDel")
#pragma comment(linker, "/export:DbgFunctionGet=x32bridge.DbgFunctionGet")
#pragma comment(linker, "/export:DbgFunctionOverlaps=x32bridge.DbgFunctionOverlaps")
#pragma comment(linker, "/export:DbgFunctions=x32bridge.DbgFunctions")
#pragma comment(linker, "/export:DbgGetBookmarkAt=x32bridge.DbgGetBookmarkAt")
#pragma comment(linker, "/export:DbgGetBpxTypeAt=x32bridge.DbgGetBpxTypeAt")
#pragma comment(linker, "/export:DbgGetBranchDestination=x32bridge.DbgGetBranchDestination")
#pragma comment(linker, "/export:DbgGetCommentAt=x32bridge.DbgGetCommentAt")
#pragma comment(linker, "/export:DbgGetFunctionTypeAt=x32bridge.DbgGetFunctionTypeAt")
#pragma comment(linker, "/export:DbgGetLabelAt=x32bridge.DbgGetLabelAt")
#pragma comment(linker, "/export:DbgGetLoopTypeAt=x32bridge.DbgGetLoopTypeAt")
#pragma comment(linker, "/export:DbgGetModuleAt=x32bridge.DbgGetModuleAt")
#pragma comment(linker, "/export:DbgGetRegDump=x32bridge.DbgGetRegDump")
#pragma comment(linker, "/export:DbgGetStringAt=x32bridge.DbgGetStringAt")
#pragma comment(linker, "/export:DbgInit=x32bridge.DbgInit")
#pragma comment(linker, "/export:DbgIsBpDisabled=x32bridge.DbgIsBpDisabled")
#pragma comment(linker, "/export:DbgIsDebugging=x32bridge.DbgIsDebugging")
#pragma comment(linker, "/export:DbgIsJumpGoingToExecute=x32bridge.DbgIsJumpGoingToExecute")
#pragma comment(linker, "/export:DbgIsRunLocked=x32bridge.DbgIsRunLocked")
#pragma comment(linker, "/export:DbgIsValidExpression=x32bridge.DbgIsValidExpression")
#pragma comment(linker, "/export:DbgLoopAdd=x32bridge.DbgLoopAdd")
#pragma comment(linker, "/export:DbgLoopDel=x32bridge.DbgLoopDel")
#pragma comment(linker, "/export:DbgLoopGet=x32bridge.DbgLoopGet")
#pragma comment(linker, "/export:DbgLoopOverlaps=x32bridge.DbgLoopOverlaps")
#pragma comment(linker, "/export:DbgMemFindBaseAddr=x32bridge.DbgMemFindBaseAddr")
#pragma comment(linker, "/export:DbgMemGetPageSize=x32bridge.DbgMemGetPageSize")
#pragma comment(linker, "/export:DbgMemIsValidReadPtr=x32bridge.DbgMemIsValidReadPtr")
#pragma comment(linker, "/export:DbgMemMap=x32bridge.DbgMemMap")
#pragma comment(linker, "/export:DbgMemRead=x32bridge.DbgMemRead")
#pragma comment(linker, "/export:DbgMemWrite=x32bridge.DbgMemWrite")
#pragma comment(linker, "/export:DbgMenuEntryClicked=x32bridge.DbgMenuEntryClicked")
#pragma comment(linker, "/export:DbgModBaseFromName=x32bridge.DbgModBaseFromName")
#pragma comment(linker, "/export:DbgScriptAbort=x32bridge.DbgScriptAbort")
#pragma comment(linker, "/export:DbgScriptBpGet=x32bridge.DbgScriptBpGet")
#pragma comment(linker, "/export:DbgScriptBpToggle=x32bridge.DbgScriptBpToggle")
#pragma comment(linker, "/export:DbgScriptCmdExec=x32bridge.DbgScriptCmdExec")
#pragma comment(linker, "/export:DbgScriptGetBranchInfo=x32bridge.DbgScriptGetBranchInfo")
#pragma comment(linker, "/export:DbgScriptGetLineType=x32bridge.DbgScriptGetLineType")
#pragma comment(linker, "/export:DbgScriptLoad=x32bridge.DbgScriptLoad")
#pragma comment(linker, "/export:DbgScriptRun=x32bridge.DbgScriptRun")
#pragma comment(linker, "/export:DbgScriptSetIp=x32bridge.DbgScriptSetIp")
#pragma comment(linker, "/export:DbgScriptStep=x32bridge.DbgScriptStep")
#pragma comment(linker, "/export:DbgScriptUnload=x32bridge.DbgScriptUnload")
#pragma comment(linker, "/export:DbgSetAutoBookmarkAt=x32bridge.DbgSetAutoBookmarkAt")
#pragma comment(linker, "/export:DbgSetAutoCommentAt=x32bridge.DbgSetAutoCommentAt")
#pragma comment(linker, "/export:DbgSetAutoFunctionAt=x32bridge.DbgSetAutoFunctionAt")
#pragma comment(linker, "/export:DbgSetAutoLabelAt=x32bridge.DbgSetAutoLabelAt")
#pragma comment(linker, "/export:DbgSetBookmarkAt=x32bridge.DbgSetBookmarkAt")
#pragma comment(linker, "/export:DbgSetCommentAt=x32bridge.DbgSetCommentAt")
#pragma comment(linker, "/export:DbgSetLabelAt=x32bridge.DbgSetLabelAt")
#pragma comment(linker, "/export:DbgSettingsUpdated=x32bridge.DbgSettingsUpdated")
#pragma comment(linker, "/export:DbgStackCommentGet=x32bridge.DbgStackCommentGet")
#pragma comment(linker, "/export:DbgSymbolEnum=x32bridge.DbgSymbolEnum")
#pragma comment(linker, "/export:DbgValFromString=x32bridge.DbgValFromString")
#pragma comment(linker, "/export:DbgValToString=x32bridge.DbgValToString")
#pragma comment(linker, "/export:DbgWinEvent=x32bridge.DbgWinEvent")
#pragma comment(linker, "/export:DbgWinEventGlobal=x32bridge.DbgWinEventGlobal")
#pragma comment(linker, "/export:GuiAddLogMessage=x32bridge.GuiAddLogMessage")
#pragma comment(linker, "/export:GuiAddRecentFile=x32bridge.GuiAddRecentFile")
#pragma comment(linker, "/export:GuiAddStatusBarMessage=x32bridge.GuiAddStatusBarMessage")
#pragma comment(linker, "/export:GuiAutoCompleteAddCmd=x32bridge.GuiAutoCompleteAddCmd")
#pragma comment(linker, "/export:GuiAutoCompleteClearAll=x32bridge.GuiAutoCompleteClearAll")
#pragma comment(linker, "/export:GuiAutoCompleteDelCmd=x32bridge.GuiAutoCompleteDelCmd")
#pragma comment(linker, "/export:GuiDisasmAt=x32bridge.GuiDisasmAt")
#pragma comment(linker, "/export:GuiDumpAt=x32bridge.GuiDumpAt")
#pragma comment(linker, "/export:GuiGetDisassembly=x32bridge.GuiGetDisassembly")
#pragma comment(linker, "/export:GuiGetLineWindow=x32bridge.GuiGetLineWindow")
#pragma comment(linker, "/export:GuiGetWindowHandle=x32bridge.GuiGetWindowHandle")
#pragma comment(linker, "/export:GuiLoadSourceFile=x32bridge.GuiLoadSourceFile")
#pragma comment(linker, "/export:GuiLogClear=x32bridge.GuiLogClear")
#pragma comment(linker, "/export:GuiMenuAdd=x32bridge.GuiMenuAdd")
#pragma comment(linker, "/export:GuiMenuAddEntry=x32bridge.GuiMenuAddEntry")
#pragma comment(linker, "/export:GuiMenuAddSeparator=x32bridge.GuiMenuAddSeparator")
#pragma comment(linker, "/export:GuiMenuClear=x32bridge.GuiMenuClear")
#pragma comment(linker, "/export:GuiReferenceAddColumn=x32bridge.GuiReferenceAddColumn")
#pragma comment(linker, "/export:GuiReferenceDeleteAllColumns=x32bridge.GuiReferenceDeleteAllColumns")
#pragma comment(linker, "/export:GuiReferenceGetCellContent=x32bridge.GuiReferenceGetCellContent")
#pragma comment(linker, "/export:GuiReferenceGetRowCount=x32bridge.GuiReferenceGetRowCount")
#pragma comment(linker, "/export:GuiReferenceInitialize=x32bridge.GuiReferenceInitialize")
#pragma comment(linker, "/export:GuiReferenceReloadData=x32bridge.GuiReferenceReloadData")
#pragma comment(linker, "/export:GuiReferenceSetCellContent=x32bridge.GuiReferenceSetCellContent")
#pragma comment(linker, "/export:GuiReferenceSetProgress=x32bridge.GuiReferenceSetProgress")
#pragma comment(linker, "/export:GuiReferenceSetRowCount=x32bridge.GuiReferenceSetRowCount")
#pragma comment(linker, "/export:GuiReferenceSetSearchStartCol=x32bridge.GuiReferenceSetSearchStartCol")
#pragma comment(linker, "/export:GuiReferenceSetSingleSelection=x32bridge.GuiReferenceSetSingleSelection")
#pragma comment(linker, "/export:GuiRepaintTableView=x32bridge.GuiRepaintTableView")
#pragma comment(linker, "/export:GuiScriptAdd=x32bridge.GuiScriptAdd")
#pragma comment(linker, "/export:GuiScriptClear=x32bridge.GuiScriptClear")
#pragma comment(linker, "/export:GuiScriptEnableHighlighting=x32bridge.GuiScriptEnableHighlighting")
#pragma comment(linker, "/export:GuiScriptError=x32bridge.GuiScriptError")
#pragma comment(linker, "/export:GuiScriptMessage=x32bridge.GuiScriptMessage")
#pragma comment(linker, "/export:GuiScriptMsgyn=x32bridge.GuiScriptMsgyn")
#pragma comment(linker, "/export:GuiScriptSetInfoLine=x32bridge.GuiScriptSetInfoLine")
#pragma comment(linker, "/export:GuiScriptSetIp=x32bridge.GuiScriptSetIp")
#pragma comment(linker, "/export:GuiScriptSetTitle=x32bridge.GuiScriptSetTitle")
#pragma comment(linker, "/export:GuiSelectionGet=x32bridge.GuiSelectionGet")
#pragma comment(linker, "/export:GuiSelectionSet=x32bridge.GuiSelectionSet")
#pragma comment(linker, "/export:GuiSetDebugState=x32bridge.GuiSetDebugState")
#pragma comment(linker, "/export:GuiSetLastException=x32bridge.GuiSetLastException")
#pragma comment(linker, "/export:GuiStackDumpAt=x32bridge.GuiStackDumpAt")
#pragma comment(linker, "/export:GuiSymbolLogAdd=x32bridge.GuiSymbolLogAdd")
#pragma comment(linker, "/export:GuiSymbolLogClear=x32bridge.GuiSymbolLogClear")
#pragma comment(linker, "/export:GuiSymbolRefreshCurrent=x32bridge.GuiSymbolRefreshCurrent")
#pragma comment(linker, "/export:GuiSymbolSetProgress=x32bridge.GuiSymbolSetProgress")
#pragma comment(linker, "/export:GuiSymbolUpdateModuleList=x32bridge.GuiSymbolUpdateModuleList")
#pragma comment(linker, "/export:GuiUpdateAllViews=x32bridge.GuiUpdateAllViews")
#pragma comment(linker, "/export:GuiUpdateBreakpointsView=x32bridge.GuiUpdateBreakpointsView")
#pragma comment(linker, "/export:GuiUpdateCallStack=x32bridge.GuiUpdateCallStack")
#pragma comment(linker, "/export:GuiUpdateDisassemblyView=x32bridge.GuiUpdateDisassemblyView")
#pragma comment(linker, "/export:GuiUpdateDumpView=x32bridge.GuiUpdateDumpView")
#pragma comment(linker, "/export:GuiUpdateMemoryView=x32bridge.GuiUpdateMemoryView")
#pragma comment(linker, "/export:GuiUpdatePatches=x32bridge.GuiUpdatePatches")
#pragma comment(linker, "/export:GuiUpdateRegisterView=x32bridge.GuiUpdateRegisterView")
#pragma comment(linker, "/export:GuiUpdateSideBar=x32bridge.GuiUpdateSideBar")
#pragma comment(linker, "/export:GuiUpdateThreadView=x32bridge.GuiUpdateThreadView")
#pragma comment(linker, "/export:GuiUpdateWindowTitle=x32bridge.GuiUpdateWindowTitle")
#endif //_WIN64

//Fixes for https://github.com/x64dbg/x64dbg/issues/1202

#include <windows.h>

#define MAX_THREAD_NAME_SIZE 256
#define MAX_BREAKPOINT_SIZE 256
#define MAX_MODULE_SIZE 256
#define MAX_CONDITIONAL_EXPR_SIZE 256
#define MAX_CONDITIONAL_TEXT_SIZE 256

typedef ULONG_PTR duint;

typedef enum
{
    _PriorityIdle = -15,
    _PriorityAboveNormal = 1,
    _PriorityBelowNormal = -1,
    _PriorityHighest = 2,
    _PriorityLowest = -2,
    _PriorityNormal = 0,
    _PriorityTimeCritical = 15,
    _PriorityUnknown = 0x7FFFFFFF
} THREADPRIORITY;

typedef enum
{
    _Executive = 0,
    _FreePage = 1,
    _PageIn = 2,
    _PoolAllocation = 3,
    _DelayExecution = 4,
    _Suspended = 5,
    _UserRequest = 6,
    _WrExecutive = 7,
    _WrFreePage = 8,
    _WrPageIn = 9,
    _WrPoolAllocation = 10,
    _WrDelayExecution = 11,
    _WrSuspended = 12,
    _WrUserRequest = 13,
    _WrEventPair = 14,
    _WrQueue = 15,
    _WrLpcReceive = 16,
    _WrLpcReply = 17,
    _WrVirtualMemory = 18,
    _WrPageOut = 19,
    _WrRendezvous = 20,
    _Spare2 = 21,
    _Spare3 = 22,
    _Spare4 = 23,
    _Spare5 = 24,
    _WrCalloutStack = 25,
    _WrKernel = 26,
    _WrResource = 27,
    _WrPushLock = 28,
    _WrMutex = 29,
    _WrQuantumEnd = 30,
    _WrDispatchInt = 31,
    _WrPreempted = 32,
    _WrYieldExecution = 33,
    _WrFastMutex = 34,
    _WrGuardedMutex = 35,
    _WrRundown = 36,
} THREADWAITREASON;

typedef enum
{
    bp_none = 0,
    bp_normal = 1,
    bp_hardware = 2,
    bp_memory = 4
} BPXTYPE;

typedef struct
{
    int ThreadNumber;
    HANDLE Handle;
    DWORD ThreadId;
    duint ThreadStartAddress;
    duint ThreadLocalBase;
    char threadName[MAX_THREAD_NAME_SIZE];
} THREADINFO;

typedef struct
{
    THREADINFO BasicInfo;
    duint ThreadCip;
    DWORD SuspendCount;
    THREADPRIORITY Priority;
    THREADWAITREASON WaitReason;
    DWORD LastError;
} THREADALLINFO;

typedef struct
{
    int count;
    THREADALLINFO* list;
    int CurrentThread;
} THREADLIST;

typedef struct
{
    THREADINFO BasicInfo;
    duint ThreadCip;
    DWORD SuspendCount;
    THREADPRIORITY Priority;
    THREADWAITREASON WaitReason;
    DWORD LastError;

    FILETIME UserTime;
    FILETIME KernelTime;
    FILETIME CreationTime;
    ULONG64 Cycles; // Windows Vista or greater
} THREADALLINFOEX;

typedef struct
{
    int count;
    THREADALLINFOEX* list;
    int CurrentThread;
} THREADLISTEX;

typedef struct
{
    BPXTYPE type;
    duint addr;
    bool enabled;
    bool singleshoot;
    bool active;
    char name[MAX_BREAKPOINT_SIZE];
    char mod[MAX_MODULE_SIZE];
    unsigned short slot;
} BRIDGEBP;

typedef struct
{
    int count;
    BRIDGEBP* bp;
} BPMAP;

typedef struct
{
    BPXTYPE type;
    duint addr;
    bool enabled;
    bool singleshoot;
    bool active;
    char name[MAX_BREAKPOINT_SIZE];
    char mod[MAX_MODULE_SIZE];
    unsigned short slot;
    unsigned int hitCount;
    bool fastResume;
    bool silent;
    char breakCondition[MAX_CONDITIONAL_EXPR_SIZE];
    char logText[MAX_CONDITIONAL_TEXT_SIZE];
    char logCondition[MAX_CONDITIONAL_EXPR_SIZE];
    char commandText[MAX_CONDITIONAL_TEXT_SIZE];
    char commandCondition[MAX_CONDITIONAL_EXPR_SIZE];
} BRIDGEBPEX;

typedef struct
{
    int count;
    BRIDGEBPEX* bp;
} BPMAPEX;

typedef void* (*BRIDGEALLOC)(duint);
typedef void (*BRIDGEFREE)(void*);
typedef void (*DBGGETTHREADLISTEX)(THREADLISTEX*);
typedef int (*DBGGETBPLISTEX)(BPXTYPE, BPMAPEX*);

extern "C" __declspec(dllexport) void DbgGetThreadList(THREADLIST* list)
{
#ifdef _WIN64
    static HMODULE hBridge = LoadLibraryW(L"x64bridge.dll");
#else
    static HMODULE hBridge = LoadLibraryW(L"x32bridge.dll");
#endif //_WIN64
    static DBGGETTHREADLISTEX DbgGetThreadListEx = (DBGGETTHREADLISTEX)GetProcAddress(hBridge, "DbgGetThreadList");
    static BRIDGEALLOC BridgeAlloc = (BRIDGEALLOC)GetProcAddress(hBridge, "BridgeAlloc");
    static BRIDGEFREE BridgeFree = (BRIDGEFREE)GetProcAddress(hBridge, "BridgeFree");
    THREADLISTEX listEx;
    DbgGetThreadListEx(&listEx);
    list->count = listEx.count;
    if(list->count <= 0)
        return;
    list->list = (THREADALLINFO*)BridgeAlloc(list->count * sizeof(THREADALLINFO));
    for(int i = 0; i < list->count; i++)
        for(size_t j = 0; j < sizeof(THREADALLINFO); j++)
            ((unsigned char*)&list->list[i])[j] = ((unsigned char*)&listEx.list[i])[j];
    BridgeFree(listEx.list);
    list->CurrentThread = listEx.CurrentThread;
}

extern "C" __declspec(dllexport) int DbgGetBpList(BPXTYPE type, BPMAP* list)
{
#ifdef _WIN64
    static HMODULE hBridge = LoadLibraryW(L"x64bridge.dll");
#else
    static HMODULE hBridge = LoadLibraryW(L"x32bridge.dll");
#endif //_WIN64
    static DBGGETBPLISTEX DbgGetBpListEx = (DBGGETBPLISTEX)GetProcAddress(hBridge, "DbgGetBpList");
    static BRIDGEALLOC BridgeAlloc = (BRIDGEALLOC)GetProcAddress(hBridge, "BridgeAlloc");
    static BRIDGEFREE BridgeFree = (BRIDGEFREE)GetProcAddress(hBridge, "BridgeFree");
    BPMAPEX listEx;
    DbgGetBpListEx(type, &listEx);
    list->count = listEx.count;
    if(!list->count)
        return 0;
    list->bp = (BRIDGEBP*)BridgeAlloc(list->count * sizeof(BRIDGEBP));
    for(int i = 0; i < list->count; i++)
        for(size_t j = 0; j < sizeof(BRIDGEBP); j++)
            ((unsigned char*)&list->bp[i])[j] = ((unsigned char*)&listEx.bp[i])[j];
    BridgeFree(listEx.bp);
    return list->count;
}
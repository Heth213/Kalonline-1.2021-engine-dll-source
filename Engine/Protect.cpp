#include <windows.h>
#include "Protect.h"
#include "Interface.h"
#include "Tools.h"
#pragma comment(lib,"Detours/enigma_ide.lib")
#include "Detours/enigma_ide.h"

CREATE_INTERFACE(IProtect)



static int(__cdecl *Connection)(int Type, const char *Text, ...) = (int(__cdecl*)(int, const char*, ...))0x0048B5B0; // 100%

int __cdecl ConnectionFix(int Type, const char *Text, int Value, int Object, int Argument)
{
    return Connection(Type,"bd",Value,Object);
}

//DWORD __stdcall FixGetFileAttributesA(LPCSTR lpFileName)
//{
//    return 0;
//}

DWORD __stdcall ExistingKalOnlineLauncher(LPCSTR lpFileName)
{
	return 0;
}

int __cdecl F1Fix(int a, int b)
{
return 1;
}



bool IProtect::Disable()
{
    Interface<ITools> Tools;
    Tools->Intercept(ITools::_I_CALL, (void*)0x006858D6, ConnectionFix, 5); // Manually 100%
   // Tools->Intercept(ITools::_I_CALL, (void*)0x0078EA35, (void*)FixGetFileAttributesA, 6);
    Tools->Intercept(ITools::_I_CALL,(void*)0x006F3DC1,F1Fix,5); // Manually 100%
    Tools->FillMemoryEx(0x006726CE, ITools::_I_NOP, 1); // Manually 100%
    Tools->FillMemoryEx(0x006726D5, ITools::_I_NOP, 1); // Manually 100%
    Tools->FillMemoryEx(0x006726DD, ITools::_I_NOP, 6); // Manually 100%
    Tools->FillMemoryEx(0x0048AAA1, ITools::_I_JMP_SHORT, 1); // Manually 100%
    Tools->FillMemoryEx(0x0048AAC8, ITools::_I_JMP_SHORT, 1); // Manually 100%
    Tools->SetMemoryEx(0x00895EB8, "sbbbbbbbb", 10); // Manually 100%
    Tools->SetMemoryEx(0x0089F678, "bbddww", 8); // Manually val was 7 now 8
    Tools->FillMemoryEx(0x006873D3, ITools::_I_JMP_SHORT, 1); // Manually 100%
    Tools->FillMemoryEx(0x0068593A, ITools::_I_NOP, 5);// Manually 100%
    Tools->FillMemoryEx(0x0068593F, ITools::_I_NOP, 5);// Manually 100%
	Tools->FillMemoryEx(0x00685944, ITools::_I_NOP, 5);// New 2021, just added
	Tools->Intercept(ITools::_I_CALL, (void*)0x00814C25, (void*)ExistingKalOnlineLauncher, 6);// 2021

	
	//Tools->FillMemoryEx(0x00687397, ITools::_I_JMP_SHORT, 0);
	//Tools->FillMemoryEx(0x006873A0, ITools::_I_JMP_SHORT, 1);

	//version fix 2021
	Tools->FillMemoryEx(0x0068736A, ITools::_I_NOP, 5);
	Tools->FillMemoryEx(0x00687381, ITools::_I_NOP, 5);
	Tools->FillMemoryEx(0x0068738B, ITools::_I_NOP, 5);
	
	

    float ZoomLimit = 300.0;
    Tools->MemcpyExD((void*)0x008C2C98, &ZoomLimit, 4); // Manually 100%
    return true;
}
#ifndef __ENGINE_H
#define __ENGINE_H

#include <Windows.h>

namespace Engine
{
	struct Packet
	{
		unsigned short Size;
		unsigned char Type;
		char Data[8000];
	};

	namespace CEditor
	{
	//	static int (__cdecl *AddPKPWD)() = (int (__cdecl*)())0x007DC2B0;
	//	static int (__cdecl *PWDPK)(int a1, signed int a2, signed int a3, signed int a4, const char *a5) = (int (__cdecl*)(int, signed int, signed int, signed int,const char*))0x007AF2F0;
		static void (__thiscall *Clear)(void* _this) = (void (__thiscall*)(void*))0x00789280; //100%
		static void(__thiscall *Load)(void* _this, const char* Text) = (void(__thiscall*)(void*, const char*))0x0078A370; // 100%

	}

	namespace KGameSys
	{
		static int(__cdecl *RidingEnable)(int ID, int Type) = (int(__cdecl*)(int, int))0x006B66B0; // 91%
		static int (__cdecl *RidingDisable)(int ID, int Type) = (int (__cdecl*)(int,int))0x006B6830; // 92%
		static int (__cdecl *ShowPet)(int Value, int Argument, char Packet) = (int (__cdecl*)(int,int,char))0x006A5B20; //100%
		static int (__cdecl *AddMsg)(int a1, const char *a2) = (int (__cdecl*)(int,const char*))0x00407A00; // 100%
		static int(__cdecl *ArmorGrade)(int a1) = (int(__cdecl*)(int))0x004DDFF0; // 100%
		static int(__cdecl *PetGrading)(int a1) = (int(__cdecl*)(int))0x004B7480; // 100%
		static void *(__thiscall *ItemMsg)(void *a, const char *a1) = (void *(__thiscall*)(void*,const char*))0x00403980; // 100%
		static int (__cdecl *RebirthTalisman)(int Argument, int Value, char Data) = (int (__cdecl*)(int,int,char))0x0069C5B0; // 98%
		static int (__cdecl *Scenario3_3)(unsigned int Value, int Data) = (int (__cdecl*)(unsigned int,int))0x006D7900; // 99%
		static int(__thiscall *LatestScreenMsg)(void *Argument, const char *a2) = (int(__thiscall*)(void*, const char*))0x00650230;// 100%
		static void(__thiscall *ItemTimer)(void *Argument, int a2, int a3) = (void(__thiscall*)(void *Argument, int a2, int a3))0x004CC8F0; // 100%
		static void*(__thiscall *RidingTimer)(void *Item) = (void*(__thiscall*)(void *))0x0063F950; // 89%
		static int(__thiscall *FishEdit)(DWORD *Argument, int a2) = (int(__thiscall*)(DWORD*, int))0x006205A0; //  100%
		static int (__thiscall *HellTime)(int Argument, int Value) = (int (__thiscall*)(int,int))0x0068E040; //  100%
		static char(__cdecl *SetHellTime)(int Time, char Value) = (char(__cdecl*)(int, char))0x006C3F80;// 100%
		static float*(__cdecl *SetProductionBar)(char a1, char a2, void* Src) = (float*(__cdecl*)(char a1, char a2, void* Src))0x00712430;// 100%
		static DWORD(__thiscall *RefreshHellTime)(int Window) = (DWORD(__thiscall*)(int))0x006C3F40; // 100%
		static unsigned int *(__thiscall *ColorName)(unsigned int *Player, void *Src, COLORREF color, int a4, int a5, int a6) = (unsigned int *(__thiscall*)(unsigned int *Player, void *Src, COLORREF color, int a4, int a5, int a6))0x0049FEF0; // 100%
		static char (__thiscall *ScreenOverlay)(int a, int a2, int a3, int a4, char a5) = (char (__thiscall*)(int,int,int,int,char))0x004432D0; // 100%
		static int (__cdecl *MBox)(int pText, int nType, int nAction, int nDest, int nDest2) = (int (__cdecl*)(int, int, int, int, int))0x00700620; // 94%
		static int (__thiscall *OnCancel)(void *Argument) = (int (__thiscall*)(void*))0x005EA950; // 100%
		static int (__thiscall *OnOk)(void *Argument) = (int (__thiscall*)(void*))0x005EAF20; // manually  100%
		static int(__thiscall *OnFish)(int Window) = (int(__thiscall*)(int))0x0061ED10; //  100%
		static unsigned long *m_pChattingControl = (unsigned long*)0x00A106D0; // .data manually  100%
		static void (__cdecl *SetScreenInfo)(char Type, void *msg, char value) = (void (__cdecl*)(char, void*, char))0x00712740;// 100%
		static int(__cdecl *WriteMessage)(int a1, int a2, char *a3, int a4) = (int(__cdecl*)(int a1, int a2, char *a3, int a4))0x007303E0; // 100%
		static int(__thiscall *ShowMessage)(void *Windows, char *a2, int a3, char a4, char a5) = (int(__thiscall*)(void *Windows, char *a2, int a3, char a4, char a5))0x00768DE0; // 100%
		static void(__cdecl *AddChattingMessage)(char Type, const char* Message, int Color) = (void(__cdecl*)(char, const char*, int))0x00709D40; // 100%
		static void(__thiscall *UpdateTargetHP)(int Window, float a2, void *Src, int a4, char a5, int a6, int a7, int a8) = (void(__thiscall*)(int Window, float a2, void *Src, int a4, char a5, int a6, int a7, int a8))0x007A4670; // 100%
		static void (__cdecl *AddInfoMessage)(const char* Message, int Color, int type) = (void (__cdecl*)(const char*, int, int))0x00709D70; //  100%
		static int (__cdecl *OpenWindow)(const char *name, int Argument, int Value, int Type, int nForce, int x) = (int (__cdecl*)(const char*,int,int,int,int,int))0x006FD500; // 100%
		static int (__cdecl *OtherOpenWindow)(const char *name, int Argument, int Value, int Type, int nForce) = (int (__cdecl*)(const char*,int,int,int,int))0x00700190; //  100%
		static int(__cdecl *OpenSpecialWindow)(char *name) = (int(__cdecl*)(char*))0x006FD760;// 100%
		static int(__cdecl *CloseSpecialWindow)(char *name) = (int(__cdecl*)(char*))0x006FD8F0; // 100%
		static int(__cdecl *DismissWindow)(int Window) = (int(__cdecl*)(int))0x007001E0; // 100%
		static int (__cdecl *CloseWindow)(char *name) = (int (__cdecl*)(char*))0x006FFDF0; //  100%
		static int (__cdecl *WindowCheck)(const char *name) = (int (__cdecl*)(const char*))0x006FFEF0; // 100%
		static signed __int64(__thiscall *GetBuffTime)(DWORD* Buff) = (signed __int64(__thiscall*)(DWORD*))0x004CD480; //  100%
		static int (__thiscall *SetBuff)(void *a, int a2, int a3, signed __int64 a4, char a5, int a6, int a7, int a8, int a9, signed int a10, int a11) = (int (__thiscall*)(void*,int,int,signed __int64,char,int,int,int,int,signed int,int))0x007ACFB0; // 98%
		static int (__thiscall *SetIcon)(void *a, int Key, int Time, int a4, int nMsg) = (int (__thiscall*)(void*,int,int,int,int))0x007B8A90;// 100%
		static int (__thiscall *RemoveIcon)(void *a, int Key, int nMsg) = (int (__thiscall*)(void*,int,int))0x007B8810; // 100%
		static int (__cdecl *CallBuff)(int a1, int a2, signed __int64 a3, char a4, int a5, int a6, int a7, int a8, int a9) = (int (__cdecl*)(int,int,signed __int64,char,int,int,int,int,int))0x00707910;//100%
		static int(__thiscall *ShowBuffIcon)(int a) = (int(__thiscall*)(int))0x0042D4E0;// 100%
		static int(__thiscall *WalkCheck)(int Place) = (int(__thiscall*)(int))0x00536C90;// 100%
		static int(__thiscall *MapOverlay)(DWORD* Place, int Map) = (int(__thiscall*)(DWORD*,int))0x00539190; // 97%
		static int (__thiscall *MakeTip)(void *a, int a2, int a3, signed int a4, char a5, int a6, int a7) = (int (__thiscall*)(void*,int,int,signed int,char,int,int))0x004CD500; // 100%
		static int (__cdecl *FindItemFromIID)(int a2) = (int (__cdecl*)(int))0x006D0860; // 100%
		static int (__cdecl *FindItemFromIIDEx)(int a2) = (int (__cdecl*)(int))0x006D0920;// 100%
		static signed int(__cdecl *PressKey)(int a1) = (signed int(__cdecl*)(int))0x007092E0; // 87%
		static signed int(__cdecl *KeyPressWindow)(int a1) = (signed int(__cdecl*)(int))0x004DE010;// 100%
		static int PressedKey = (int)0x00A1075C; // 100%
		static void(__cdecl *PlaySoundK)(char* Sound) = (void(__cdecl*)(char*))0x00527350; // 100%
		static int(__cdecl *Check)() = (int(__cdecl*)())0x00787B30; //  100%
		static int(__cdecl *InitPets)() = (int(__cdecl*)())0x006A3320; //  100%
		static int(__thiscall *GeneratePet)(int Pet, DWORD* Index, DWORD* Keys) = (int(__thiscall*)(int Pet, DWORD* Index, DWORD* Keys))0x006A5D70; // 100%
		static int(__thiscall *PetMapAdd)(int Map, int Index, DWORD* Pet) = (int(__thiscall*)(int Map, int Index, DWORD* Pet))0x007E2850; // 100%
		static signed int(__cdecl *ReadSound)(int a1) = (signed int(__cdecl*)(int))0x00526820; // 100%
		static char*(__thiscall *UpdateHonorType)(void* Player, int Type) = (char*(__thiscall*)(void*, int))0x004388F0;// 100%
		static int (__thiscall *CheckForDss)(int Item) = (int (__thiscall*)(int))0x005B9FA0; //100%
		static signed int(__cdecl *ReadDat)(const char* DatFile) = (signed int(__cdecl*)(const char*))0x0051AB50;//100%
		static signed int(__thiscall *ReadConfigPk)(DWORD* Text) = (signed int(__thiscall*)(DWORD*))0x0051F340; //100%
		static signed int(__cdecl *ReadConfigDatFile)(int FileName, int Type) = (signed int(__cdecl*)(int, int))0x0051AD40;//100%
		static int(__thiscall *ItemName)(int Item, char Type) = (int(__thiscall*)(int, char))0x004C59C0; //100%
		static int (__thiscall *CheckDssType)(void *Item, int Packet) = (int (__thiscall*)(void*,int))0x005BA760;//100%
		static int (__thiscall *DssConfirmButton)(void *Item, const char *Word, int Value) = (int (__thiscall*)(void*,const char*,int))0x005BABF0; //100%
		static int (__cdecl *KMsgGet)(int SysMsgIndex) = (int (__cdecl*)(int))0x004B81F0; // 100%
		static int (__thiscall *SetChangedText)(int Item, int TextName, int NewMsg) = (int (__thiscall*)(int,int,int))0x0079F560; // 100%
		static int (__thiscall *SetDssWindow)(void *Window, int Packet) = (int (__thiscall*)(void*,int))0x005BAE70; //100%
		static int (__thiscall *SetQigoong)(int Window, int Packet) = (int (__thiscall*)(int,int))0x005BBBE0;//100%
		static void(__cdecl *DemonGongStone)(int Value, int Argument, int Packet) = (void(__cdecl*)(int, int, int))0x006A8930; //100%
		static void(__cdecl *RefreshBattle)() = (void(__cdecl*)())0x006CF530; // 100%
		static void(__cdecl *RefreshAppearance)() = (void(__cdecl*)())0x004C4FA0; //100%
		static int (__thiscall *SetDemonGongWindow)(void *Window, int Packet) = (int (__thiscall*)(void*,int))0x005E61A0; //100%
		static void (__thiscall *SendIdle)(int Object) = (void (__thiscall*)(int))0x0041E3D0; //100%
		
	}
	
	namespace KWindowCollector
	{
		static void (__cdecl *ProcessDestroy)() = (void (__cdecl*)())0x00700200;// 100%
	}

	namespace CD3DApplication
	{
		static HRESULT(__thiscall *Render3DEnvironment)(void* _this) = (HRESULT(__thiscall*)(void*))0x00483250; // 100%
		
	}

	namespace KCommand
	{
		static int *m_bShowFrame = (int*)0x00A1268C; // Manually 100%
		static int *m_bHideUI = (int*)0x00A12694; // Manually 100%
		static int *m_bHideMe = (int*)0x00A12698; // Manually 100%
		static int *m_bHideTerrain = (int*)0x00A1269C; // Manually 100%
		static int *m_bHideModel = (int*)0x00A126A0; // Manually 100%
		static int *m_bHideFog = (int*)0x00A126A4; // Manually 100%
		static int *m_fFogEnd = (int*)0x00A126B8; // Manually 100%
		static int *m_bHideWater = (int*)0x00A126C0; // Manually 100%
		static bool (__cdecl *ProcessCommand)(const char* Text) = (bool (__cdecl*)(const char*))0x00721BD0; // 99%
	}
	
	namespace KSunLight
	{
		static unsigned long *m_dwTime = (unsigned long*)0x008F7C68; // Manually 100%
	}
	
	namespace KSocket
	{
		static int *g_lpClient = (int*)0x009FCCDC; // Manually 100%
		static int (__thiscall *SendPacket)(void* _this, const char* Buffer, int Length) = (int (__thiscall*)(void*, const char*, int))0x006949D0; // Manually 100%
		static int(__cdecl *OnRecv)(Packet *Data) = (int(__cdecl*)(Packet*))0x006726A0; // Manually 100%
		static float *m_fWriteTime = (float*)0x009FCCE4; // Manually 100%
	}

	namespace CGame_Character
	{
		static unsigned long *m_Master = (unsigned long*)0x00927564; // Manually
		static unsigned long (__cdecl *FindCharacter)(unsigned int nID, int) = (unsigned long (__cdecl*)(unsigned int, int))0x00428480; // Manually 100%
		}
	
	namespace KBattle_UI
	{
		static void (__thiscall *DrawOnCharacter)(void *_this, unsigned char Type, int Number, int CharacterID) = (void (__thiscall*)(void*, unsigned char, int, int))0x007C6550; // 95%
	}
	
	namespace CGameMonster
	{
		static signed int (__thiscall *OnChangeGState)(int a) = (signed int (__thiscall*)(int))0x00450F50; //100%
		static char (__thiscall *ModelSkill)(int a, char a2, int a3, unsigned __int8 a4, unsigned __int16 a5, unsigned __int16 a6, char a7, char a8) = (char (__thiscall*)(int, char, int, unsigned __int8, unsigned __int16, unsigned __int16, char, char))0x00450830;//100%
	}
	
	namespace CFxEntityManager
	{
	static signed int(__thiscall *AddFxToTarget)(void *player, const char* name, int targetID, char autoRemove, char continued, signed int nForced, int nTargetType) = (signed int(__thiscall*)(void*, const char*, int, char, char, signed int, int))0x00811940; //99%
	}

	namespace Honor
	{
		static int *Range = (int*)0x00A10894; // manually 100%
		static int *PrevRange = (int*)0x00A108A0; // manually 100%
		static int *Point = (int*)0x00A1088C; // manually 100%
		static int *Kill = (int*)0x00A108A4; // manually 100%
		static int *Die = (int*)0x00A108A8; // manually 100%
		static int *DKPWin = (int*)0x00A108B0; // manually 100%
		static int *DKPFull = (int*)0x00A108AC; // manually 100%
		static int *PLWin = (int*)0x00A108B8; // manually 100%
		static int *PLFull = (int*)0x00A108B4; // manually 100%
		static int *SVWin = (int*)0x00A108C0; // manually 100%
		static int *SVFull = (int*)0x00A108BC; // manually 100%
		static int *Reward = (int*)0x00A10890; // manually 100%
	}

	static float *g_fCurrentTime = (float*)0x00A31310; //manually 100%
	static void *AddFx = (void*)0x00A2FC70; //manually 100%
}

#endif
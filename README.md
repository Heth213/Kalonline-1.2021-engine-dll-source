# Kalonline-1.2021-engine-dll-source
Kalonline 1.2021 engine source (works but not totally finished)


Hello !
This is the source code for the client xx.1.2021
You can use the 2017 serverfiles and change the packet switch statement
here's the 1.2021 packet list (serverside - core->process.h and search for the "switch ((unsigned char)Data[2])")
replace it for the new one 

```cpp
    switch ((unsigned char)Data[2])
    {
        case 1:
            Data[2] = 5; //C2S_ALIVE
            break;

        case 2:
            Data[2] = 7; //C2S_DELPLAYER
            break;

        case 3:
            Data[2] = 9; //C2S_ANS_CODE
            break;

        case 4:
            Data[2] = 10; //C2S_LOADPLAYER
            break;

        case 5:
            Data[2] = 4; //C2S_NEWPLAYER
            break;

        case 6:
            Data[2] = 0; //C2S_RESTOREPLAYER
            break;

        case 7:
            Data[2] = 2; //C2S_LOGIN
            break;

        case 13:
            Data[2] = 11; //C2S_START
            break;

        //case 16:
        //   Data[2] = 15; //C2S_TRAP_ATTACK
        //   break;

        case 17:
            Data[2] = 45; //C2S_ANS_ASKPARTY
            break;

        case 18:
            Data[2] = 118; //C2S_UPDATE_HONOR_SHOW_OPTION
            break;

        case 21:
            Data[2] = 29; //C2S_ACTION
            break;

        case 22:
            Data[2] = 93; //C2S_CANCELITEMMONSTER
            break;

        case 24:
            Data[2] = 97; //C2S_NPC
            break;

        case 25:
            Data[2] = 57; //C2S_ENCHANTITEM
            break;

        case 27:
            Data[2] = 39; //C2S_SIEGEGUNSET
            break;

        case 30:
            Data[2] = 81; //C2S_ANS_ASKPVP
            break;

        case 32:
            Data[2] = 67; //C2S_SWITCHSTALL
            break;

        case 33:
            Data[2] = 91; //C2S_UPGRADEITEM
            break;

        case 36:
            Data[2] = 49; //C2S_PUTINSTORAGE
            break;

        case 39:
            Data[2] = 69; //C2S_QUESTJOB_END
            break;

        case 40:
            Data[2] = 15; //C2S_ATTACK
            break;

        case 42:
            Data[2] = 17; //C2S_CHATTING
            break;

        case 43:
            Data[2] = 80; //C2S_ASKPVP
            break;

        case 44:
            Data[2] = 79; //C2S_PKBULLETININFO
            break;

        case 47:
            Data[2] = 61; //C2S_PLAYER_ANIMATION
            break;

        case 49:
            Data[2] = 31; //C2S_REST
            break;

        case 50:
            Data[2] = 114; //C2S_REQ_SKILLUP_OVERRUN
            break;

        case 51:
            Data[2] = 23; //C2S_ITEMLIST
            break;

        case 52:
            Data[2] = 85; //C2S_MLM
            break;

        case 54:
            Data[2] = 58; //C2S_SETSTALLINFO
            break;

        case 56:
            Data[2] = 27; //C2S_GAMEEXIT
            break;

        case 57:
            Data[2] = 92; //C2S_MAIL
            break;

        case 58:
            Data[2] = 66; //C2S_PUTOFFITEM
            break;

        case 62:
            Data[2] = 41; //C2S_LEARNSKILL
            break;

        case 67:
            Data[2] = 100; //C2S_BATTLEFIELD
            break;

        case 69:
            Data[2] = 62; //C2S_TRADEITEM
            break;

        case 71:
            Data[2] = 46; //C2S_GUILD
            break;

        case 73:
            Data[2] = 37; //C2S_REVIVAL
            break;

        case 78:
            Data[2] = 84; //C2S_TRANSFORMSKILL
            break;

        case 82:
            Data[2] = 51; //C2S_QUEST
            break;

        case 85:
            Data[2] = 83; //C2S_BLESS
            break;

        case 86:
            Data[2] = 117; //C2S_LORDPROTECT
            break;

        case 88:
            Data[2] = 52; //C2S_STORAGEINFO
            break;

        case 90:
            Data[2] = 36; //C2S_CANCELTRADE
            break;

        case 92:
            Data[2] = 47; //C2S_LEAVEPARTY
            break;

        case 93:
            Data[2] = 121; //C2S_ANS_SHOWDOWN
            break;

        case 94:
            Data[2] = 44; //C2S_ASKPARTY
            break;

        case 98:
            Data[2] = 96; //C2S_CHANGEPLAYERNAME
            break;

        case 100:
            Data[2] = 43; //C2S_PRESKILL
            break;

        case 102:
            Data[2] = 63; //C2S_TRASHITEM
            break;

        case 105:
            Data[2] = 65; //C2S_PUTONITEM
            break;

        case 108:
            Data[2] = 119; //C2S_NEWYEARTHROW
            break;

        case 109:
            Data[2] = 60; //C2S_UPPER_CHANCE_STONE
            break;

        case 110:
            Data[2] = 123; //C2S_ITEM_TELEPORT
            break;

        case 111:
            Data[2] = 129; //C2S_LOCKITEM
            break;

        case 112:
            Data[2] = 116; //C2S_REQ_SHOWDOWN
            break;

        case 113:
            Data[2] = 26; //C2S_DROPITEM
            break;

        case 115:
            Data[2] = 59; //C2S_MOD2NDJOB
            break;

        case 117:
            Data[2] = 34; //C2S_ASKTRADE
            break;

        case 120:
            Data[2] = 110; //C2S_REQ_BUYITEM_HONOR
            break;

        case 122:
            Data[2] = 99; //C2S_MIXSETDEFENSE
            break;

        case 124:
            Data[2] = 70; //C2S_GETSTALLINFO
            break;

        case 125:
            Data[2] = 25; //
            break;

        case 126:
            Data[2] = 24; //C2S_BUYITEM
            break;

        case 127:
            Data[2] = 18; //C2S_TELEPORT
            break;

        case 128:
            Data[2] = 124; //C2S_ITEM_INVINCIBILITY
            break;

        case 130:
            Data[2] = 50; //C2S_PUTOUTSTORAGE
            break;

        case 131:
            Data[2] = 25; //C2S_SELLITEM
            break;

        case 132:
            Data[2] = 75; //C2S_SKILLREDISTRIBUTE
            break;

        case 133:
            Data[2] = 88; //C2S_PKSTATUS
            break;

        case 135:
            Data[2] = 35; //C2S_ANS_ASKTRADE
            break;

        case 136:
            Data[2] = 78; //C2S_INITSTAT
            break;

        case 140:
            Data[2] = 131; //C2S_UNLOCKITEM_LEVEL2
            break;

        case 141:
            Data[2] = 89; //C2S_SHORTCUT
            break;

        case 144:
            Data[2] = 82; //C2S_TRANSFORM
            break;

        case 146:
            Data[2] = 19; //C2S_RESTART
            break;

        case 147:
            Data[2] = 28; //C2S_SHOWOFFITEM
            break;

        case 148:
            Data[2] = 109; //C2S_EVENT_SNOWFALL_COUNT
            break;

        case 150:
            Data[2] = 113; //C2S_LEARNSKILL_HONOR
            break;

        case 151:
            Data[2] = 130; //C2S_UNLOCKITEM_LEVEL1
            break;

        case 152:
            Data[2] = 21; //C2S_MOVE_END
            break;

        case 153:
            Data[2] = 98; //C2S_MIXING
            break;

        case 156:
            Data[2] = 90; //C2S_SETMYTELPT
            break;

        case 159:
            Data[2] = 71; //C2S_BUYITEMATSTALL
            break;

        case 161:
            Data[2] = 30; //C2S_UPDATEPROPERTY
            break;

        case 164:
            Data[2] = 94; //C2S_GETITEMMONSTER
            break;

        case 167:
            Data[2] = 38; //C2S_SIEGEGUN
            break;

        case 168:
            Data[2] = 95; //C2S_CHANGEGUILDNAME
            break;

        case 170:
            Data[2] = 40; //C2S_SIEGEGUNCONTROL
            break;

        case 171:
            Data[2] = 64; //C2S_FRD
            break;

        case 172:
            Data[2] = 33; //C2S_USEITEM
            break;

        case 174:
            Data[2] = 22; //C2S_ASKNPC
            break;
 
        case 176:
            Data[2] = 108; //C2S_REQ_HONOR_INFO
            break;
 
        case 179:
            Data[2] = 48; //C2S_EXILEPARTY
            break;
 
        case 182:
            Data[2] = 74; //C2S_ANS_REVIVALSKILL
            break;
 
        case 183:
            Data[2] = 42; //C2S_SKILLUP
            break;
 
        case 185:
            Data[2] = 32; //C2S_PICKUPITEM
            break;
 
        case 198:
            Data[2] = 16; //C2S_SKILL
            break;
 
        case 213:
            Data[2] = 20; //C2S_MOVE_ON
            break;
 
        default:
            break;
    }
```

the basic things works .. but there are alot of things that needs fixing
here's some:- 
    -character select fix (already fixed by xea but i removed it from the sourcecode)
    -skills damage fix
    -normal attack damage fix
    -coding skills for the swordtrickster (serverside)
    -coding the new guild system 
    -coding the new family system 
    -fixing DSS and other newer enhancment systems
    -fixing the inventory bug

basically every new system from 2017 to 2021 needs to be written lol ..


config/script passwords: In#ixFuc*kin!g
kxeditor (by darn) fixed and updated by Heth
https://mega.nz/file/ZpNRkARI#zIrlppsiyyNMtBrgDbAbuMX5twYOrAAEqsc7eyalj88

Engine DLL sourcecode
https://mega.nz/file/EgdgTRSS#axFkIUzUhm3wm520r_ghVeunrkAs7iDOiteyv8o0mHo

Client Download
https://mega.nz/file/JwEAwRCT#IPCjGFn5v04ajtKxHDjE71XnkLlCyvp4p001qczTs2w


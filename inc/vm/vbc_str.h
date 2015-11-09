/**
 * @file vbc_str.h
 * @author Violet - Initial version
 * @author RedoX <dev@redox.ws> - 2015 - GCC Port, cleanup
 * @date 2015/09/07
 * @brief VLISP Virtual Machine - Opcodes litteral matchs
 */
// cette table ne sert qu'à l'affichage du bytecode dans la console
#define MaxOpcode 152
char* strbytecod[MaxOpcode]=
{
"exec",
"ret",
"intb",
"int",
"nil",
"drop",
"dup",
"getlocalb",
"getlocal",
"add",
"sub",
"mul",
"div",
"mod",
"and",
"or",
"eor",
"shl",
"shr",
"neg",
"not",
"non",
"eq",
"ne",
"lt",
"gt",
"le",
"ge",
"goto",
"else",
"mktabb",
"mktab",
"deftabb",
"deftab",
"fetchb",
"fetch",
"getglobalb",
"getglobal",
"Secho",
"Iecho",
"setlocalb",
"setlocal",
"setglobal",
"setstructb",
"setstruct",
"hd",
"tl",
"setlocal2",
"store",
"call",
"callrb",
"callr",
"first",
"time_ms",
"tabnew",
"fixarg",
"abs",
"max",
"min",
"rand",
"srand",
"time",
"strnew",
"strset",
"strcpy",
"vstrcmp",
"strfind",
"strfindrev",
"strlen",
"strget",
"strsub",
"strcat",
"tablen",
"strcatlist",
"led",
"motorset",
"motorget",
"button2",
"button3",
"playStart",
"playFeed",
"playStop",
"load",
"udpStart",
"udpCb",
"udpStop",
"udpSend",
"gc",
"tcpOpen",
"tcpClose",
"tcpSend",
"tcpCb",
"save",
"bytecode",
"loopcb",
"Iecholn",
"Secholn",
"tcpListen",
"envget",
"envset",
"sndVol",
"rfidGet",
"playTime",
"netCb",
"netSend",
"netState",
"netMac",
"netChk",
"netSetmode",
"netScan",
"netAuth",
"recStart",
"recStop",
"recVol",
"netSeqAdd",
"strgetword",
"strputword",
"atoi",
"htoi",
"itoa",
"ctoa",
"itoh",
"ctoh",
"itobin2",
"listswitch",
"listswitchstr",
"sndRefresh",
"sndWrite",
"sndRead",
"sndFeed",
"sndAmpli",
"corePP",
"corePush",
"corePull",
"coreBit0",
"tcpEnable",
"reboot",
"strcmp",
"adp2wav",
"wav2adp",
"alaw2wav",
"wav2alaw",
"netPmk",
"flashFirmware",
"crypt",
"uncrypt",
"netRssi",
"rfidGetList",
"rfidRead",
"rfidWrite",
"i2cRead",
"i2cWrite",
};
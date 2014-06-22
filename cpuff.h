/* ==================================================================================================*/
typedef struct
{
char bit_pos;
char str[];
}*cpuf[32];


 typedef struct
{
unsigned int Step;
unsigned int Model;
unsigned int Family;

unsigned int eStep;
unsigned int eModel;
unsigned int eFamily;
}smf;

typedef char  cpustr[13];
/* ==================================================================================================*/

void __stdcall getCPUflag(cpuf ,cpuf );
void __stdcall getAllCPUflag(cpuf ,cpuf );
void __stdcall getCPUflagEDX(cpuf );
void __stdcall getCPUflagECX(cpuf );
void __stdcall getCPUName(cpustr );

void __stdcall getCPUflag_EXT(cpuf ,cpuf );
void __stdcall getAllCPUflag_EXT(cpuf ,cpuf );
void __stdcall getCPUflagEBX_EXT(cpuf );
void __stdcall getCPUflagECX_EXT(cpuf );


void __stdcall getCPUflag_HI(cpuf ,cpuf );
void __stdcall getAllCPUflag_HI(cpuf ,cpuf );
void __stdcall getCPUflagEDX_HI(cpuf );
void __stdcall getCPUflagECX_Hi(cpuf );



void __stdcall getSMF(smf *);
/* ==================================================================================================*/
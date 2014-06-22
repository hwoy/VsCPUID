#include <stdio.h>
#include <string.h>
#include "cpuff.h"
void showAll(void);
cpuf cp_edx,cp_ecx;
cpustr cstr;
smf _smf;
/* ==================================================================================================*/
int main(int argc,char *argv[])
{

int i;

if((argc==2)&&(!strcmp(argv[1],"/a"))) {showAll();return(0);}


else if(argc==1)

{
getCPUName(cstr);
printf("CPU name is %s\n",cstr);

getSMF(&_smf);
printf("Step:\t\t%X\nModel:\t\t%X\nFamily:\t\t%X\n",_smf.Step,_smf.Model,_smf.Family);
printf("eStep:\t\t%X\neModel:\t\t%X\neFamily:\t%X\n",_smf.eStep,_smf.eModel,_smf.eFamily);

puts("******************* for AMD if family = 15 all three extended-flags are not required *******************");



getCPUflag(cp_edx,cp_ecx);

puts("\n\n========================== show your EDX flags ==========================\n\n ");
i=0;
while(cp_edx[i])
{
printf("%s\n",(cp_edx[i]->str));
i++;
}


puts("\n\n========================== show your ECX flags ==========================\n\n ");
i=0;
while(cp_ecx[i])
{
printf("%s\n",(cp_ecx[i]->str));
i++;
}





getCPUflag_EXT(cp_edx,cp_ecx);

puts("\n\n========================== show your extended-EBX flags ==========================\n\n ");
i=0;
while(cp_edx[i])
{
printf("%s\n",(cp_edx[i]->str));
i++;
}


puts("\n\n========================== show your extended-ECX flags ==========================\n\n ");
i=0;
while(cp_ecx[i])
{
printf("%s\n",(cp_ecx[i]->str));
i++;
}





getCPUflag_HI(cp_edx,cp_ecx);

puts("\n\n========================== show your HI-EDX flags ==========================\n\n ");
i=0;
while(cp_edx[i])
{
printf("%s\n",(cp_edx[i]->str));
i++;
}


puts("\n\n========================== show your HI-ECX flags ==========================\n\n ");
i=0;
while(cp_ecx[i])
{
printf("%s\n",(cp_ecx[i]->str));
i++;
}
}

return 0;
}



void showAll(void)
{

int i;
getAllCPUflag(cp_edx,cp_ecx);

puts("\n\n========================== show all EDX flags ==========================\n\n ");
i=0;
while(cp_edx[i])
{
printf("%s\n",(cp_edx[i]->str));
i++;
}


puts("\n\n========================== show all ECX flags ==========================\n\n ");
i=0;
while(cp_ecx[i])
{
printf("%s\n",(cp_ecx[i]->str));
i++;
}




getAllCPUflag_EXT(cp_edx,cp_ecx);

puts("\n\n========================== show all extended-EBX flags ==========================\n\n ");
i=0;
while(cp_edx[i])
{
printf("%s\n",(cp_edx[i]->str));
i++;
}


puts("\n\n========================== show all extended-ECX flags ==========================\n\n ");
i=0;
while(cp_ecx[i])
{
printf("%s\n",(cp_ecx[i]->str));
i++;
}

getAllCPUflag_HI(cp_edx,cp_ecx);

puts("\n\n========================== show all Hi-EDX flags ==========================\n\n ");
i=0;
while(cp_edx[i])
{
printf("%s\n",(cp_edx[i]->str));
i++;
}


puts("\n\n========================== show all HI-ECX flags ==========================\n\n ");
i=0;
while(cp_ecx[i])
{
printf("%s\n",(cp_ecx[i]->str));
i++;
}
}




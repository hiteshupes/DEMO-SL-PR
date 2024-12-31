#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] ="Raghul learning the devOps";
    char str2[30];
    strcpy(str2,str1);
    printf("Show input: %s\n",str2);
    return 0;
}
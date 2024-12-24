#include<stdio.h>
int main(){
    char str[100];
    FILE *ptrstr,*cpy;
    ptrstr = fopen("bt01.txt","r");
    fgets(str,sizeof(str),ptrstr);
    cpy = fopen("bt06.txt","w");
    fgets(str,sizeof(str),cpy);
    fputs(str,cpy);
    fclose(ptrstr);
    fclose(cpy);
    return 0;
}
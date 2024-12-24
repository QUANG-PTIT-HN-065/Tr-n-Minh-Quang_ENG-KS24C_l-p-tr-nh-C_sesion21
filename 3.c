#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    FILE *ptrstr;
    ptrstr = fopen("bt01.txt","a");
    printf("hay nhap vao chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);
    fputs(str,ptrstr);
    fclose(ptrstr);
    return 0;
}
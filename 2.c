#include<stdio.h>
int main(){
    char str[100];
    FILE *ptrstr;
    ptrstr = fopen("bt01.txt","r");
    char read = fgetc(ptrstr);
    printf("ky tu dau tien trong file la: %c",read);
    fclose(ptrstr);
    return 0;
}
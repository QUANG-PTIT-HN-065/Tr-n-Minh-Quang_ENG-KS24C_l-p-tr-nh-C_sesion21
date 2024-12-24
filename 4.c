#include<stdio.h>
int main(){
    char str[100];
    char read[100];
    FILE *ptrstr;
    ptrstr = fopen("bt01.txt","r");
    fgets(read,sizeof(read),ptrstr);
    printf("ky tu dau tien trong file la: %s",read);
    fclose(ptrstr);
    return 0;
}
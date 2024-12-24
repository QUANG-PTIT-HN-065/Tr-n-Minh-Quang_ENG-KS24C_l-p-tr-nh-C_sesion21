#include<stdio.h>
int main(){
    char str[100];
    int n;
    FILE *ptrstr;
    printf("hay nhap vao so dong: ");
    scanf("%d",&n);
    ptrstr = fopen("bt05.txt","w");
    for (int i = 0; i < n; i++)
    {
        printf("hay nhap vao chuoi ky tu o dong %d: ",i+1);
        fgets(str, sizeof(str), stdin);
        fputs(str,ptrstr);
    }
    fclose(ptrstr);
    char read[100];
    ptrstr = fopen("bt05.txt","r");
    int i=1;
    while (fgets(read,sizeof(read),ptrstr)!=NULL)
    {
        printf("Dong %d: %s", i++,read);
    }
    return 0;
}
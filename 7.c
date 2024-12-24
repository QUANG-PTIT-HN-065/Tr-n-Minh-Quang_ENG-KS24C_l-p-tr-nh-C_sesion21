#include<stdio.h>
#include<string.h>
typedef struct 
{
    int id;
    int age;
    char name[100];
}Studen;
int main(){
    int n;
    Studen em01;
    printf("hay nhap vao so luong hoc sinh: ");
    scanf("%d",&n);
    FILE *ptr = fopen("students.txt","w");
    for (int i = 0; i < n; i++)
    {
        printf("hay nhap thong tin hoc sinh thu %d\n",i+1);
        printf("id: ");
        scanf("%d",&em01.id);
        printf("age: ");
        scanf("%d",&em01.age);
        printf("name: ");
        getchar();
        fgets(em01.name,sizeof(em01.name),stdin);
        fprintf(ptr,"%d %d %s",em01.id,em01.age,em01.name);
    }
    fclose(ptr);
    return 0;
}
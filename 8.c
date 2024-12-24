#include<stdio.h>
#include<string.h>
typedef struct 
{
    int id;
    int age;
    char name[100];
}Studen;
int main(){
    Studen em01[100];
    FILE *ptr = fopen("students.txt","r");
    //fscanf(ptr,"%d %d %s",em01.id,em01.age,em01.name);
    int count = 0;
    while (fscanf(ptr,"%d %d %[^\n]",&em01[count].id,&em01[count].age,&em01[count].name)==3)
    {
        count++;
    }
    fclose(ptr);
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Tuoi: %d, Ten: %s\n", em01[i].id, em01[i].age, em01[i].name);
    }
    return 0;
}
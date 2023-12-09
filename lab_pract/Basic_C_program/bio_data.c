#include<stdio.h>
void main()
{
    char name[100];
    int* age;
    char gender;
    char address[200];
    float cutoff;
    printf("Enter your name:\n");
    scanf("%s",name);
    printf("Enter your age:\n");
    scanf("%d",age);
    printf("Enter your gender:\n");
    scanf("%s",&gender);
    printf("Enter your address:\n");
    scanf("%s",address);
    printf("Enter your cutoff:\n");
    scanf("%f",&cutoff);
    printf("name:\t%s\n",name);
    printf("age:\t%d\n",age);
    printf("gender:\t%c\n",gender);
    printf("address:\t%s\n",address);
    printf("cutoff:\t%f\n",cutoff);
}
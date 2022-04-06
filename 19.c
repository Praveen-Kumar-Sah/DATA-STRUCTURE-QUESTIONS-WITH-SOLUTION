// Passing Structure members as Argument
#include<stdio.h>

struct student{
    char name[20];
    int age;
    int rollNo;
};

void print(char name[], int age, int rollNo){

    printf("\nName is : %s\nAge is : %d\nRoll Number is : %d", name, age, rollNo);
}

int main(){

    struct student s1 = {"Praveen", 21, 20043};
    struct student s2 = {"Raushan", 19, 20044};

    print(s1.name, s1.age, s1.rollNo);
    print(s2.name, s2.age, s2.rollNo);

    return 0;
}
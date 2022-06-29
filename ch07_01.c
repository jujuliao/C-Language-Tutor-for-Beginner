//
//  ch07_01.c
//
#include <stdio.h>
#include <string.h>

struct sStudent {
    char studentNo[10];
    char studentName[80];
    int  chinese;
    int  english;
    int  math;
    int  physics;
};

void printStudent(struct sStudent studentClass[]) {
    int i;
    
    printf("Student No\tStudent Name\tChinese\tEnglish\tMath\tPhysics\n");
    for(i=0; i < 3; i++) {
        printf("%10s\t", studentClass[i].studentNo);
        printf("%12s\t", studentClass[i].studentName);
        printf("%7d\t", studentClass[i].chinese);
        printf("%7d\t", studentClass[i].english);
        printf("%4d\t", studentClass[i].math);
        printf("%7d\t\n", studentClass[i].physics);
    }
}

int main() {
    struct sStudent studentClass[3];

    strcpy(studentClass[0].studentNo, "220101");
    strcpy(studentClass[0].studentName, "John Chen");
    studentClass[0].chinese = 91;
    studentClass[0].english = 93;
    studentClass[0].math = 84;
    studentClass[0].physics = 75;
    
    strcpy(studentClass[1].studentNo, "220102");
    strcpy(studentClass[1].studentName, "Mary Shih");
    studentClass[1].chinese = 86;
    studentClass[1].english = 77;
    studentClass[1].math = 81;
    studentClass[1].physics = 86;
    
    strcpy(studentClass[2].studentNo, "220103");
    strcpy(studentClass[2].studentName, "Joe Chou");
    studentClass[2].chinese = 79;
    studentClass[2].english = 73;
    studentClass[2].math = 89;
    studentClass[2].physics = 93;
    printStudent(studentClass);

    return 0;
}
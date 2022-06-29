//
//  ch07_03.c
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

void printStudent(struct sStudent *student) {
    int i;
    
    printf("Student No\tStudent Name\tChinese\tEnglish\tMath\tPhysics\n");
    for(i=0; i < 3; i++) {
        printf("%10s\t", student->studentNo);
        printf("%12s\t", student->studentName);
        printf("%7d\t", student->chinese);
        printf("%7d\t", student->english);
        printf("%4d\t", student->math);
        printf("%7d\t\n", student->physics);
        student++;
    }
}

int main() {
    struct sStudent *pStudent, studentClass[3];

    pStudent = studentClass;
    strcpy(pStudent->studentNo, "220101");
    strcpy(pStudent->studentName, "John Chen");
    pStudent->chinese = 91;
    pStudent->english = 93;
    pStudent->math = 84;
    pStudent->physics = 75;
    
    pStudent++;
    strcpy(pStudent->studentNo, "220102");
    strcpy(pStudent->studentName, "Mary Shih");
    pStudent->chinese = 86;
    pStudent->english = 77;
    pStudent->math = 81;
    pStudent->physics = 86;
    
    pStudent++;
    strcpy(pStudent->studentNo, "220103");
    strcpy(pStudent->studentName, "Joe Chou");
    pStudent->chinese = 79;
    pStudent->english = 73;
    pStudent->math = 89;
    pStudent->physics = 93;
    printStudent(studentClass);

    return 0;
}
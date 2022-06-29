//
//  ch07_02.c
//
#include <stdio.h>

struct sStudentInfo {
    char parentName[80];
    char mobile[12];
};

struct sStudent {
    struct sStudentInfo info;
    char studentNo[10];
    char studentName[80];
    int  chinese;
    int  english;
    int  math;
    int  physics;
};

int main() {
    struct sStudent student, studentClass[3];
    
    strcpy(student.info.parentName, "Smith Zhang");
    strcpy(student.info.mobile, "0933918001");
 
    strcpy(studentClass->info.parentName, "Smith Zhang");
    strcpy(studentClass->info.mobile, "0933918001");
    ....
    return 0;   
}
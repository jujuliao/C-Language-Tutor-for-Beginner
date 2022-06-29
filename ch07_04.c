//
//  ch07_04.c
//
#include <stdio.h>
#include <string.h>

typedef struct tagStudent {
    char studentNo[10];
    char studentName[80];
    int  chinese;
    int  english;
    int  math;
    int  physics;
} tStudent, *ptStudent;

void printStudent(ptStudent student, int count) {
    int i;
    
    printf("Student No\tStudent Name\tChinese\tEnglish\tMath\tPhysics\n");
    for(i=0; i < count; i++) {
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
    int i, count;
    ptStudent pStudent, pTemp;
    
    printf("Input the number of student: ");
    scanf("%d", &count);

    pStudent = (ptStudent) malloc( sizeof(tStudent) * count );
    if( pStudent == NULL )
    {
        perror("maloc:");
        return -1;
    }

    pTemp = pStudent;
    for(i = 0; i < count; i++, pTemp++)
    {
        printf("Input student number : ");
        scanf("%s", pTemp->studentNo);
        printf("Input student name : ");
        scanf("%s", pTemp->studentName);
        printf("Input chinese score : ");
        scanf("%d", &(pTemp->chinese));
        printf("Input english score : ");
        scanf("%d", &(pTemp->english));
        printf("Input math score : ");
        scanf("%d", &(pTemp->math));
        printf("Input physics score : ");
        scanf("%d", &(pTemp->physics));
    }
    printf("\n");
    printStudent(pStudent, count);
    free(pStudent);
    return 0;    
}
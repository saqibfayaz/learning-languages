#include<stdio.h>
int main()
{
    char grades[] = {'A','C','D','B','D','C','D','A','A','C','B','B','D'};
    int student;
    puts("Grades of students");
    for(student=0;student<=12;student++)
    
    {
        printf("student with roll number %d has \"%c\" grades\n",student+1,grades[student]);
        
    }
    puts("good luck every one");
    return(0);
}
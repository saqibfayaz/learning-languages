/*#include<stdio.h>
int main()
{
    int grade;
    puts("enter your exam grades from 1-100");
    scanf("%d",grade);
    printf("the computer says...\n");
    printf("%s\n",(grade >= 60)? "passed!":"Failed");
    return(0);

}
*/
#include <stdio.h> 
int main()
 {
      int grade;
       printf("Enter your grade on the last test (0 to 100): ");
        scanf("%d",&grade); 
        printf("The computer says you: "); 
        printf("%s\n",(grade >= 60) ? "Passed!" : "Failed"); 
        return(0);
         }

 
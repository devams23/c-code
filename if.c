#include<stdio.h>
    int main() {
            
           int age, marks;
           
                printf("Enter your age:");
                scanf("%d", &age);

                printf("Enter your marks:");
                scanf("%d", &marks);


            if (age<18)
            {

                printf("Your age is less than 18\n");
                

            
            if (marks<45)

                printf("FAIL!!\n");
                
            else 
                printf("PASS!!\n");

            }

            else 
                printf("you are above 18\nPasss!!");
                

    return 0;

    }

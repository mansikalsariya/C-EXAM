// creat a c program to check if a number is enterd bye the use is a positive or consonat using a switch  statment  

#include <stdio.h>
int main (){
    int number;
    // enter a number 
    printf("enter a number: ");
    scanf("%d",&number);
    switch (number>0)
    {
    case1: 
        printf("%d is positive number \n",number);
        break;
     case 0: 
        printf("%d is nagative number \n",number);
        break;
    }
    return 0;
}


#include<stdio.h>
int main(){
    // my name is Ayan Ahmed Siddique 
// my First Project in C language!
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("you enter wrong number");
    }
    else if(marks<32)
    {
        printf("Grade F");
    }
    else if(marks>=33 && marks<49){
    printf("Grade E");

    }

    else if(marks>=50 && marks<60)
    {
        printf("Grade D");
    }
    else if(marks>=60 && marks<70)
    {
        printf("Grade C");
    }
    else if(marks>=70 && marks<80)
    {
        printf("Grade B");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Grade A");
    }
    else if(marks>=90){
    printf("Grade ");

    }
    
}
}
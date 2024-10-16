
/*
Exp No.:4
Title :WAP to find the sum of all the odd numbers between numbers entered by the user.
Name:Saksham Jha
Class:First Year
Div:C
UIN:241P067
Roll No.:061
*/

#include<stdio.h>

int main()
{
    int i,strt,end,sum=0;

    printf("Enter the Starting no. :");
    scanf("%d",&strt);
    printf("Enter the End no. :");
    scanf("%d",&end);

    for(i=strt;i<=end;i++)
    {
        if(i%2!=0)
        {
            sum=i+sum;
        }
    }
    printf("Addition of ODD numbers is %d",sum);

    return 0;
}


OUTPUT:
Enter the Starting no. :0
Enter the End no. :35
Addition of ODD numbers is 324
Process returned 0 (0x0)   execution time : 9.312 s
Press any key to continue.

/*program name: Write a program in C to display the n terms of even natural number and their sum
by: Golam Ahmed Mugdha*/

#include<stdio.h>
    void main()

    {
        int number, sum=0,i;

        printf("Enter the Value of Term: ");
        scanf("%d",&number);

        printf("\nNatural Even Numbers are: ");

        for(i=1; i<=number; i++)
        {
                printf("%d ",2*i);
                sum+=2*i;
        }

        printf("\nSum is: %d\n",sum);

    }

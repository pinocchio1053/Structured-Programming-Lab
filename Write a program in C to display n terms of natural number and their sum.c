/*program name: Write a program in C to display n terms of natural number and their sum.
by: Golam Ahmed Mugdha*/

    #include<stdio.h>

    void main()
    {
        int i, number, sum=0 ;

        printf("Enter the Value of Terms: ");
        scanf("%d",&number);

        for(i=1; i<=number; i++)
        {
            sum+=i;
        }

        printf("\n\tSum of %d terms of natural numbers is: %d\n",number,sum);

    }

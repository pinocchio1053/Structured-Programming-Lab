/*program name: Write a program in C to display the n terms of odd natural number and their sum .
by: Golam Ahmed Mugdha*/

    #include<stdio.h>
    void main()

    {
        int number, sum=0,i;

        printf("Enter the Value of Term: ");
        scanf("%d",&number);

        printf("\nNatural odd Numbers are: ");

        for(i=1; i<=number; i++)
        {
                printf("%d ",2*i-1);
                sum+=2*i-1;
        }

        printf("\nSum is: %d\n",sum);

    }

/*program name: Write a program in C to read 10 numbers from keyboard and find their sum and average
by: Golam Ahmed Mugdha*/

    #include<stdio.h>

    void main()

    {
        int number, i , sum=0;

            printf("Enter the Value of Term: ");
            scanf("%d",&number);

            for(i=1; i<=number; i++)
            {
                sum+=i;
            }

        printf("Sum of Numbers is: %d\n",sum);
        printf("Average of Numbers is: %d\n",sum/number);
    }

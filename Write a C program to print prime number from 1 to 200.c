/*program name: Write a C program to print prime number from 1 to 200
by: Golam Ahmed Mugdha*/

    #include<stdio.h>

        int main()
        {
            int i, j, count=0;

            printf("Prime numbers between 1 to 200 are: \n");

            for(i=2; i<=200; i++)
            {
                count=0;
                for(j=2; j<i/2; j++)
                {
                    if(i%j==0)
                    {
                        count=1;
                        break;
                    }
                }
                if(count!=1)
                {
                    printf("\t%d",i);
                }
            }
        }

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
    int h, m, s;
    int d =1000; //a delay time of 1000 milliseconds to use for function sleep
    printf("Timer ends in: \n");
    scanf("%d%d%d", &h,&m,&s);

    if (h > 24 || m > 60 || s > 60)
    {
        printf("ERROR!!! INVALID TIME FORMAT");
        exit(0);
    }

    while (1)// infinite loop here
    {
        s--;
        if (s < 0)
        {
            m--;
            s = 59;
        }
        if (m < 0)
        {
            h--;
            m = 59;
            s = 59;
        }
        if (h < 0)
        {
            m = 0;
            s = 0;
            h = 0;
            break;
        }

        printf("\nAnd so it begins: \n");
        printf("\n%02d:%02d:%02d\n",h,m,s);
        Sleep(d); //this sleep function makes the program run like a real clock
        system("cls"); //clears the screen for a fresh input
    }
    printf("\nTime's Up!!!!!!! \a ");
}

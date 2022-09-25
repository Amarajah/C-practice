#include <stdio.h>
#include <windows.h>

int main()
{
    int h,m,s;
    int d=1000;//a delay of 1000 milliseconds to use for function sleep
    printf("Set time : \n");
    scanf("%d%d%d", &h,&m,&s);

    if(h>23 || m>60 || s>60)
    {
        printf("Error!!! \n");
        exit(0);
    }
    while(1)// an infinite loop
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>23)
        {
            h=0;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d", h,m,s);
        Sleep(d); //this sleep function makes the program run like a real clock
        system("cls"); //clears the screeen
    }
}

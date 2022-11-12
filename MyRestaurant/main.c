#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    int b;
    int c;

    printf("\t\t\t\t\t\t\t\t\t\tNio's Kitchen\n");
    printf(" \n");
    printf(" \n");
    printf("******************************Welcome to Nio's Kitchen's Online Order/Delivery Platform******************************\n");
    printf(" \n");
    printf("\t\t\t\t\t\t\t\t\t\tMENU\n");
    printf("NB:All prices are in Naira\n");
    printf(" \n");
    printf(" \n");
    printf("\t\t\t(1)Jollof Rice\n");
    printf("Single adult-sized portion\n");
    printf("Protein pieces: 5\n");
    printf("Side serving: Fried Plantains, Peppered Beef and Coleslaw\n");
    printf("Price: #5000\n");
    printf(" \n");
    printf(" \n");
    printf("\t\t\t(2)Fried Rice\n");
    printf("Single adult-sized portion\n");
    printf("Protein pieces: 5\n");
    printf("Side serving: Peppered Beef and Coleslaw\n");
    printf("Price: #7000\n");
    printf(" \n");
    printf(" \n");
    printf("\t\t\t(3)Palm Oil Rice\n");
    printf("Single adult-sized portion\n");
    printf("Protein pieces: 5\n");
    printf("Side serving: Fried Fish and Kpomo in Pepper Sauce\n");
    printf("Price: #4000\n");
    printf(" \n");
    printf(" \n");
    printf("\t\t\t(4)Roasted Yam and Plantains\n");
    printf("Single adult-sized portion\n");
    printf("Side serving: Peppered Beef and Kpomo in Palm Oil sauce\n");
    printf("Price: #4500\n");
    printf(" \n");
    printf(" \n");
    printf("\t\t\t(5)Bitterleaf Soup\n");
    printf("Single adult-sized portion\n");
    printf("Protein pieces: 7\n");
    printf("Side serving: Fufu\n");
    printf("Price: #6000\n");
    printf(" \n");

    printf(" \n");
    printf("Bank info:\n");
    printf("Trust Bank \n Account number: 12345677890 \n Name: Nio");
    printf(" \n");
    printf("What would you like to order from us today?\n");
    printf(" \n");

    scanf("%d",&a);
    printf("\nYou selected number %d on our menu!\n", a);

    if (a == 1)
    {
        printf("Yayy,Jollof Rice on the way to you in 2hrs max!!\n");
        printf("Pay On Delivery(1) or Bank Transfer(2)?\n");
        scanf("%d", &b);

        if (b == 1)
        {
            printf("Alrighty then!!! We'll be there soon!\n");
        }
        else if (b == 2)
        {
            printf("Please make a transfer to our account number and input your coupon code here:\n");
            scanf("%4d\n", &c);

            if (c == 00000)
            {
                printf("Incorrect coupon!!!");
            }
            else
                printf("Valid input, you'll soon get your meal!!");
        }

        else
                printf("Invalid input!!");
    }

    if (a == 2)
    {
        printf("Yayy,Fried Rice on the way to you in 2hrs max!!\n");
        printf("Pay On Delivery(1) or Bank Transfer(2)?\n");
        scanf("%d", &b);

        if (b == 1)
        {
            printf("Alrighty then!!! We'll be there soon!\n");
        }
        else if (b == 2)
        {
            printf("Please make a transfer to our account number and input your coupon code here:\n");
            scanf("%4d\n", &c);

            if (c == 00000)
            {
                printf("Incorrect coupon!!!");
            }
            else
                printf("Valid input, you'll soon get your meal!!");
        }

        else
                printf("Invalid input!!");
    }

    if (a == 3)
    {
        printf("Yayy,Palm Oil Rice on the way to you in 2hrs max!!\n");
        printf("Pay On Delivery(1) or Bank Transfer(2)?\n");
        scanf("%d", &b);

        if (b == 1)
        {
            printf("Alrighty then!!! We'll be there soon!\n");
        }
        else if (b == 2)
        {
            printf("Please make a transfer to our account number and input your coupon code here:\n");
            scanf("%4d\n", &c);

            if (c == 00000)
            {
                printf("Incorrect coupon!!!");
            }
            else
                printf("Valid input, you'll soon get your meal!!");
        }

        else
                printf("Invalid input!!");
    }

    if (a == 4)
    {
        printf("Yayy,Roasted Yams and Plantains on the way to you in 2hrs max!!\n");
        printf("Pay On Delivery(1) or Bank Transfer(2)?\n");
        scanf("%d", &b);

        if (b == 1)
        {
            printf("Alrighty then!!! We'll be there soon!\n");
        }
        else if (b == 2)
        {
            printf("Please make a transfer to our account number and input your coupon code here:\n");
            scanf("%4d\n", &c);

            if (c == 00000)
            {
                printf("Incorrect coupon!!!");
            }
            else
                printf("Valid input, you'll soon get your meal!!");
        }

        else
                printf("Invalid input!!");
    }
    if (a == 5)
    {
        printf("Yayy, Bitterleaf soup on the way to you in 2hrs max!!\n");
        printf("Pay On Delivery(1) or Bank Transfer(2)?\n");
        scanf("%d", &b);

        if (b == 1)
        {
            printf("Alrighty then!!! We'll be there soon!\n");
        }
        else if (b == 2)
        {
            printf("Please make a transfer to our account number and input your coupon code here:\n");
            scanf("%4d\n", &c);

            if (c == 00000)
            {
                printf("Incorrect coupon!!!");
            }
            else
                printf("Valid input, you'll soon get your meal!!");
        }

        else
                printf("Invalid input!!");
    }
    else
        printf("Invalid option");
}

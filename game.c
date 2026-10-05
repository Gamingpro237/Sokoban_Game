#include<stdio.h>
#include<time.h>

int progate()
{
    int b;
    system("cls");
    printf("===================================================\t");
    printf("\t\t\t\t   THIS GAME WAS MADE BY GIFT      \t\t\t\t\n");
    printf("===================================================\n");
    printf("---------------------------------------------------\n");
    printf("-          WELCOME TO MY GAME                     -\n");
    printf("-                                                 -\n");
    printf("-                                                 -\n");
    printf("---------------------------------------------------\n");
    printf("\n Choose the dificulty of the game \n\n");
    printf("1. very easy\n");
    printf("2. normal\n");
    printf("3. profesional\n");
    printf("4. expert\n");
    printf("5. ultimate god\n");
    scanf("%d",&b);
    system("cls");
    switch(b)
    {
    case 1: data();
    break;
    case 2: set();
    break;
    case 3: text();
    break;
    case 4: nice();
    break;
    case 5: bad();
    break;
    case 6: close();
    break;
    }
     return 0;
}
int data()
{
    int n,i,c;
    int a;
    srand(time(0));
    a=rand()%10;
    do
    {
    printf("\nGuest a number between 0 and 10:\t");
    scanf("%d",&n);
    if (n<a)
    printf("the guest number is small\n");
    else if (n>a)
    printf("the guest number is big\n\t");
    }
    while(n!=a);
    printf("you have a correct choice\n\n\t");
    printf("\n-Enter '0' to try again, \n -Enter '1' to go to main menu, \n -Enter '2' to exit, \n -Enter '3' to go to Next level");
    scanf("%d",&c);
    system("cls");
    if (c==0)
    data();
    else if(c==1)
    progate();
    else if(c==2)
    close();
    else if(c==3)
    set();
    return 0;
}
int set (void)
{
     int n,i,c;
    int a;
    srand(time(0));
    a=rand()%100;
    do
    {
    printf("\nGuest a number between 0 and 100:\t");
    scanf("%d",&n);
    if (n<a)
    printf("the guest number is small\n");
    else if (n>a)
    printf("the guest number is big\n\t");
    }
    while(n!=a);
    printf("you have a correct choice\n\n");
    printf("\n-Enter '0' to try again, \n -Enter '1' to go to main menu, \n -Enter '2' to exit, \n -Enter '3' to go to Next level");
    scanf("%d",&c);
    system("cls");
    if (c==0)
    set();
    else if(c==1)
    progate();
    else if(c==2)
    close();
    else if(c==3)
    text();
    return 0;
}
int text (void)
{
    int n,i,c;
    int a;
    srand(time(0));
    a=rand()%1000;
    do
    {
    printf("\nGuest a number between 0 and 1000:\t");
    scanf("%d",&n);
    if (n<a)
    printf("the guest number is small\n");
    else if (n>a)
    printf("the guest number is big\n\t");
    }
    while(n!=a);
    printf("you have a correct choice\n\n");
    printf("\n-Enter '0' to try again, \n -Enter '1' to go to main menu, \n -Enter '2' to exit, \n -Enter '3' to go to Next level");
    scanf("%d",&c);
    system("cls");
    if (c==0)
    text();
    else if(c==1)
    progate();
    else if(c==2)
    close();
    else if(c==3)
    nice();
    return 0;
}
int nice (void)
{
    int n,i,c;
    int a;
    srand(time(0));
    a=rand()%10000;
    do
    {
    printf("\nGuest a number between 0 and 10000:\t");
    scanf("%d",&n);
    if (n<a)
    printf("the guest number is small\n");
    else if (n>a)
    printf("the guest number is big\n\t");
    }
    while(n!=a);
    printf("you have a correct choice\n\n");
    printf("\n-Enter '0' to try again, \n -Enter '1' to go to main menu, \n -Enter '2' to exit, \n -Enter '3' to go to Next level");
    scanf("%d",&c);
    system("cls");
    if (c==0)
    nice();
    else if(c==1)
    progate();
    else if(c==2)
    close();
    else if(c==3)
    bad();
    return 0;
}
int bad (void)
{
    int n,i,c;
    int a;
    srand(time(0));
    a=rand()%1000000000;
    do
    {
    printf("\nGuest a number between 0 and 1.0*10^8:\t");
    scanf("%d",&n);
    if (n<a)
    printf("the guest number is small\n");
    else if (n>a)
    printf("the guest number is big\n\t");
    }
    while(n!=a);
    printf("you have a correct choice\n\n");
    printf("\n-Enter '0' to try again, \n -Enter '1' to go to main menu, \n -Enter '2' to exit, \n -Enter '3' to go to Next level");
    scanf("%d",&c);
    system("cls");
    if (c==0)
    bad();
    else if(c==1)
    progate();
    else if(c==2)
    close();
    return 0;
}

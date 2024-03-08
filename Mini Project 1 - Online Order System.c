#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,count=0,cost=0,ship=0;
    // x is the number which is in the opposite to the first item our customers needed
    // y is the number which is in the opposite to the second item our customers needed
    printf("*************Hello world!*************\n");
    printf("*******Welcome to Nashaat Store*******\nWe are specialized in manufacturing of LED lighting lamps\nWe are pleased to help you,sir\n\n");
    printf("Please follow the instructions to place your order....Write down the number of every item you need and if you end press 0\n");
    printf("You can order as many items as you want, but a minimum of 2 items is required\n");
    printf("Keep up with our new Offers\n- If you bought more than 5 items, You will get a 20%% discount on the total fee.\n\n");
    printf("You can choose regular or overnight shipping for each item\n");
    printf("Regular shipping costs $2 for items under $10, and $3 for items $10 or more\n");
    printf("Overnight shipping adds an extra $5 to the shipping cost\n\n");
    printf("Take a look on our products,sir\n* Floor Lamp 165x50x50 cm - White & Beige - YL.511 ((Its cost is 3 $)).....1\n* Ceiling Lamp 75x60 cm - White - MOOLIGC43 + Free Remote ((Its cost is 7 $)).....2\n* Table Lamp 17×37×17×17 cm - Gold - CLUC.T12004G ((Its cost is 5 $)).....3\n* YL0074 Wall Lamp- Gold&off white - 5789 ((Its cost is 12 $)).....4\n* YLS.YL463 Floor Lamp - Black ((Its cost is 35 $)).....5\n* Ceiling Lamp 60x15 cm - Black - CLUC.45 ((Its cost is 50 $)).....6\n* YLS.YL494 Ceiling Lamp - Silver ((Its cost is 25 $)).....7\n* L.SQU.LSH11-309 Ceiling Lamp - White ((Its cost is 13 $)).....8\n");
    printf("This all available Elements for now\nPlz,Write down the number which opposite to the needed item\n ");
    printf("###############We must apologize for you, if you did not find what you need###############\n");
    label1:
    scanf("%d",&x);
    if (x>=1 && x<=8)
    {
      switch (x)
    {
    case 1:
        printf("your choice is Floor Lamp 165x50x50 cm - White & Beige - YL.511\n ");
        count++;
        cost+=3;
        ship+=2;
        break;
    case 2:
        printf("your choice is Ceiling Lamp 75x60 cm - White - MOOLIGC43 + Free Remote\n ");
        count++;
        cost+=7;
        ship+=2;
        break;
    case 3:
        printf("your choice is Table Lamp 17×37×17×17 cm - Gold - CLUC.T12004G\n ");
        count++;
        cost+=5;
        ship+=2;
        break;
    case 4:
        printf("your choice is YL0074 Wall Lamp- Gold&off white - 5789\n ");
        count++;
        cost+=12;
        ship+=3;
        break;
    case 5:
        printf("your choice is YLS.YL463 Floor Lamp - Black\n ");
        count++;
        cost+=35;
        ship+=3;
        break;
    case 6:
        printf("your choice is Ceiling Lamp 60x15 cm - Black - CLUC.45\n ");
        count++;
        cost+=50;
        ship+=3;
        break;
    case 7:
        printf("your choice is YLS.YL494 Ceiling Lamp - Silver\n ");
        count++;
        cost+=25;
        ship+=2;
        break;
    case 8:
        printf("your choice is L.SQU.LSH11-309 Ceiling Lamp - White\n ");
        count++;
        cost+=13;
        ship+=2;
        break;
    default:
    break;
    }}
else
{
    printf("unknown number\nPlz,Enter the number which opposite your choice\n");
    goto label1;
}



    printf("\n********You can order as many items as you want, but a minimum of 2 items is required********\n");
    printf("Plz,Enter the number of the second item you want\n");
     do {
    label2:
    scanf("%d",&y);
    if (y>=1 && y<=8)
    {
    switch (y)
    {
    case 1:
        printf("your choice is Floor Lamp 165x50x50 cm - White & Beige - YL.511\n ");
        count++;
        cost+=3;
        ship+=2;
        break;
    case 2:
        printf("your choice is Ceiling Lamp 75x60 cm - White - MOOLIGC43 + Free Remote\n ");
        count++;
        cost+=7;
        ship+=2;
        break;
    case 3:
        printf("your choice is Table Lamp 17×37×17×17 cm - Gold - CLUC.T12004G\n ");
        count++;
        cost+=5;
        ship+=2;
        break;
    case 4:
        printf("your choice is YL0074 Wall Lamp- Gold&off white - 5789\n ");
        count++;
        cost+=12;
        ship+=3;
        break;
    case 5:
        printf("your choice is YLS.YL463 Floor Lamp - Black\n ");
        count++;
        cost+=35;
        ship+=3;
        break;
    case 6:
        printf("your choice is Ceiling Lamp 60x15 cm - Black - CLUC.45\n ");
        count++;
        cost+=50;
        ship+=3;
        break;
    case 7:
        printf("your choice is YLS.YL494 Ceiling Lamp - Silver\n ");
        count++;
        cost+=25;
        ship+=3;
        break;
    case 8:
        printf("your choice is L.SQU.LSH11-309 Ceiling Lamp - White\n ");
        count++;
        cost+=13;
        ship+=3;
        break;
    default:
        break;
     }} else
        {
            if (y==0 && count>1)
        {

            break;
        }
            printf("unknown number\nPlz,Enter the number which opposite your choice\n");

       goto label2;

    }

    }while (y>=1 && y<=8);

if (count>=5)
{
            printf("We are happy to serve you\n");
            printf("---------------------------your bill---------------------------\n");
            printf("your bill is :%d$\nyou got 20%% discount as you bought 5 items\nyour bill after discount is %d$\n",cost,(cost-(int)(cost*.2)));
            printf("Shipping cost is :%d$\n",ship);
            printf("your total cost is :%d$\n",(cost-(int)(cost*.2)+ship));
}

else
{
    printf("We are happy to serve you\n");
            printf("---------------------------your bill---------------------------\n");
            printf("your bill is :%d$\n",cost);
            printf("Shipping cost is :%d$\n",ship);
            printf("your total cost is :%d$\n",(cost+ship));
}

return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,item=1,sh_price,ts_price,p_price,d_price,sk_price,sc_price,total=0;
    int sh_i=0,ts_i=0,p_i=0,d_i=0,sk_i=0,sc_i=0,count=0,ship=0;
    while(1)
    {
        sh_i=0,ts_i=0,p_i=0,d_i=0,sk_i=0,sc_i=0,count=0,ship=0,total=0,item=1;
        printf("Welcome...please order.\n");
        printf("NOTE!! Any order must be at least two pieces\n");
        printf("1)Shirt.\n2)T-shirt.\n3)Pants.\n4)Dress.\n5)Skirt.\n6)Scarf.\n");
        while(item!=0)  
        {                      //the following to choose what you want to buy...you enter the number of items and how
            scanf("%d",&item); //many pieces of this item
            printf("How many pieces do you want? ");
            scanf("%d",&i);
            switch(item)   
            {
            case 1:
            {
                sh_i=i;
                sh_price=sh_i*400;
                total+=sh_price;
                count+=sh_i;
            }
            break;
            case 2:
            {
                ts_i=i;
                ts_price=ts_i*200;
                total+=ts_price;
                count+=ts_i;
            }
            break;
            case 3:
            {
                p_i=i;
                p_price=p_i*300;
                total+=p_price;
                count+=p_i;
            }
            break;
            case 4:
            {
                d_i=i;
                d_price=d_i*500;
                total+=d_price;
                count+=d_i;
            }
            break;
            case 5:
            {
                sk_i=i;
                sk_price=sk_i*400;
                total+=sk_price;
                count+=sk_i;
            }
            break;
            case 6:
            {
                sc_i=i;
                sc_price=sc_i*100;
                total+=sc_price;
                count+=sc_i;
            }
            break;
            }
            printf("Press 1 to continue or 0 to finish the order. ");
            scanf("%d",&item);
            if(item)
            {
                printf("Choose another item. ");
            }
            else
            {
                if(count<2)
                {
                    printf("Invalid Order\n\n\n");
                }
                else
                {
                    printf("Press 1 for regular shipping or 0 for overnight shipping. ");
                    scanf("%d",&i);
                    if(i==0)
                    {
                        ship+=10; //if overnight shipping...add 10$ to the shipping cost
                    }
                }
            }
        }
        if(count>1)   //total number of pieces must be 2 or more
        {
            if(sh_i)    //the following to print the receipt
            {
                printf("%d Shirt/s for %d$\n",sh_i,sh_price);
            }
            if(ts_i)
            {
                printf("%d T-shirt/s for %d$\n",ts_i,ts_price);
            }
            if(p_i)
            {
                printf("%d Pants for %d$\n",p_i,p_price);
            }
            if(d_i)
            {
                printf("%d Dress/s for %d$\n",d_i,d_price);
            }
            if(sk_i)
            {
                printf("%d Skirt/s for %d$\n",sk_i,sk_price);
            }
            if(sc_i)
            {
                printf("%d Scarf/s for %d$\n",sc_i,sc_price);
            }
            if(total>=1200)
            {
                ship+=40; //if the total cost>=1200 then shipping cost =40
            }
            else
            {
                ship+=30; //if the total cost<1200 then shipping cost =30
            }
            printf("Shipping fee = %d$\n",ship);

            total+=ship;

            if(count>5) //if total number of pieces is more than 5, apply the 20% discount 
            {
                printf("Before discount %d$\nAfter 20%% discount your total = %d$\n\n\n",total,(total*8/10));
            }
            else
            {
                printf("Total = %d$\n\n\n",total);
            }
        }
    }
    return 0;
}

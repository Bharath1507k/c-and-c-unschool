#include <stdio.h>
#include <stdlib.h>
struct bill
{
   char string[50];
};
int main()
{
    int num, i=0,items,code[50],size,quan,price=0,orderno=1000,or=0,order=0,ord[10];
    struct bill b[10];
    abc:
    printf("\t\t\t \nWelcome to Bharath's Cafe\nwhat would u like to do?\n1. Order\n2. serve\n3. display\n4. exit the program\n ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        {
            price=0;
            orderno++;
            order++;
            ord[order]=orderno;
            printf("\nEnter your name:");
            scanf("%s",&b[order].string);
            printf("**************************************** MENU ****************************************\n");
            printf("ITEM CODE   Description *********************** Size *********************** Price(rs)\n");
            printf("[1] ****** Burger **************************** 200/300 gms **************** 130/180\n");
            printf("[2] ****** Chicken Pizza ********************* 12/14/16 inch ************** 750/975/1250\n");
            printf("[3] ****** Fried chicken ********************* 1/4/10 pcs ***************** 85/320/790\n");
            printf("[4] ****** Grilled Chicken ******************* quarter/half/full ********** 70/140/250\n");
            printf("[5] ****** Noodles *************************** half/full ****************** 130/250\n");
            printf("[6] ****** Pasta ***************************** half/full ****************** 120/240\n");
            printf("[7] ****** Oreo Shake ************************ 250 ml ********************* 186\n");
            printf("[8] ****** Cold Coffee ************************ 250 ml ********************* 65\n");
            printf("[9] ****** Cappuccino ************************ 250 ml ********************* 70\n");
            printf("[10] ****** Coke ****************************** 250/500 ml ***************** 20/30\n");
            printf("\n How many Items do you want to Order?");
            scanf("%d",&items);
            if(items>=1)
            {
                for(i=1;i<=items;i++)
                {

                    if(i==1)
                    {
                        printf("\nenter Item code for the %dst Item you like to order:",i);
                        scanf("%d",&code[i]);
                        if(code[i]==1)
                        {
                            printf("\npress 1 for 200gms of burgur\npress 2 for 300gms of burger:");
                            scanf("%d",&size);
                            printf("\nhow many burgers you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*130);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*180);
                            }
                        }
                        if(code[i]==2)
                        {
                            printf("\npress 1 for 12inch of chicken pizza\npress 2 for 14inch of chicken pizza\npress 3 for 16 inch of chicken pizza:");
                            scanf("%d",&size);
                            printf("\nhow many chicken pizza you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*750);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*975);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*1250);
                            }
                        }
                         if(code[i]==3)
                        {
                            printf("\npress 1 for 1 piece of pried chicken\npress 2 for 4pieces of fried chicken\npress 3 for 10 pieces of fried chicken:");
                            scanf("%d",&size);
                            printf("\nhow many fried chicken plate you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*85);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*320);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*790);
                            }
                        }
                         if(code[i]==4)
                        {
                            printf("\npress 1 for quarter grilled chicken\npress 2 for half grilled chicken\npress 3 for full grilled chicken:");
                            scanf("%d",&size);
                            printf("\nhow many grilled chicken you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*70);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*140);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*250);
                            }
                        }
                         if(code[i]==5)
                        {
                            printf("\npress 1 for half plate of noodles\npress 2 for full plate of noodles:");
                            scanf("%d",&size);
                            printf("\nhow many plate of noodles you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*130);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*250);
                            }
                        }
                          if(code[i]==6)
                        {
                            printf("\npress 1 for half plate of pasta\npress 2 for full plate of pasta:");
                            scanf("%d",&size);
                            printf("\nhow many plate of pasta you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*120);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*240);
                            }
                        }
                        if(code[i]==7)
                        {
                            printf("\n250ml of Oreo Shake");
                            printf("\nhow many oreo sahke you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*180);
                        }
                        if(code[i]==8)
                        {
                            printf("\n250ml of cold coffee");
                            printf("\nhow many cold coffee you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*65);
                        }
                        if(code[i]==9)
                        {
                            printf("\n250ml of cappuccino");
                            printf("\nhow many cappuccino you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*70);
                        }
                          if(code[i]==10)
                        {
                            printf("\npress 1 for 250ml of coke\npress 2 for 500ml of coke:");
                            scanf("%d",&size);
                            printf("\nhow many coke you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*20);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*30);
                            }
                        }
                    }
                    else if (i==2)
                    {
                        printf("enter Item code for the %dnd Item you like to order:",i);
                        scanf("%d",&code[i]);
                         if(code[i]==1)
                        {
                            printf("\npress 1 for 200gms of burgur\npress 2 for 300gms of burger:");
                            scanf("%d",&size);
                            printf("\nhow many burgers you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*130);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*180);
                            }
                        }
                        if(code[i]==2)
                        {
                            printf("\npress 1 for 12inch of chicken pizza\npress 2 for 14inch of chicken pizza\npress 3 for 16 inch of chicken pizza:");
                            scanf("%d",&size);
                            printf("\nhow many chicken pizza you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*750);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*975);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*1250);
                            }
                        }
                         if(code[i]==3)
                        {
                            printf("\npress 1 for 1 piece of pried chicken\npress 2 for 4pieces of fried chicken\npress 3 for 10 pieces of fried chicken:");
                            scanf("%d",&size);
                            printf("\nhow many fried chicken plate you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*85);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*320);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*790);
                            }
                        }
                         if(code[i]==4)
                        {
                            printf("\npress 1 for quarter grilled chicken\npress 2 for half grilled chicken\npress 3 for full grilled chicken:");
                            scanf("%d",&size);
                            printf("\nhow many grilled chicken you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*70);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*140);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*250);
                            }
                        }
                         if(code[i]==5)
                        {
                            printf("\npress 1 for half plate of noodles\npress 2 for full plate of noodles:");
                            scanf("%d",&size);
                            printf("\nhow many plate of noodles you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*130);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*250);
                            }
                        }
                          if(code[i]==6)
                        {
                            printf("\npress 1 for half plate of pasta\npress 2 for full plate of pasta:");
                            scanf("%d",&size);
                            printf("\nhow many plate of pasta you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*120);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*240);
                            }
                        }
                        if(code[i]==7)
                        {
                            printf("\n250ml of Oreo Shake");
                            printf("\nhow many oreo sahke you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*180);
                        }
                        if(code[i]==8)
                        {
                            printf("\n250ml of cold coffee");
                            printf("\nhow many cold coffee you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*65);
                        }
                        if(code[i]==9)
                        {
                            printf("\n250ml of cappuccino");
                            printf("\nhow many cappuccino you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*70);
                        }
                          if(code[i]==10)
                        {
                            printf("\npress 1 for 250ml of coke\npress 2 for 500ml of coke:");
                            scanf("%d",&size);
                            printf("\nhow many coke you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*20);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*30);
                            }
                        }

                    }
                    else if(1==3)
                    {
                        printf("enter Item code for the %drd Item you like to order:",i);
                        scanf("%d",&code[i]);
                         if(code[i]==1)
                        {
                            printf("\npress 1 for 200gms of burgur\npress 2 for 300gms of burger:");
                            scanf("%d",&size);
                            printf("\nhow many burgers you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*130);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*180);
                            }
                        }
                        if(code[i]==2)
                        {
                            printf("\npress 1 for 12inch of chicken pizza\npress 2 for 14inch of chicken pizza\npress 3 for 16 inch of chicken pizza:");
                            scanf("%d",&size);
                            printf("\nhow many chicken pizza you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*750);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*975);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*1250);
                            }
                        }
                         if(code[i]==3)
                        {
                            printf("\npress 1 for 1 piece of pried chicken\npress 2 for 4pieces of fried chicken\npress 3 for 10 pieces of fried chicken:");
                            scanf("%d",&size);
                            printf("\nhow many fried chicken plate you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*85);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*320);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*790);
                            }
                        }
                         if(code[i]==4)
                        {
                            printf("\npress 1 for quarter grilled chicken\npress 2 for half grilled chicken\npress 3 for full grilled chicken:");
                            scanf("%d",&size);
                            printf("\nhow many grilled chicken you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*70);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*140);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*250);
                            }
                        }
                         if(code[i]==5)
                        {
                            printf("\npress 1 for half plate of noodles\npress 2 for full plate of noodles:");
                            scanf("%d",&size);
                            printf("\nhow many plate of noodles you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*130);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*250);
                            }
                        }
                          if(code[i]==6)
                        {
                            printf("\npress 1 for half plate of pasta\npress 2 for full plate of pasta:");
                            scanf("%d",&size);
                            printf("\nhow many plate of pasta you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*120);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*240);
                            }
                        }
                        if(code[i]==7)
                        {
                            printf("\n250ml of Oreo Shake");
                            printf("\nhow many oreo sahke you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*180);
                        }
                        if(code[i]==8)
                        {
                            printf("\n250ml of cold coffee");
                            printf("\nhow many cold coffee you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*65);
                        }
                        if(code[i]==9)
                        {
                            printf("\n250ml of cappuccino");
                            printf("\nhow many cappuccino you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*70);
                        }
                          if(code[i]==10)
                        {
                            printf("\npress 1 for 250ml of coke\npress 2 for 500ml of coke:");
                            scanf("%d",&size);
                            printf("\nhow many coke you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*20);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*30);
                            }
                        }
                    }
                    else
                    {
                        printf("enter Item code for the %dth Item you like to order:",i);
                        scanf("%d",&code[i]);
                         if(code[i]==1)
                        {
                            printf("\npress 1 for 200gms of burgur\npress 2 for 300gms of burger:");
                            scanf("%d",&size);
                            printf("\nhow many burgers you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*130);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*180);
                            }
                        }
                        if(code[i]==2)
                        {
                            printf("\npress 1 for 12inch of chicken pizza\npress 2 for 14inch of chicken pizza\npress 3 for 16 inch of chicken pizza:");
                            scanf("%d",&size);
                            printf("\nhow many chicken pizza you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*750);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*975);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*1250);
                            }
                        }
                         if(code[i]==3)
                        {
                            printf("\npress 1 for 1 piece of pried chicken\npress 2 for 4pieces of fried chicken\npress 3 for 10 pieces of fried chicken:");
                            scanf("%d",&size);
                            printf("\nhow many fried chicken plate you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*85);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*320);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*790);
                            }
                        }
                         if(code[i]==4)
                        {
                            printf("\npress 1 for quarter grilled chicken\npress 2 for half grilled chicken\npress 3 for full grilled chicken:");
                            scanf("%d",&size);
                            printf("\nhow many grilled chicken you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*70);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*140);
                            }
                            else if(size==3)
                            {
                                price=price+(quan*250);
                            }
                        }
                         if(code[i]==5)
                        {
                            printf("\npress 1 for half plate of noodles\npress 2 for full plate of noodles:");
                            scanf("%d",&size);
                            printf("\nhow many plate of noodles you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*130);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*250);
                            }
                        }
                          if(code[i]==6)
                        {
                            printf("\npress 1 for half plate of pasta\npress 2 for full plate of pasta:");
                            scanf("%d",&size);
                            printf("\nhow many plate of pasta you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*120);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*240);
                            }
                        }
                        if(code[i]==7)
                        {
                            printf("\n250ml of Oreo Shake");
                            printf("\nhow many oreo sahke you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*180);
                        }
                        if(code[i]==8)
                        {
                            printf("\n250ml of cold coffee");
                            printf("\nhow many cold coffee you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*65);
                        }
                        if(code[i]==9)
                        {
                            printf("\n250ml of cappuccino");
                            printf("\nhow many cappuccino you want to order?");
                            scanf("%d",&quan);
                            price=price+(quan*70);
                        }
                          if(code[i]==10)
                        {
                            printf("\npress 1 for 250ml of coke\npress 2 for 500ml of coke:");
                            scanf("%d",&size);
                            printf("\nhow many coke you want to order?");
                            scanf("%d",&quan);
                            if(size==1)
                            {
                                price=price+(quan*20);
                            }
                            else if(size==2)
                            {
                                price=price+(quan*30);
                            }
                        }
                    }
                }
            }
            printf("\nthank you %s for your order!\n your bill is %d",b[order].string,price);
            printf("\nplease wait while we prepare the food!!");
            goto abc;
        }
    case 2:
        {
            or++;
            printf("\nOrder.no %d by %s is ready!!!\nEnjoy your meal",ord[or],b[or].string);
            goto abc;
        }
    case 3:
        {
            printf("\nTotal order taken : %d",order);
            printf("\nTotal no. of order served : %d",or);
            printf("\nNo. of order waiting to be served : %d",(order-or));
            if(order==or)
            {
                printf("\nCurrently preparing food for order no. 0");
            }
            else
            {
                printf("\nCurrently preparing food for order no. %d",ord[(or+1)]);
            }
            goto abc;
        }
         case 4:
        {
            return 0;
        }
    default :
    {
        printf("\nenter the correct number!!!\n");
        goto abc;
    }
    }
}

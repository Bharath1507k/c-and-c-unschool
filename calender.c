#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    int press,date,month,year,mon[12]={31,28,31,30,31,30,31,31,30,31,30,31},total,i,j,sum=0,leap=0,day;;
    def:
    printf("press 0 : to know the day of a particular date \npress 1 : to get a calendar of a particular month of a year\n");
    scanf("%d",&press);
    switch(press)
    {
        case 0:
            {
                abc:
                mon[1]=28;
                printf("enter the date:");
                scanf("%d",&date);
                printf("enter the month:");
                scanf("%d",&month);
                printf("enter the year:");
                scanf("%d",&year);
                if(year%400==0 || (year%4==0 && year%100!=0))
                {
                    mon[1]=29;
                }
                if(date>31||month>12)
                {
                    printf("the entered date %d is not valid\n",date);
                    goto abc;
                }
                if((month==4||month==6||month==9||month==11) && day>30)
                {
                    printf("the month %d don't have more than 30 days",month);
                    goto abc;
                }
                if(month==2 && date>29)
                {
                    printf("february don't have more than 29 days\n");
                    goto abc;
                }
                if(mon[1]==28 && month==2 && date>28)
                {
                    printf("the entered year %d is not a leap year so the february don't have more than 28 days\n",year);
                    goto abc;
                }
                for(i=0;i<(month-1);i++)
                {
                    sum=sum+mon[i];
                }
                for(j=1;j<year;j++)
                {
                    if(j%400==0 || (j%4==0 && j%100!=0))
                    {
                        leap=leap+1;
                    }
                }
                total=sum+leap+date+((year-1)*365);
                day=total%7;
                printf("the day of the date(%d/%d/%d): ",date,month,year);
                switch(day)
                {
                case 0:
                {
                    printf("sunday");
                    break;
                }
                case 1:
                {
                    printf("monday");
                    break;
                }
                case 2:
                {
                    printf("tuesday");
                    break;
                }
                case 3:
                {
                    printf("wednesday");
                    break;
                }
                case 4:
                {
                    printf("thursday");
                    break;
                }
                case 5:
                {
                    printf("friday");
                    break;
                }
                case 6:
                {
                    printf("saturday");
                    break;
                }
                default :
                {
                    printf("error");
                    break;
                }
                }
                break;
            }
        case 1 :
            {
                ghi:
                printf("enter the month:");
                scanf("%d",&month);
                printf("enter the year:");
                scanf("%d",&year);
                if(month>12)
                {
                    printf("the month entered is not valid!\n");
                    goto ghi;
                }
                switch(month)
                {
                case 0:
                    {
                        break;
                    }
                case 1:
                    {
                        printf("\t\t\t******************** January ********************");
                        break;
                    }
                    case 2:
                    {
                        printf("\t\t\t******************** February ********************");
                        break;
                    }
                    case 3:
                    {
                        printf("\t\t\t******************** March ********************");
                        break;
                    }
                    case 4:
                    {
                        printf("\t\t\t******************** April ********************");
                        break;
                    }
                    case 5:
                    {
                        printf("\t\t\t******************** May ********************");
                        break;
                    }
                    case 6:
                    {
                        printf("\t\t\t******************** June ********************");
                        break;
                    }
                    case 7:
                    {
                        printf("\t\t\t******************** July ********************");
                        break;
                    }
                    case 8:
                    {
                        printf("\t\t\t******************** August ********************");
                        break;
                    }
                    case 9:
                    {
                        printf("\t\t\t******************** September ********************");
                        break;
                    }
                    case 10:
                    {
                        printf("\t\t\t******************** October ********************");
                        break;
                    }
                    case 11:
                    {
                        printf("\t\t\t******************** November ********************");
                        break;
                    }
                    case 12:
                    {
                        printf("\t\t\t******************** December ********************");
                        break;
                    }
                }
                printf("\n\t\t\tmon\ttues\twed\tthur\tfri\tsat\tsun\n");
                if(year%400==0 || (year%4==0 && year%100!=0))
                {
                    mon[1]=29;
                }
                for(i=0;i<(month-1);i++)
                {
                    sum=sum+mon[i];
                }
                for(j=1;j<year;j++)
                {
                    if(j%400==0 || (j%4==0 && j%100!=0))
                    {
                        leap=leap+1;
                    }
                }
                total=sum+leap+((year-1)*365);
                day=total%7;
                printf("\t\t");
                for(i=0;i<=day;i++)
                {
                    printf("\t");
                }
                for(j=0;j<mon[(month-1)];j++)
                {
                    printf("%d  \t",(j+1));
                    total++;
                    if(total%7==0)
                    {
                        printf("\n\t\t\t");
                    }
                }
                break;
            }
        default:
            {
                printf("enter the correct number!\n");
                goto def;
            }
    }
    return 0;
}

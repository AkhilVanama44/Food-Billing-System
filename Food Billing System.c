#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int c;
int c1;	
int c2;
int c3;
int c4;
int c5;
int c6;
int c7;
int c8;
int c9;
int c10;
int c11;
int c12;
int totalbill;
char s1[100];
char s2[100];
char s3[100];
char s4[100];
char s5[100];
char s6[100];
char s7[100];
char s8[100];
char s9[100];
char s10[100];
char s11[100];
char s12[100];
void tiffin()
{
    printf("\n\t\t\t\t The tiffin's available are:\n\t\t\t\t");
    printf("\n\t\t\t\t1.IDLI\n\t\t\t\t");
    printf("\n\t\t\t\t2.DOSA\n\t\t\t\t");
    printf("\n\t\t\t\t3.VADA\n\t\t\t\t");
    printf("\n\t\t\t\t4.PURI\n\t\t\t\t");
    printf("\n\t\t\t\t cost of 1 IDLI=30rs\n\t\t\t\t\n\t\t\t\t cost of 1   DOSA=30rs\n\t\t\t\t\n\t\t\t\t cost of 1 VADA=30\n\t\t\t\t\n\t\t\t\t cost of 1     PURI=40rs\n\t\t\t\t");
    int x;
    int n;
    printf("\n\t\t\t\t Enter your favorite tiffin:\n\t\t\t\t\n\t\t\t\t");
    scanf("\n\t\t\t\t%d",&x);
    switch(x)

    {
    case 1:
        printf("\n\t\t\t\t How many plates of IDLIES you want:\n\t\t\t\t");
        scanf("\n\t\t\t\t%d" ,&n);
        printf("\n\t\t\t\t The cost of total IDLIES is: %d\n\t\t\t\t",n*30);
        totalbill+=n*30;
        sprintf(s1,"The cost of %d IDLIES : %d" ,n,n*30);
        c1++;
        break;
    case 2:
        printf("\n\t\t\t\t How many plates of DOSA you want:\n\t\t\t\t");
        scanf("\n\t\t\t\t%d",&n);
        printf("\n\t\t\t\t The cost of total DOSA is :%d\n\t\t\t\t ",n*30);
        totalbill+=n*30;
        sprintf(s2,"The cost of %d DOSA: %d ",n,n*30);
        c2++;
        break;
    case 3:
    	printf("\n\t\t\t\t How many plates of VADA you want:\n\t\t\t\t");
        scanf("\n\t\t\t\t%d",&n);
        printf("\n\t\t\t\t The cost of total VADA is :%d\n\t\t\t\t ",n*30);
        totalbill+=n*30;
        sprintf(s3,"The cost of %d VADA: %d ",n,n*30);
        c3++;
        break;
    
    case 4:
        printf("\n\t\t\t\t How many plates of PURI you want:\n\t\t\t\t");
        scanf("\n\t\t\t\t%d",&n);
        printf("\n\t\t\t\t The cost of total PURI is :%d\n\t\t\t\t ",n*30);
        totalbill+=n*30;
        sprintf(s4,"The cost of %d PURI : %d ",n, n*30);
        c4++;
        break;
    }
}
void meals()
{
    printf("\n\t\t\t\t The available meals are:\n\t\t\t\t");
    printf("\n\t\t\t\t1.EGG FRIED RICE\n\t\t\t\t");
    printf("\n\t\t\t\t2.VEG FRIED RICE\n\t\t\t\t");
    printf("\n\t\t\t\t3.CHICKEN BIRYANI\n\t\t\t\t");
    printf("\n\t\t\t\t4.MUTTON BIRYANI\n\t\t\t\t");
    printf("\n\t\t\t\tcost of plate EGGFRIED RICE=100rs\n\t\t\t\t\n\t\t\t\tcost of plate VEGFRIED RICE=100rs\n\t\t\t\t\n\t\t\t\tcost of 1 plate CHICKEN BIRYANI=200rs\n\t\t\t\t\n\t\t\t\tcost of 1 MUTTON BIRYANI=300rs\n\t\t\t\t");
    int y;
    int b;
    printf("\n\t\t\t\t Enter your favorite Meals:\n\t\t\t\t");
    scanf("\n\t\t\t\t%d ",&y);
    switch(y)
    {
    case 1:
    
       	printf("\n\t\t\t\t How many plates of EGG FRIED RICE you want:\n\t\t\t\t");
        scanf("\n\t\t\t\t%d" ,&b);
        printf("\n\t\t\t\t The cost of total EGG FRIED RICE is: %d\n\t\t\t\t",b*100);
        totalbill+=b*100;
        sprintf(s5,"The cost of %d EGG FRIED RICE :%d" ,b,b*100);
        c5++;
        break;
    case 2:
        printf("\n\t\t\t\t How many plates of VEG FRIED RICE you want:\n\t\t\t\t");
        scanf("\n\t\t\t\t%d" ,&b);
        printf("\n\t\t\t\t The cost of total VEG FRIED RICE is:%d\n\t\t\t\t",b*100);
        totalbill+=b*100;
        sprintf(s6,"The cost of %d VEG FRIED RICE :%d" ,b,b*100);
        c6++;
        break;
    case 3:
        printf("\n\t\t\t\t How many plates of CHICKEN BIRYANI you want\n\t\t\t\t");
        scanf("\n\t\t\t\t%d" ,&b);
        printf("\n\t\t\t\t The cost of total plates of CHICKEN BIRYANI is: %d\n\t\t\t\t" ,b*200);
        totalbill+=b*200;
        sprintf(s7,"The cost of %d CHICKEN BRIYANI :%d" ,b,b*200);
        c7++;
        break;
    case 4:
        printf("\n\t\t\t\t How many plates of MUTTON BIRYANI  you want\n\t\t\t\t");
        scanf("\n\t\t\t\t%d ",&b);
        printf("\n\t\t\t\t The cost of total plates of MUTTON BIRYANI is: %d\n\t\t\t\t ",b*300);
        totalbill+=b*300;
        sprintf(s8,"The cost of %d MUTTON BIRYANI :%d" ,b,b*200);
        c8++;
        break;
    }

}
void softdrinks()
{
    printf("\n\t\t\t\t The available soft drinks are:\n\t\t\t\t");
    printf("\n\t\t\t\t1.pepsi\n\t\t\t\t");
    printf("\n\t\t\t\t2.7up\n\t\t\t\t");
    printf("\n\t\t\t\t3.sprite\n\t\t\t\t");
    printf("\n\t\t\t\t4.brothers juice\n\t\t\t\t");
    printf("\n\t\t\t\t cost of Pepsi=30rs\n\t\t\t\t\n\t\t\t\t cost of 7up = 30rs\n\t\t\t\t\n\t\t\t\t cost of   sprite=30\n\t\t\t\t\n\t\t\t\t cost of brothers juice=40rs\n\t\t\t\t");
    int z;
    int n;
    printf("\n\t\t\t\t Enter your favorite soft drink:\n\t\t\t\t");
    scanf("%d" ,&z);
    switch(z)
    {
    case 1:
        printf("\n\t\t\t\t How many Pepsi you want:\n\t\t\t\t");
        scanf("%d ",&n);
        printf("\n\t\t\t\t The cost of total Pepsi is:%d\n\t\t\t\t" ,n*30);
        totalbill+=n*30;
        sprintf(s9,"The cost of %d PEPSI :%d ",n,n*30);
        
        c9++;
        break;
    case 2:
        printf("\n\t\t\t\t How many 7up's you want:\n\t\t\t\t");
        scanf("%d" ,&n);
        printf("\n\t\t\t\t The cost of total 7up's is:%d\n\t\t\t\t",n*30);
        totalbill+=n*30;
        sprintf(s10,"The cost of %d 7up's :%d" ,n,n*30);
        c10++;
        break;
    case 3:
        printf("\n\t\t\t\t How many sprites you want:\n\t\t\t\t");
        scanf("%d" ,&n);

        printf("\n\t\t\t\t The cost of total sprites  is:%d\n\t\t\t\t",n*30);
        totalbill+=n*30;
        sprintf(s11,"The cost of %d sprites :%d" ,n,n*30);
        c11++;
        break;
    case 4:
        printf("\n\t\t\t\t How many brothers juice  you want:\n\t\t\t\t");
        scanf("%d" ,&n);

        printf("\n\t\t\t\t The cost of total brothers juices:%d\n\t\t\t\t",n*40);
        totalbill+=n*40;
        sprintf(s12,"The cost of %d brothers juice :%d",n,n*40);
        c12++;
        break;
    }
}

void main()
{
    int c;
       
        printf("\n\t|=======================================================================|");
        printf("\n\t|\t\t\tWELCOME TO RATNA HOTEL                          |");
        printf("\n\t|\t\t\tBILLLING MANAGEMENT SYSTEM                      |\n");
        printf(" \t|=======================================================================|\n");
    do
    {
        printf("\n\t\t\t\t1.TIFFINS\n\t\t\t\t");
        printf("\n\t\t\t\t2.MEALS\n\t\t\t\t");
        printf("\n\t\t\t\t3.SOFT DRINKS\n\t\t\t\t");
        printf("\n\t\t\t\t4.Exit");
        int w,y;
        printf("\n\t\t\t\tSelect your food items type:\n\t\t\t\t");
        scanf("\n\t\t\t\t%d" ,&w);
        switch(w)
        {
        case 1:
            tiffin();
            break;
        case 2:
            meals();
            break;
        case 3:
            softdrinks();
            break;
        case 4:
            exit(0);
            break;    
        default:
            printf("\n\t\t\t\t Invalid choice of food items\n\t\t\t\t");
        }

        printf("\n\t\t\t\t Do u want to order some more food items:\n\t\t\t\t");
        printf("1.Yes\n\t\t\t\t2. No\n\t\t\t\t");
        scanf("\n\t\t\t\t%d" ,&c);
    } while(c==1);
    if(c!=1)
    printf("\n\t\t\t\t**********************************\n\t\t\t\t");
    
    if(c1>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s1);
    }
    if(c2>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s2);
    }
    if(c3>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s3);
    }
    if(c4>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s4);
    }
    if(c5>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s5);
    }
    if(c6>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s6);
    }
    if(c7>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s7);
    }
    if(c8>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s8);
    }
    if(c9>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s9);
    }
    if(c10>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s10);

    }
    if(c11>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s11);
    }
    if(c12>0)
    {
    printf("\n\t\t\t\t %s\n\t\t\t\t",s12);
    }
    printf("\n\t\t\t\t==================================\n\t\t\t\t");
    printf("\n\t\t\t\t==================================\n\t\t\t\t");
    printf("total bill of food items: %d\n\t\t\t\t", totalbill);
    printf("\n\t\t\t\t==================================\n\t\t\t\t");
    printf("\n\t\t\t\t******PLEASE VISIT AGAIN***** \n\t\t\t\t");

}


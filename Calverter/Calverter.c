#include<stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
void Converter();
void Calculator();
void Currency();
void worldclock();
void AgeC();
void Analyser();
void BDTtoUSD(float x);
void BDTtoPound(float x);
void BDTtoEuro(float x);
void BDTtoINR(float x);
void BDTtoJYN(float x);
void USDtoBDT(float x);
void USDtoPound(float x);
void USDtoEuro(float x);
void USDtoINR(float x);
void USDtoJYN(float x);
void PoundtoBDT(float x);
void PoundtoUSD(float x);
void PoundtoEuro(float x);
void PoundtoINR(float x);
void PoundtoJYN(float x);
void EurotoBDT(float x);
void EurotoPound(float x);
void EurotoUSD(float x);
void EurotoINR(float x);
void EurotoJYN(float x);
void INRtoBDT(float x);
void INRtoPound(float x);
void INRtoUSD(float x);
void INRtoEuro(float x);
void INRtoJYN(float x);
void JYNtoBDT(float x);
void JYNtoPound(float x);
void JYNtoUSD(float x);
void JYNtoEuro(float x);
void JYNtoINR(float x);
void sortuplow(int a[10000], int n);
void sortlowup(int a[10000], int n);
void maxi(int a[10000], int n);
void mini(int a[10000], int n);
void sum(int a[10000], int n);
void avg(int a[10000], int n);
void prime(int a[10000], int n);
void evenodd(int a[10000], int n);
void BMI();
void main()
{
    int choice;
    system ("COLOR 3");
    printf("\n\n\t\t\t\t\t####### Welcome To Calverter #######\n\n\n\t\tHere you can:\n\n\n\t\t\t\t\t1.CONVERT\t\t2.CALCULATE\n\n\t\tEnter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        system("cls");
        Converter();
    case 2:
        system("cls");
        Calculator();
        break;
    default:
        printf("INVLAID CHOICE!!!");
    }

}
void Converter()
{
    int choice;
    printf("\n\n\t\t\t\t\t####### CONVERT #######\n\n\t\t\t1. Currency Convert\n\n\t\t\t2. Time Convert(world clock)\n\tEnter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        system("cls");
        Currency();
        break;
    case 2:
        system("cls");
        worldclock();
        break;
    default:
        printf("INVLAID CHOICE!!!");
    }
}
void Calculator()
{
    int choice;
    printf("\n\t1. Calculate your age\n\t2. Max-Min-Sum-Avg-Sort-EvenOdd-Prime\n\t3. Calculate your Body Mass Index(BMI)\nEnter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        system("cls");
        AgeC();
        break;
    case 2:
        system("cls");
        Analyser();
        break;
    case 3:
        BMI();
        break;
    default:
        printf("INVLAID CHOICE!!!");
    }
}
void Currency()
{
    int choice1, choice2, amount, n;
    printf("\n\n\n\t\t\t\t\t###### CURRENCY CONVERTER ######\n\n\t\t\tFrom Currency:\n\n\t\t1.Bangladeshi Taka\n\n\t\t2.United states Dollar\n\n\t\t3.British Pound\n\n\t\t4.Euro\n\n\t\t5.Indian Rupee\n\n\t\t6.Japaneese Yen\n\n\n\tEnter your choice:");
    scanf("%d", &choice1);
    if(choice1==1)
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\t#######CURRENCY CONVERTER #########\n\n\t\t\tTo Currency:\n\n\t\t1.United states Dollar\n\n\t\t2.British Pound\n\n\t\t3.Euro\n\n\t\t4.Indian Rupee\n\n\t\t5.Japaneese Yen\n\n\n\tEnter your choice:");
        scanf("%d", &choice2);
        printf("\n\n\t\t\tEnter the amount: ");
        scanf("%d", &amount);
        switch(choice2)
        {
        case 1:
            BDTtoUSD(amount);
            scanf("%d", &n);
            break;
        case 2:
            BDTtoPound(amount);
            scanf("%d", &n);
            break;
        case 3:
            BDTtoEuro(amount);
            scanf("%d", &n);
            break;
        case 4:
            BDTtoINR(amount);
            scanf("%d", &n);
            break;
        case 5:
            BDTtoJYN(amount);
            scanf("%d", &n);
            break;
        default:
            printf("INVLAID CHOICE!!!");
        }
    }
    if(choice1==2)
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\t#######CURRENCY CONVERTER #########\n\n\t\t\tTo Currency:\n\n\t\t1.Bangladeshi Taka\n\n\t\t2.British Pound\n\n\t\t3.Euro\n\t\t4.Indian Rupee\n\n\t\t5.Japaneese Yen\n\n\n\tEnter your choice:");
        scanf("%d", &choice2);
        printf("\n\n\t\t\tEnter the amount: ");
        scanf("%d", &amount);
        switch(choice2)
        {
        case 1:
            USDtoBDT(amount);
            scanf("%d", &n);
            break;
        case 2:
            USDtoPound(amount);
            scanf("%d", &n);
            break;
        case 3:
            USDtoEuro(amount);
            scanf("%d", &n);
            break;
        case 4:
            USDtoINR(amount);
            scanf("%d", &n);
            break;
        case 5:
            USDtoJYN(amount);
            scanf("%d", &n);
            break;
        default:
            printf("INVLAID CHOICE!!!");
        }

    }
    if(choice1==3)
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\t#######CURRENCY CONVERTER #########\n\n\t\t\tTo Currency:\n\n\t\t1.United states Dollar\n\n\t\t2.Bangladeshi taka\n\n\t\t3.Euro\n\n\t\t4.Indian Rupee\n\n\t\t5.Japaneese Yen\n\n\n\tEnter your choice:");
        scanf("%d", &choice2);
        printf("\n\n\t\t\tEnter the amount: ");
        scanf("%d", &amount);
        switch(choice2)
        {
        case 1:
            PoundtoUSD(amount);
            scanf("%d", &n);
            break;
        case 2:
            PoundtoBDT(amount);
            scanf("%d", &n);
            break;
        case 3:
            PoundtoEuro(amount);
            scanf("%d", &n);
            break;
        case 4:
            PoundtoINR(amount);
            scanf("%d", &n);
            break;
        case 5:
            PoundtoJYN(amount);
            scanf("%d", &n);
            break;
        default:
            printf("INVLAID CHOICE!!!");
        }

    }
    if(choice1==4)
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\t#######CURRENCY CONVERTER #########\n\n\t\t\tTo Currency:\n\n\t\t1.United states Dollar\n\n\t\t2.British Pound\n\n\t\t3.Bangladeshi Taka\n\n\t\t4.Indian Rupee\n\n\t\t5.Japaneese Yen\n\n\n\tEnter your choice:");
        scanf("%d", &choice2);
        printf("\n\n\t\t\tEnter the amount: ");
        scanf("%d", &amount);
        switch(choice2)
        {
        case 1:
            EurotoUSD(amount);
            scanf("%d", &n);
            break;
        case 2:
            EurotoPound(amount);
            scanf("%d", &n);
            break;
        case 3:
            EurotoBDT(amount);
            scanf("%d", &n);
            break;
        case 4:
            EurotoINR(amount);
            scanf("%d", &n);
            break;
        case 5:
            EurotoJYN(amount);
            scanf("%d", &n);
            break;
        default:
            printf("INVLAID CHOICE!!!");
        }
    }
    if(choice1==5)
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\t#######CURRENCY CONVERTER #########\n\n\t\t\tTo Currency:\n\n\t\t1.United states Dollar\n\n\t\t2.British Pound\n\n\t\t3.Euro\n\n\t\t4.Bangladeshi Taka\n\n\t\t5.Japaneese Yen\n\n\n\tEnter your choice:");
        scanf("%d", &choice2);
        printf("\n\n\t\t\tEnter the amount: ");
        scanf("%d", &amount);
        switch(choice2)
        {
        case 1:
            INRtoUSD(amount);
            scanf("%d", &n);
            break;
        case 2:
            INRtoPound(amount);
            scanf("%d", &n);
            break;
        case 3:
            INRtoEuro(amount);
            scanf("%d", &n);
            break;
        case 4:
            INRtoBDT(amount);
            scanf("%d", &n);
            break;
        case 5:
            INRtoJYN(amount);
            scanf("%d", &n);
            break;
        default:
            printf("INVLAID CHOICE!!!");
        }

    }
    if(choice1==6)
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\t#######CURRENCY CONVERTER #########\n\n\t\t\tTo Currency:\n\n\t\t1.United states Dollar\n\n\t\t2.British Pound\n\n\t\t3.Euro\n\n\t\t4.Indian Rupee\n\n\t\t5.Bangladeshi Taka\n\n\n\tEnter your choice:");
        scanf("%d", &choice2);
        printf("\n\n\t\t\tEnter the amount: ");
        scanf("%d", &amount);
        switch(choice2)
        {
        case 1:
            JYNtoUSD(amount);
            scanf("%d", &n);
            break;
        case 2:
            JYNtoPound(amount);
            scanf("%d", &n);
            break;
        case 3:
            JYNtoEuro(amount);
            scanf("%d", &n);
            break;
        case 4:
            JYNtoINR(amount);
            scanf("%d", &n);
            break;
        case 5:
            JYNtoBDT(amount);
            scanf("%d", &n);
            break;
        default:
            printf("INVLAID CHOICE!!!");
        }

    }


}
void AgeC()
{
    int y1, y2, m1, m2, d1, d2, d, m, y;
    printf("\n\n\t\tEnter your birthday Date:\n\tDay: ");
    scanf("%d", &d2);
    printf("\tMonth: ");
    scanf("%d", &m2);
    printf("\tYear: ");
    scanf("%d", &y2);
    printf("\n\n\t\tEnter Today's Date:\n\tDay: ");
    scanf("%d", &d1);
    printf("\tMonth: ");
    scanf("%d", &m1);
    printf("\tYear: ");
    scanf("%d", &y1);
    if(d2>d1)
    {
        if(m1==1)
        {
            d1=d1+31;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==2)
        {
            d1=d1+31;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==3)
        {
            d1=d1+28;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==4)
        {
            d1=d1+31;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==5)
        {
            d1=d1+30;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==6)
        {
            d1=d1+31;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==7)
        {
            d1=d1+30;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==8)
        {
            d1=d1+31;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==9)
        {
            d1=d1+31;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==10)
        {
            d1=d1+30;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==11)
        {
            d1=d1+31;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }
        if(m1==12)
        {
            d1=d1+30;
            d=d1-d2;
            m1--;
            if(m2>m1)
            {
                m1+=12;
                y1--;
                m=m1-m2;
                y=y1-y2;
            }
            else
            {
                m=m1-m2;
                y=y1-y2;
            }
        }

    }
    if(d1>=d2)
    {
        d=d1-d2;
        if(m2>m1)
        {
            m1+=12;
            y1--;
            m=m1-m2;
            y=y1-y2;
        }
        else
        {
            m=m1-m2;
            y=y1-y2;
        }
    }
    printf("\n\n\t\tYour age is: %d Year\t%d Month\t%d day", y, m, d);
}
void worldclock()
{
    int h, m, s=0, h1, h2, h3, h4, h6, h7, h8, h9, h5, h11, m1;
    printf("\n\n\tEnter the Current time of DHAKA CITY\n\t\tHour:");
    scanf("%d", &h);
    printf("\n\t\tMinute: ");
    scanf("%d", &m);
    h1=h+1;
    if(h1>24)
    {
        h1=h1-24;
    }
    h2=h+2;
    if(h2>24)
    {
        h2=h2-24;
    }
    h3=h+4;
    if(h3>24)
    {
        h3=h3-24;
    }
    h4=h+3;
    if(h4>24)
    {
        h4=h4-24;
    }
    h6=h-4;
    if(h6<0)
    {
        h6=24+h6;
    }
    h7=h-3;
    if(h7<0)
    {
        h7=h7+24;
    }
    h8=h-2;
    if(h8<0)
    {
        h8=24+h8;
    }
    h9=h-1;
    if(h9<0)
    {
        h9=24+h9;
    }
    h5=h-10;
    if(h5<0){
        h5=24+h5;
    }
    h11=h;
    m1=m-30;
    if(m1<0)
    {
        m1=m1+60;
        h11=h11-1;
        if(h11<0)
        {
            h11=h11+24;
        }
    }
    while(1)
    {
        system("cls");
        printf("Bangladesh Time:\t%02d : %02d : %02d ", h, m, s);
        printf("\n\nJakarta, Bangkok Time:\t%02d : %02d : %02d ", h1, m, s);
        printf("\n\nBeijing, Hongkong, Perth, Singapore, Manilla Time : \t%02d : %02d : %02d ", h2, m, s);
        printf("\n\nSydney, Melbourne, Canberra Time : \t%02d : %02d : %02d ", h3, m, s);
        printf("\n\nTokyo, Seoul, Darwin Time Time : \t%02d : %02d : %02d ", h4, m, s);
        printf("\n\nParis, Amsterdam, Berlin, Budapest, Rome Time: \t%02d : %02d : %02d ", h6, m, s);
        printf("\n\nCairo, Capetown, Madrid, Belgrade Time : \t%02d : %02d : %02d ", h6, m, s);
        printf("\n\nRiadh, Moscow, Doha, Ankara, Jerusalem Time: \t%02d : %02d : %02d ", h7, m, s);
        printf("\n\nDubai, Kabul, Tehran Time : \t%02d : %02d : %02d ", h8, m, s);
        printf("\n\nIslamabad, Karachi, Lahore Time : \t%02d : %02d : %02d ", h9, m, s);
        printf("\n\nNewyork, Washington DC Time : \t%02d : %02d : %02d ", h5, m, s);
        printf("\n\nNewdelhi, Kolkata, Mumbai, Chennai Time : \t%02d : %02d : %02d ", h11, m1, s);

        s++;
        if(s==60)
        {
            m++;
            m1+=1;
            s=0;
        }
        if(m==60){
            h+=1;
            m=0;
        }
        if(h==24){
            h=0;
            m=0;
            s=0;
        }
        if(h1==24){
            h1=0;
            m=0;
            s=0;
        }
        if(h2==24){
            h2=0;
            m=0;
            s=0;
        }
        if(h3==24){
            h3=0;
            m=0;
            s=0;
        }
        if(h4==24){
            h4=0;
            m=0;
            s=0;
        }
        if(h6==24){
            h6=0;
            m=0;
            s=0;
        }
        if(h7==24){
            h7=0;
            m=0;
            s=0;
        }
        if(h8==24){
            h8=0;
            m=0;
            s=0;
        }
        if(h9==24){
            h9=0;
            m=0;
            s=0;
        }
        if(h11==24){
            h11=0;
            m1=0;
            s=0;
        }
        if(h5==24){
            h5=0;
            s=0;
        }
        Sleep(1000);
    }
}
void Analyser()
{
    int N, choice, i, ar[10000];
    printf("\n\n\t\How many numbers do you want to analyse?\n\tEnter Here:");
    scanf("%d", &N);
    printf("Enter the numbers one by one:\n");
    for(i=0; i<N; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("\n\n\t\t1.Find Summation\n\t\t2.Find Maximum\n\t\t3.Find Minimum\n\t\t4.Find Average\n\t\t5.How many prime numbers?\n\t\t6.How many Even-Odd numbers?\n\t\t7.Sort your numbers\n\t\t8.All operations\n\n\tEnter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        system("cls");
        sum(ar, N);
        break;
    case 2:
        system("cls");
        maxi(ar, N);
        break;
    case 3:
        system("cls");
        mini(ar, N);
        break;
    case 4:
        system("cls");
        avg(ar, N);
        break;
    case 5:
        system("cls");
        prime(ar, N);
        break;
    case 6:
        system("cls");
        evenodd(ar, N);
        break;
    case 7:
        system("cls");
        sortlowup(ar, N);
        sortuplow(ar, N);
        break;
    case 8:
        system("cls");
        sum(ar, N);
        maxi(ar, N);
        mini(ar, N);
        avg(ar, N);
        prime(ar, N);
        evenodd(ar, N);
        sortlowup(ar, N);
        sortuplow(ar, N);
        break;
    default:
            printf("INVLAID CHOICE!!!");


    }

}
void maxi(int a[10000], int n)
{
    int i, max;
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nMaximum value= %d", max);
}
void mini(int a[100], int n)
{
    int i, min;
    min=a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("\nMinimum value= %d", min);
}
void sortuplow(int a[100], int n)
{
    int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n\n\higher to lower value:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}
void sortlowup(int a[100], int n)
{
    int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n\nlower to higher:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}
void sum(int a[10000], int n)
{
    int i, sum=0;
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
    printf("Summation of your numbers : %d", sum);
}
void avg(int a[10000], int n)
{
    int i, sum=0;
    float avg;
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
    avg=sum/i;
    printf("\n\tAverage of your numbers is : %f", avg);
}
void prime(int a[10000], int n)
{
    int i, j, c, p=0;
    printf("\n\tPrime numbers are:\n");
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=2; j<=(a[i]/2); j++)
        {
            if((a[i]%j)==0)
            {
                c++;
            }
        }
        if(c<=0)
        {
            printf("%d ", a[i]);
            p++;
        }
    }
    printf("\n\tTotal %d prime numbers are inputed", p);
}
void evenodd(int a[10000], int n)
{
    int i, j, c=0, p=0;
    printf("\n\tEven numbers are:\n");
    for(i=0; i<n; i++)
    {
        if((a[i]%2)==0)
        {
            c++;
            printf("%d ", a[i]);
        }
    }
    printf("\n\tTotal %d Even numbers are inputed", c);
    printf("\n\n\tOdd numbers are:\n");
    for(i=0; i<n; i++)
    {
        if((a[i]%2)!=0)
        {
            p++;
            printf("%d ", a[i]);
        }
    }
    printf("\n\tTotal %d ODD numbers are inputed", p);
}
void BMI()
{
    system ("cls");
    float feet, inch, meter, sqmeter, weight, index;
    printf("\n\t\t\t Body Mass Index:\n\n\t\tYour weight(in KG): ");
    scanf("%f", &weight);
    printf("\n\n\t\tYour height(in feet,inch):\n\tFeet: ");
    scanf("%f", &feet);
    printf("\tInch: ");
    scanf("%f", &inch);
    meter=(feet*12+inch)*0.0254;
    sqmeter=meter*meter;
    index=weight/sqmeter;
    printf("\n\n\tyour body mass index is %f", index);
    if(index<=18.5)
    {
        printf("\n\n\t You are in under-weight!!!!!\n\n");
    }
    if(index>18.5 && index<=24.999999)
    {
        printf("\n\n\t You are in normal-weight!!!!!\n\n");
    }
    if(index>25 && index<=29.999999)
    {
        printf("\n\n\t You are in over-weight!!!!\n\n!");
    }
    if(index>30)
    {
        printf("\n\n\t You are in obesity!!!!!\n\n");
    }

}


void BDTtoUSD(float x)
{
    float y;
    y=0.012*x;
    printf("\n\n\t\tAmount in Taka: %f\n\n\t\tAmount in US Dollar: %f", x, y);
}
void BDTtoPound(float x)
{
    float y;
    y=0.0092*x;
    printf("\n\n\t\tAmount in Taka: %f\n\n\t\tAmount in British Pound: %f", x, y);
}
void BDTtoEuro(float x)
{
    float y;
    y=0.01*x;
    printf("\n\n\t\tAmount in Taka: %f\n\n\t\tAmount in Euro: %f", x, y);
}
void BDTtoINR(float x)
{
    float y;
    y=0.85*x;
    printf("\n\n\t\tAmount in Bangladeshi Taka: %f\n\n\t\tAmount in INDIAN RUPEE: %f", x, y);
}
void BDTtoJYN(float x)
{
    float y;
    y=1.32*x;
    printf("\n\n\t\tAmount in Bangladeshi Taka: %f\n\n\t\tAmount in Japanese Yen: %f", x, y);
}
void USDtoBDT(float x)
{
    float y;
    y=83.84*x;
    printf("\n\n\t\tAmount in US Dollar: %f\n\n\t\tAmount in Bangladeshi Taka: %f", x, y);
}
void USDtoPound(float x)
{
    float y;
    y=0.77*x;
    printf("\n\n\t\tAmount in United States Dollar: %f\n\n\t\tAmount in US British Pound: %f", x, y);
}
void USDtoEuro(float x)
{
    float y;
    y=0.86*x;
    printf("\n\n\t\tAmount in US Dollar: %f\n\n\t\tAmount in US Euro: %f", x, y);
}
void USDtoINR(float x)
{
    float y;
    y=70.87*x;
    printf("\n\n\t\tAmount in US Dollar: %f\n\n\t\tAmount in Indian Rupee: %f", x, y);
}
void USDtoJYN(float x)
{
    float y;
    y=111.14*x;
    printf("\n\n\t\tAmount in US Dollar: %f\n\n\t\tAmount in Japanese Yen: %f", x, y);
}
void PoundtoBDT(float x)
{
    float y;
    y=108.67*x;
    printf("\n\n\t\tAmount in British Pound: %f\n\n\t\tAmount in Bangladeshi Taka: %f", x, y);
}
void PoundtoUSD(float x)
{
    float y;
    y=1.3*x;
    printf("\n\n\t\tAmount in British Pound: %f\n\n\t\tAmount in US Dollar: %f", x, y);
}
void PoundtoEuro(float x)
{
    float y;
    y=1.12*x;
    printf("\n\n\t\tAmount in British Pound: %f\n\n\t\tAmount in Euro: %f", x, y);
}
void PoundtoINR(float x)
{
    float y;
    y=91.86*x;
    printf("\n\n\t\tBritish Pound %f\n\n\t\tAmount in Indian Rupee: %f", x, y);
}
void PoundtoJYN(float x)
{
    float y;
    y=143.45*x;
    printf("\n\n\t\tAmount in British Pound: %f\n\n\t\tAmount in Japanese Yen: %f", x, y);
}
void EurotoBDT(float x)
{
    float y;
    y=97.44*x;
    printf("\n\n\t\tEuro: %f\n\n\t\tAmount in Bangladeshi Taka: %f", x, y);
}
void EurotoPound(float x)
{
    float y;
    y=0.9*x;
    printf("\n\n\t\tAmount in Euro: %f\n\n\t\tAmount in British Pound %f", x, y);
}
void EurotoUSD(float x)
{
    float y;
    y=1.16*x;
    printf("\n\n\t\tAmount in Euro: %f\n\n\t\tAmount in US Dollar: %f", x, y);
}
void EurotoINR(float x)
{
    float y;
    y=82.36*x;
    printf("\n\n\t\tAmount in Euro: %f\n\n\t\tAmount in Indian Rupee: %f", x, y);
}
void EurotoJYN(float x)
{
    float y;
    y=129.4*x;
    printf("\n\n\t\tAmount in Euro: %f\n\n\t\tAmount in Japanese Yen: %f", x, y);
}
void INRtoBDT(float x)
{
    float y;
    y=1.18*x;
    printf("\n\n\t\tAmount in INDIAN Rupee: %f\n\n\t\tAmount in Bangladehi Taka: %f", x, y);
}
void INRtoPound(float x)
{
    float y;
    y=0.011*x;
    printf("\n\n\t\tAmount in India Rupee: %f\n\n\t\tAmount in British Pound: %f", x, y);
}
void INRtoUSD(float x)
{
    float y;
    y=0.014*x;
    printf("\n\n\t\tAmount in Indian Rupee: %f\n\n\t\tAmount in US Dollar: %f", x, y);
}
void INRtoEuro(float x)
{
    float y;
    y=0.012*x;
    printf("\n\n\t\tAmount in Indian Rupee: %f\n\n\t\tAmount in Euro: %f", x, y);
}
void INRtoJYN(float x)
{
    float y;
    y=1.57*x;
    printf("\n\n\t\tAmount in Indian Rupee: %f\n\n\t\tAmount in US Japanese Yen: %f", x, y);
}
void JYNtoBDT(float x)
{
    float y;
    y=0.76*x;
    printf("\n\n\t\tAmount in Japanese Yen: %f\n\n\t\tAmount in Bangladeshi Taka: %f", x, y);
}
void JYNtoPound(float x)
{
    float y;
    y=0.007*x;
    printf("\n\n\t\tAmount in Japanese Yen: %f\n\n\t\tAmount in British Pound: %f", x, y);
}
void JYNtoUSD(float x)
{
    float y;
    y=0.009*x;
    printf("\n\n\t\tAmount in Japanese Yen: %f\n\n\t\tAmount in US Dollar: %f", x, y);
}
void JYNtoEuro(float x)
{
    float y;
    y=0.0077*x;
    printf("\n\n\t\tAmount in Japanese Yen: %f\n\n\t\tAmount in US Euro: %f", x, y);
}
void JYNtoINR(float x)
{
    float y;
    y=0.64*x;
    printf("\n\n\t\tAmount in Japanese Yen: %f\n\n\t\tAmount in Indian Rupee: %f", x, y);

}

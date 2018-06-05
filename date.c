#include <stdio.h>
#include <stdlib.h>
int leap(int n);
int monthday(int n,int j);
int monthdayless(int n,int j);

int leap(int n){
    if (n%400==0||(n%4==0&&n%100!=0)){
        return 1;
    }
    else {
        return 0;
    }
}

int monthday(int n,int j){
    int i;
    int total=0;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (i=0;i<n-1;i++){
        total+=a[i];
    }
    total+=j;
    return total;
}

int monthdayless(int n,int j){
    int i;
    int total=0,sum=365;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (i=0;i<n-1;i++){
        total+=a[i];
    }
    total+=j;
    sum-=total;
    return sum;
}

struct Date{
    int year;
    int month;
    int day;
};

int main(){
    int i;
    int n;
    int total=0,sum=0,rsum=0;
    struct Date date1;
    struct Date date2;
    printf("enter year: month: day (1): ");
    scanf("%d%d%d",&date1.year,&date1.month,&date1.day);
    printf("enter year: month: day (2): ");
    scanf("%d%d%d",&date2.year,&date2.month,&date2.day);
    if (date1.year>date2.year){
        if (date1.day-date2.day!=1) sum=1;
    }
    if (date2.year>date1.year){
        if (date2.day-date1.day!=0) sum=1;
    }
    if (date1.year>date2.year){
        if (date1.year-date2.year>1){
            for (i=date2.year;i<date1.year-1;i++){
                n=(leap(i))?366:365;
                total+=n;
            }
            if (leap(date2.year)&&date2.month>2){
                total-=1;
            }
            sum+=monthday(date1.month,date1.day)+monthdayless(date2.month,date2.day)+total;
        }
    }
    else {
        if (date2.year-date1.year>1){
            for (i=date1.year;i<date2.year-1;i++){
                n=(leap(i))?366:365;
                total+=n;
            }
            if (leap(date1.year)&&date1.month>2){
                total-=1;
            }
            sum+=monthday(date2.month,date2.day)+monthdayless(date1.month,date1.day)+total;
        }
    }
    printf("you have %d days not yet\n",sum);
    printf("Thank You for Your Service\n");
    return 0;
}

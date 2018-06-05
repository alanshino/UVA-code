#include <stdio.h>
#include <stdlib.h>
int leap(int year);
int daypass(int year,int month,int day);
int yearday(int year,int year1);

int leap(int year){
    if (year%400==0||(year%100!=0&&year%4==0)) return 1;
    else return 0;
}

int daypass(int year,int month,int day){
    int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    int total=0;
    for (i=0;i<month-1;i++){
        total+=month1[i];
    }
    year=leap(year);
    if (month>2) day=day+year;
    return day+total;
}

int yearday(int year,int year1){
    int i;
    int n=0;
    int totalday;
    for (i=year;i<=year1;i++){
        if (leap(i)) n++;
    }
    totalday=(year-year1)*365;
    return totalday+n;
}

int main(){
    int year,month,day;
    int year1,month1,day1;
    int totalday;
    printf("input year : month : day: ");
    scanf("%d %d %d",&year,&month,&day);
    if (year<0||month<0||day<0) return 0;
    printf("input year : month : day: (need smaller than you input one) : ");
    scanf("%d %d %d",&year1,&month1,&day1);
    if (year1<0||month1<0||day1<0) return 0;
    totalday=daypass(year,month,day)-daypass(year1,month1,day1)+yearday(year,year1);
    printf("the daypass are %d days",totalday);
    return 0;
}

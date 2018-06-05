#include <stdio.h>

int monthpass(int month,int day){
    int total=0;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i=0;i<month-1;i++){
        total+=a[i];
    }
    return total+day;
}


int yearpass(int year,int year1){
    if ((year1-year)<1) return 0;
    else return (year1-year)*365;
}

int leap(int year){
    if (year%400==0||year%4==0&&year%100!=0){
        return 1;
    }
    return 0;
}

int leap1(int year,int month){
    if (year%400==0||year%4==0&&year%100!=0){
        if (month<2)
        return 1;
    }
    return 0;
}

int leap2(int year,int month){
    if (year%400==0||year%4==0&&year%100!=0){
        if (month>2)
        return 1;
    }
    return 0;
}

int main(){
    int year,month,day,year1,month1,day1;
    int i=0;
    int n;
    int year2,month2,month3;
    printf("input Enlisted date:  year ?/ month ?/ day ?  ");
    scanf("%d %d %d",&year,&month,&day);
    printf("input Retired date:   year ?/ month ?/ day ?  ");
    scanf("%d %d %d",&year1,&month1,&day1);
    if (leap1(year,month)) i--;
    if (year1-year){
        if (leap2(year1,month1)) i++;
    }
    if (year1-year){
        for (n=year+1;n<=year1-1;n++){
            if (leap(n)) i++;
        }
    }
    year2=yearpass(year,year1);
    month2=monthpass(month,day);
    month3=monthpass(month1,day1);
    printf("you have %d days Not over yet\n",year2+month3-month2+i);
    printf("Thank You for Your Service");
    return 0;
}

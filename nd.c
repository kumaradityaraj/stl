#include <stdio.h>

int check(int day, int month){
    if((month == 4 || month == 6 || month == 4) && day == 31)
      return 1;
    else 
      return 0;
}

int isleap(int year){
    if((year % 4 == 0 && year % 100 != 0) || year %400 == 0)
      return 1;
    else
      return 0;
}

int main(){
    int day, month, year, tommo_day, tommo_month, tommo_year;
    char flag;
    do{
        flag = 'y';
        printf("\n Enter the date in dd mm yyyy format \n");
        scanf("%d%d%d", &day,&month,&year);
        tommo_month = month;
        tommo_year = year;
        tommo_day = day;
        if(day < 1 || day > 31){
            printf("Invalid day");
            flag = 'n';
        }
        if(month < 1 || month > 12){
            printf("Invalid month");
            flag = 'n';
        }else if(check(day, month)){
            printf("Day not in range");
            flag = 'n';
        }
        if(year < 1812 || year > 2012){
            printf("Year not in range");
            flag = 'n';
        }
        if(month == 2){
            if(isleap (year) && day > 29){
                printf("Invalid date");
                flag = 'n';
            }
            if(!isleap(year) && day > 28){
                printf("Invalid date");
                flag = 'n';
            }
        }
    }
    while(flag == 'n');
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10: 
                 if(day<31)
                   tommo_day++;
                 else{
                     tommo_day = 1;
                     tommo_month ++;
                 }
                 break;
        case 4:
        case 6:
        case 9:
        case 11:
                 if(day < 30)
                   tommo_day++;
                 else{
                     tommo_day = 1;
                     tommo_month++;
                 }
                 break;
        case 12: 
                  if(day < 31)
                    tommo_day++;
                  else{
                      tommo_day = 1;
                      tommo_month = 1;
                      if(year == 2012){
                          printf("Year out of range");
                          tommo_year++;
                      }else
                        tommo_year++;
                  }
                  break;
        case 2:
                 if(day < 28)
                   tommo_day ++;
                 else if(isleap(year) && day == 28)
                   tommo_day++;
                 else{
                     tommo_day=1;
                     tommo_month = 3;
                 }
                 break;
    }
    
    printf("Next date is %d%d%d", tommo_day, tommo_month, tommo_year);
}
#include <stdio.h>

void main(){
    int lock, stock, barrel, tlock, tstock, tbarrel;
    float lockprice, stockprice, barrelprice, locksale, stocksale, barrelsale, sale, comm;
    lockprice = 45.0;
    stockprice = 30.0;
    barrelprice = 25.0;
    tlock = 0;
    tstock = 0;
    tbarrel = 0;
    printf("Enter the number of lock and to exot press -1 \n");
    scanf("%d", &lock);
    while(lock != -1){
        printf("\n Enter the number of stock and barrel \n");
        scanf("%d%d", &stock, &barrel);
        tlock = tlock + lock;
        tstock = tstock + stock;
        tbarrel = tbarrel + barrel;
        printf("\n Enter the number of lock and to exit press -1 \n");
        scanf("%d", &lock);
    }
    printf("\n Total lock = %d", tlock);
    printf("\n Total stock = %d", tstock);
    printf("\n Total barrel = %d", tbarrel);
    locksale = tlock * lockprice;
    stocksale = tstock * stockprice;
    barrelsale = tbarrel * barrelprice;
    sale = locksale + stocksale + barrelsale;
    printf("\n Total sale = %f", sale);
    if(sale > 1800)
      comm = (0.10*1000) + (0.15*800) + 0.20*(sale-1800);
    else if(sale > 1000)
      comm = (0.10 * 1000) + (0.15 * 800) + 0.20*(sale-1800);
    else if(sale > 1000)
      comm = (0.10 * 1000) + 0.15*(sale-1000);
    else
      comm = 0.10*sale;
    printf("\n Commission = %f", comm);
}
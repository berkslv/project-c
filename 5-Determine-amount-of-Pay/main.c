#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

    if (argc < 2) {
        printf("Usage: %s <salary in hour>\n", argv[0]);
        return 1;
    }    

    int pay_per_hour = atoi(argv[1]);
    int pay_pey_week = pay_per_hour * 40;
    int pay_per_month = pay_pey_week * 4;
    int tax_rate;

    if (pay_per_month < 300) {

        tax_rate = 15;

    } else if (pay_per_month < 600) {

        tax_rate = 20;

    } else {

        tax_rate = 25;

    }

    int tax_amount = pay_per_month * tax_rate / 100;
    int net_pay = pay_per_month - tax_amount;

    printf("Tax amount: %d\n", tax_amount);
    printf("Salary with tax: %d\n", net_pay);
    printf("Salary without tax: %d\n", pay_per_month);


    return 0;
}
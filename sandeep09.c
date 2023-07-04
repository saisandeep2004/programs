#include <stdio.h>
main()
{
    float tb,tip,no_fri,each_one;
    tb=tip=no_fri=each_one=0;

    printf("Enter Total Bill Amount:");
    scanf("%f",&tb);

    printf("Enter the TIP:");
    scanf("%f",&tip);

    printf("Enter Total Number of Friends:");
    scanf("%f",&no_fri);

    each_one=((tb*(tip/100))+tb)/no_fri;
    printf("\n Each one have to pay Rs.%.2f/- \n",each_one);
}

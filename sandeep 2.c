// Program to calculate total and average from the give subjescts

#include <stdio.h>

main()
{
    int mat,phy,che,eng,san;
    float total,avg;

    mat=mat=phy=che=eng=san= mat=mat=phy=che=eng=san=total=avg=0;

    printf("Enter Marks For Maths 1 A (Max Marks:75)");
    scanf("%d",&mat);

    printf("Enter Marks For Maths 1 B (Max Marks:75)");
    scanf("%d",&mat);

    printf("Enter Marks For Physics (Max Marks:60)");
    scanf("%d",&phy);

    printf("Enter Marks For Chemistry (Max Marks:60)");
    scanf("%d",&che);

    printf("Enter Marks For English (Max Marks:100)");
    scanf("%d",&eng);

    printf("Enter Marks For Sanskrit (Max Marks:100)");
    scanf("%d",&san);

    printf("Enter Marks For Maths 2 A (Max Marks:75)");
    scanf("%d",&mat);

    printf("Enter Marks For Maths 2 B (Max Marks:75)");
    scanf("%d",&mat);

    printf("Enter Marks For Physics (Max Marks:60)");
    scanf("%d",&phy);

    printf("Enter Marks For Chemistry (Max Marks:60)");
    scanf("%d",&che);

    printf("Enter Marks For English (Max Marks:100)");
    scanf("%d",&eng);

    printf("Enter Marks For Sanskrit (Max Marks:100)");
    scanf("%d",&san);

    total= mat+mat+phy+che+eng+san+mat+mat+phy+che+eng+san;
    avg=total / 12;

    printf("\ntotal is : %0f",total);
    printf("\nAverage is : % 2f %%",avg);

}

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,iNo=0;
    printf("Enter The Number\n");
    scanf("%d",&iNo);

    for(i=1;i<=iNo;i++)
    {
        for(j=1;j<=iNo;j++)
        {
            if(i==1 || i==iNo/2+1 || i==iNo || j==1 && i<=iNo/2+1 || j==iNo && i>=iNo/2+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}

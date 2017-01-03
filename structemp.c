#include<stdio.h>
#include<stdlib.h>
void readinput(int);
void grosspay(int);
void deductions(int);
void netpay(int);
void writeoutput(int);
struct emp
{

    int eno;
    char ename[15];
    float bpay,ded,gp,th;
}e[25];
int main(void)
{
   struct emp e;
    int n,i;
    printf("Enter the number of employees: \n",n);
    scanf("%d",&n);
   //=(struct emp *)malloc(n*sizeof(struct emp));
    for(i=0;i<n;i++)
    {
        readinput(i);
    }
    printf("CalCULATING GP...");
    for(i=0;i<n;i++)
        grosspay(i);
    for(i=0;i<n;i++)
        deductions(i);
    for(i=0;i<n;i++)
        netpay(i);
    for(i=0;i<n;i++)
        writeoutput(i);
    return 0;
}
void readinput(int i)
{
    printf("Enter employee number\n");
    scanf("%d",&e[i].eno);
    printf("Enter employee name\n");
    scanf("  %s",e[i].ename);
    printf("Enter employee basicpay\n");
    scanf("%f",&e[i].bpay);
}
void writeoutput(int i)
{
    printf("\n");
    printf("Employee Number: %d",e[i].eno);
    printf("Employee Name: %s",e[i].ename);
    printf("Basic Pay: %f",e[i].bpay);
    printf("Gross Pay: %f",e[i].gp);
    printf("Arrears: %f",e[i].ded);
    printf("Net Pay: %f",e[i].th);
}
void grosspay(int i)
           {
                       e[i].gp=e[i].bpay + 0.1*e[i].bpay + 0.6*e[i].bpay + 0.125*e[i].bpay;

           }
void deductions(int i)
{
    e[i].ded= 0.1*e[i].bpay + 0.3*e[i].bpay + 0.4*e[i].bpay;
}
void netpay(int i)
{
    e[i].th=e[i].gp-e[i].ded;
}

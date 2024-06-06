/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int  nilai,hasil;

int factorial(int aNumber)
{
    if(aNumber<0){return 0;}
    if((aNumber==0)||(aNumber==1))
    {return 1;}
    else
    {return(aNumber*factorial(aNumber - 1));}
}

int main(){
    printf("masukan nilai yang akan dihitung:");
    scanf("%d",&nilai);
    hasil=factorial(nilai);
    printf("hasil faktorial adalah%d",hasil);

}

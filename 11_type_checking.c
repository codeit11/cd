#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,k,flag=0;
char vari[15],typ[15],b[15],c;
printf("Enter the number of variables:");
scanf(" %d",&n);
for(i=0;i<n;i++)
{
printf("Enter the variable[%d]:",i);
scanf(" %c",&vari[i]);
printf("Enter the variable-type[%d](float-f,int-i):",i);
scanf(" %c",&typ[i]);
if(typ[i]=='f')
flag=1;
}
printf("Enter the Expression(end with $):");
i=0;
getchar();
while((c=getchar())!='$')
{
b[i]=c;
i++; }
k=i;
for(i=0;i<k;i++)
{
if(b[i]=='/')
{
flag=1;
break; } }
for(i=0;i<n;i++)
{
if(b[0]==vari[i])
{
if(flag==1)
{
if(typ[i]=='f')
{ printf("\nthe datatype is correctly defined..!\n");
break; }
else
{ printf("Identifier %c must be a float type..!\n",vari[i]);
break; } }
else
{ printf("\nthe datatype is correctly defined..!\n");
break; } }
}
return 0;
}
// Input:
// Enter the number of variables:4
// Enter the variable[0]:A
// Enter the variable-type[0](float-f,int-i):i
// Enter the variable[1]:B
// Enter the variable-type[1](float-f,int-i):i
// Enter the variable[2]:C
// Enter the variable-type[2](float-f,int-i):f
// Enter the variable[3]:D
// Enter the variable-type[3](float-f,int-i):i
// Enter the Expression(end with $):A=B*C/D
// $
// Output:
// Identifier A must be a float type..!
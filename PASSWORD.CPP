/*
This program is created by : © shivanshusurya192@gmail.com
This program allows your password to be hidden so that no one will see what you've typed (as it happens in default C/C++ programs)
This is just to avoid shoulder surfing / can be implemented in other places
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://TC//bgi");
setbkcolor(4);
int j=0;
randomize();
int mynum=rand()%50;
char a,str1[100];
cout<<"\t\t\tGet Login First \n";
cout<<"enter your name\n";
gets(str1);
cout<<"enter your password\n";
for(int i=0;i<5;i++)

{
a=getch();
cout<<"*";
if(i==0)
{
if(a=='S')
j++;
}
if(i==1)
{
if(a=='h')
j++;
}
if(i==2)
{
if(a=='i')
j++;
}
if(i==3)
{
if(a=='V')
j++;
}
if(i==4)
{

if(a=='a')
j++;
}

}

if(j==5)
cout<<"\nWELCOME "<< str1<<" \nYou are having "<<mynum<<" messages inbox\n";
else
cout<<"\nsorry unable to recognize\n";


getch();
}

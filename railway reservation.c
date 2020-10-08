#include<stdio.h>
#include<conio.h>
#include<string.h>
int first=5,second=5,thired=5;
struct node
{
int age;
int ticketno;
char classofseat[7];
char name[100];
char dest[4];
}s;
void booking()
{
printf("enter your details");
printf("\nname:");
scanf("%s",s.name);
printf("age:");
scanf("%d",&s.age);
printf("destination:");
scanf("%s",s.dest);
printf("no of tickets: ");
scanf("%d",&s.ticketno);
printf("class of seat: ");
scanf("%s",s.classofseat);
}
void printticket(){
	if(availablecheck()){
		//printf("no seats");
	}
	else{
	
     printf("Name of passenger: %s\n",s.name);
	 printf(" Destination: %s\n",s.dest);
	 printf(" Class of seat: %s\n",s.classofseat);
	 printf(" No of tickets %d\n",s.ticketno);
	 int amount;
	 if((!strcmp(s.dest,"RAI"))&&s.age>10){
		if(!strcmp(s.classofseat,"first"))
		 amount=480*s.ticketno;
		else if(!strcmp(s.classofseat,"second"))
		 amount=240*s.ticketno;
		else
		 amount=120*s.ticketno;
	 } 
	 if((!strcmp(s.dest,"RAI"))&&s.age<10){
		if(!strcmp(s.classofseat,"first"))
		 amount=240*s.ticketno;
		else if(!strcmp(s.classofseat,"second"))
		 amount=120*s.ticketno;
		else
		 amount=60*s.ticketno;
	 }
	 if((!strcmp(s.dest,"MBR"))&&s.age>10){
		if(!strcmp(s.classofseat,"first"))
		 amount=240*s.ticketno;
		else if(!strcmp(s.classofseat,"second"))
		 amount=120*s.ticketno;
		else
		 amount=120*s.ticketno;
	 }
	 if((!strcmp(s.dest,"MBR"))&&s.age<10){
		if(!strcmp(s.classofseat,"first"))
		 amount=120*s.ticketno;
		else if(!strcmp(s.classofseat,"second"))
		 amount=60*s.ticketno;
		else
		 amount=30*s.ticketno;
	 }
	 
	printf("Total amount=%d\n",amount);
    }
	
}
int availablecheck()
{
int flag=0;
int l;
if(!strcmp(s.classofseat,"first"))
  l=1;
else if(!strcmp(s.classofseat,"second"))
  l=2;
else if(!strcmp(s.classofseat,"thired"))
  l=3;
else
  l=0;
switch(l)
{
case 1:if(first>0&&first>=s.ticketno)
     {
     //printf("seat available\n");
     first=first-s.ticketno;
     }
     else
     {
     printf("seat not available\n");
     flag=1;
     
     }
     break;
case 2:   if(second>0&&second>=s.ticketno)
     {
     //printf("seat available\n");
     second=second-s.ticketno;
     }
     else
     {
     printf("seat not available\n");
     flag=1;
     }
     break;
case 3:if(thired>0&&thired>=s.ticketno)
     {
     //printf("seat available\n");
     thired=thired-s.ticketno;
     }
     else
     {
     printf("seat not available\n");
     flag=1;
     
     }
     break;
default:
     break;
}
return flag;
}

int main()
{
printf("welcome to railway ticket reservation\n");
printf("TRAIN AVAILABLE:HYD-MBR-RAI\n");
int i;
for(i=0;i<15;i++){

booking();
printticket();
}
return 0;
}


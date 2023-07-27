#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>

void add();
void list();
void delete1();
void search();
void edit();
void circle();
void rectangle();
void rhoumbus();
void cylinder();
void parallelogram();
void trapezium();
void vcylinder();
void cone();
void sphere();
void cuboid();
void cube();
void square();
void si();
void ci();
void leap();
void greater();


void login()
{

	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="aayush";
    char pass[10]="aayush";
    do
{
	system("cls");

    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';

	i=0;

		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}



int main(){
	int i=0;

	time_t t;
	time(&t);
	char customername;
	char choice;

	system("cls");
 	                                                     printf("\t\t*********************************************\n");
                                                         printf("\t\t*                                           *\n");
	                                                     printf("\t\t*       ----------------------------        *\n");
                                                         printf("\t\t*                MATHS.COM                  *\n");
	                                                     printf("\t\t*       ----------------------------        *\n");
	                                                     printf("\t\t*                                           *\n");
	                                                     printf("\t\t*                                           *\n");
	                                                     printf("\t\t*                                           *\n");
	                                                     printf("\t\t*********************************************\n\n\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
	printf(" \n Press any key to continue:");

	getch();
    system("cls");
    login();
    system("cls");
	while (1)
	{
		system("cls");

        for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter A -> Addition ");
		printf("\n------------------------");
		printf(" \n Enter B -> Subtracting");
		printf("\n----------------------------------");
		printf(" \n Enter C ->Multiplication ");
		printf("\n-----------------------------------");
		printf(" \n Enter D -> dividing");
		printf("\n-----------------------------------");
		printf(" \n Enter E ->even or odd");
		printf("\n-----------------------------------");
		printf(" \n Enter F ->area of circle");
		printf("\n-----------------------------------");
		printf(" \n Enter G ->area of rectangle");
		printf("\n-----------------------------------");
		printf(" \n Enter H ->area of rhombus");
		printf("\n-----------------------------------");
		printf(" \n Enter I ->area of cylinder");
		printf("\n-----------------------------------");
		printf(" \n Enter J ->area of parallelogram");
		printf("\n-----------------------------------");
		printf(" \n Enter K ->area of trapezium");
		printf("\n-----------------------------------");
		printf(" \n Enter L ->volume of cylinder");
		printf("\n-----------------------------------");
		printf(" \n Enter M ->volume of cone");
		printf("\n-----------------------------------");
		printf(" \n Enter N->volume of sphere");
		printf("\n-----------------------------------");
		printf(" \n Enter O ->volume of cuboid ");
		printf("\n-----------------------------------");
		printf(" \n Enter P->volume of cube");
		printf("\n-----------------------------------");
		printf(" \n Enter Q->area of square");
		printf("\n-----------------------------------");
		printf(" \n Enter R->simple intrest");
		printf("\n-----------------------------------");
		printf(" \n Enter S ->compound intrest");
		printf("\n-----------------------------------");
		printf(" \n Enter T ->leap year");
		printf("\n-----------------------------------");
				printf(" \n Enter U ->greater");
		printf("\n-----------------------------------");
		
	
		printf(" \n Enter V-> Exit");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");

		choice=getche();
		choice=toupper(choice);
		switch(choice)           // SWITCH STATEMENT
		{
			case 'A':
				add();break;
			case 'B':
				list();break;
			case 'C':
				delete1();break;
			case 'D':	
		         search();break;
			case 'E':
				edit();break;
			case 'F':
				circle();break;
			case 'G':
			   rectangle();break;
			case 'H':
				rhoumbus();break;
			case 'I':
				cylinder();break;
			case 'J':
				parallelogram();break;
			case 'K':
			   trapezium();break;
			case 'L':
		    	vcylinder();break;
			case 'M':
			    cone();break;
			case 'N':
				sphere();break;
			case 'O':
				cuboid();break;
			case 'P':
				cube();break;
			case 'Q':
		     	square();break;
			case 'R':
				si();break;
			case 'S':
				ci();break;
			case 'T':
			   	leap();break;
			case 'U':
				greater();break;
			case 'V':
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
}

void add()
{
	
		
	    int a,b,c,i;
	    printf("\n enter two number\n");
	    scanf("%d%d",&a,&b);
	    c=a+b;
	    printf("the sum of a and b is %d",c);
	    printf("\n");
	for(i=0;i<118;i++)
		printf("-");
	 getch();



}

void list()
{
	int a,b,c,i;
	    printf("\nenter two number\n");
	    scanf("%d%d",&a,&b);
	    c=a-b;
	    printf("the difference of a and b is %d",c);
	
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	
	getch();
}

void delete1()
{
	int a,b,c,i;
	    printf("\nenter two number\n");
	    scanf("%d%d",&a,&b);
	    c=a*b;
	    printf("the multiplication of a and b is %d",c);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
	getch();
}

void search()
{

	int a,b,c,i;
	    printf("\nenter two number\n");
	    scanf("%d%d",&a,&b);
	    c=a/b;
	    printf("the dividend of a and b is %d",c);
	   printf("\n");
	for(i=0;i<118;i++)
		printf("-");
			getch();
}

void edit()
{
	FILE *f;
	

	int a,i;
	printf("\nenter any number\n:");
	scanf("%d",&a);
	if(a%2==0)
	   printf("number is even");
	else
	     printf("the number is odd");
		 
		 printf("\n");
	for(i=0;i<118;i++)
		printf("-");
		 getch();
}
void circle()
{
	
	int r,area,i;
     	float pi;
	pi=3.14;
	printf(" \n enter the value of radius:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("the area of circle is :%d\n",area);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
		getch();

}
		

void rectangle()
{

	int l,w,area,i;
	printf("\n enter the value of length and width:");
	scanf("%d%d",&l,&w);
	area=l*w;
	printf("the area of rect is :%d\n",area);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
		getch();
		
}
void rhoumbus()
{
	
	int area,p,q,i;
	printf("\n enter the value of p and q:\n");
	scanf("%d%d",&p,&q);
	area=(p*q)/2;
	printf("the area of rhombus is %d \n",area);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
		getch();
}
void cylinder()
{
	int r,h,area,i;
	float pi;
	pi=3.14;
	printf("\nenter the values of radius and height:");
	scanf("%d%d",&r,&h);
	area=pi*r*r*h;
	printf("the area of cylinder is :%d\n",area);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
		getch();
}
void parallelogram()
{
	int area,b,h,i;
	printf("\nenter the value of base and height:");
	scanf("%d %d",&b,&h);
	area=b*h;
	printf("the area of parallelogram is %d \n",area);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
		getch();
}
void trapezium()
{
	int area,a,b,h,i;
	printf("\nenter the value of a,b,h:");
	scanf("%d%d%d",&a,&b,&h);
	area=((a+b)/2)*h;
	printf("the area of trapezium is %d \n",area);
	printf("\n");
		for(i=0;i<118;i++)
		printf("-");
			getch();
}
void vcylinder()
{
	int r,h,i;
	float  volume,pi=3.14;
	printf("\nenter the value of radius  and height");
	scanf("%d%d",&r,&h);
	volume=pi*r*r*h;
	printf("the volume of cylinder is %f \n",volume);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
		getch();
		
}
void cone()
{
	int r,h,i;
	float volume, pi=3.14;
	printf("\nenter the value of radius and height:");
	scanf("%d%d",&r,&h);
	volume=(pi*r*r*h)/3;
	printf("the volume of cone is: %f \n",volume);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
		getch();
}
void sphere()
{
	int i,r;
	float volume, pi=3.14;
	printf("\n enter the value of radius :\n");
	scanf("%d",&r);
	volume= (4/3.0)*3.14*r*r*r;
	printf("the volume of sphere is %f :\n",volume);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
		getch();
}
void cuboid()
{
	int i,volume,h,w,l;
	printf("\n enter the value of length,width,height :");
	scanf("%d%d%d",&l,&w,&h);
	volume=l*w*h;
	printf("the volume of cuboid is %d : \n",volume);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
			getch();
}
void cube()
{
	int i,a,volume;
	printf("\n enter the value of edge:");
	scanf("%d",&a);
	volume=a*a*a;
	printf("the voume of cube is %d :\n",volume);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
			getch();
		
}
void square()
{
	int a,s,i;
 printf("\n enter a number\n");
 scanf("%d",&a);
 s=a*a;
 printf("The area of square is %d:\n",s);
 printf("\n");
	for(i=0;i<118;i++)
		printf("-");
			getch();
		
}
void si()
{
	int p,r,t,i;
	printf("\n enter the value of p,r,t:");
	scanf("%d%d%d",&p,&r,&t);
	i=p*r*t;
	printf("the simple intrest is :%d",i);
    printf("\n");
	for(i=0;i<118;i++)
			printf("-");
			getch();
}
void ci()
{
	float principle, rate, time, CI,i;
    printf("\n Enter principle (amount): ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);
    CI = principle* (pow((1 + rate / 100), time));
    printf("Compound Interest = %f", CI);
     printf("\n");
	for(i=0;i<118;i++)
			printf("-");
			getch();

}
void leap()
{
	int year,i;
   printf("\n Enter a year: ");
   scanf("%d", &year);

   
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
  
   
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
  
   else {
      printf("%d is not a leap year.", year);
   }
   printf("\n");
	for(i=0;i<118;i++);
			printf("-");
			getch();
			
   
}



void greater()
{
	int a,b,c,i;
	printf("\n enter the values of number a ,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c)
	          printf("a is greatest number");
	        if(b>=c&&b>=a)
	              printf("b is greatest number");
	        else
			printf("c is greatest number") ;
			printf("\n");
	for(i=0;i<118;i++);
			printf("-");
			getch();
			
}


/*
========================================= PREPROCESSORS AND MACROS ===========================
*/
/*1 What will be the output of the C program?
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");  
int main()
{
CONDITION(0);
return 0;
}
it is multiline macro.CONDTION(i)=print the line"" o/p=preprocessor works*/                       



/*2) What will be the output of the C program?*/
/*
#include<stdio.h>
#define TRUE 1
# define loop while(TRUE)
int main()
{   
    
	loop;  
	printf("preprocessor-aptitude");
	return 0;
}
*/
/*true undeclared here  but if we declare infinite while loop is o/p*/


/*3) What will be the output of the C program?*/
/*#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}*/
/*the --5 will  not occur as lvalue required*/




/*4) What will be the output of the C program ?*/
/*
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;    
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}*/
/*5*5=25   5-3 = 2 ++2*++2 = 4*4=16*/
/*


5) What will be the output of the C program?
*/
/*#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;
	printf("%d",i);
}*/
/*1+2+2+2=7*/





/*6) What will be the output of the C program?
#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}*/
/*num=6*/



/*7) What will be the output of the C program?
*//*#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	return 0;
}*/
/*3  as no fn call...macro exp 2*2-1*/
/*



8) What will be the output of the C program?

#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}__DATE__ predefined macro */
/*





9) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}__TIME__ predefined macro */
/*





10) What will be the output of the C program?
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );
	return 0;
}__TIME__ predefined macro */
/*





11) What will be the output of the C program?
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}you and me are great as #x,#y takes the content in()*/
/*






12) What will be the output of the C program?
#include<stdio.h>
# define puts " %s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}" %s C preprocessor"" %s C preprocessor" as two strings in printf*/
/*
13) What will be the output of the C program?
#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}macro25=47 #takes arg and ##takes value assigned*/
/*





14) What will be the output of the C program?
#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}reprocessor 13 as string printed from 2nd position*/






/*
15) What will be the output of the C program?
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i);
	return 0;
}no pre processor inside main i.e extended src code*/
/*





16) What will be the output of the C program?
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}50 as clrscr=50*/
/*





17) What will be the output of the C program?
#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%ld", sizeof (i));
}int defined as another data type char it will print 1 but not acceptable*/
/*






18) Write programs to understand the usage of below preprocessor directives.
#include, #if, #ifdef, #ifndef, #else, #elif, #endif, #define, #undef, #line, #error, and #pragma
*/

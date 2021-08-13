/*
===================================== TYPEDEF =========================================

typedef====>  typedef present_data_type new_data_type  
to create own data type user-defined



1) In the following code, the P2 is Integer Pointer or Integer?*/
typedef int *ptr;
ptr p1, p2;
/*integer pointer typedef int *ptr not assigned*/


2)  In the following code what is 'P'?
typedef char *charp;
const charp P;
/*constant character pointer*/


3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}
====>pointer array of 3 to a function pointer array of 10 of return char type





4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int); 

====> function pointer arra of size 3




5) What is pf in the below statement?
typedef int (*pf)(int);
====>function pointer of int val and int return...function pointer always return_type ptr viz. int/char/void etc.


6) What do the following declarations mean?
typedef char *pc;====>character ptr as datatype ex pc v => v is achar ptr.
typedef pc fpc();====>now fpc() is a function ptr of type char ptr...char return fpc pointer.
typedef fpc *pfpc;====>*pfpc pointing to fn ptr fpc
typedef pfpc fpfpc();====>pfpc holding a fn ptr fpfpc
typedef fpfpc *pfpfpc;/*i should learn concepts more,bit doubts*//*to do*/
pfpfpc a[N];

7) Write few programs using typedef on structures and enums.*//*to do*/
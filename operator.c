/*submitted by Akshay Hegde on Aug-10 2021 */



/*1*/ printf("1==5==5 = %d\n",1==5==5);/*0 as L to R....value of expression could be 0/1 like true/false*/
 
 
/*2*/int i =0;
   printf("%d %d",i,i++); /* 1 0 inc will not reflect in current i as  R to L pre.*/


 /*3*/ int x=5;
   printf("%d %d %d\n",x++,x++,x++);/*7 6   5 and will print 8 in NL if commanded*/


 /*4*/ int x=2;
   printf("%d   ",++x++);/*unary operator already bound lvalue error since R to L*/
   printf("%d\n",x++);
    return 0;

/*5*/ int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");/*right to left pre. checks k==1? */


/*6*/ int i=5;
   i=i++ - --i + ++i;/*i=(5-5+5)++=5++; so in NL i=6 asR to L unary ++ -- imply.. ++i=6 , --i=5 ,i++=5++ */
   printf("%d\n",i);/*6*/


/*7*/ int a=7;
   a+=a+=a-=6;/* a=7-6=1  a+=a 1+1  a=2 a+=a 2+2 a=4  R to L*/
   printf("%d\n",a);


/*8*/ int x=10,y=5,p,q;
   p=x>9;/*p=1*/
   q=p||(x=5,y=10);/*1 as 1|| ((y=10)=0) latest value at right , = is L to R*/
   printf("%d %d %d\n",q,x,y);/* 1 10 5*/



/*9*/int x=2,y=1;
   y+=x<<=2;/* x<<2 x=8 y+=x y=1+8=9  bitwise(L-R) is prior than assignment(R-L) op*/ 
   printf("%d %d\n",x,y);/*8     9*/


/*10*/ int x=2,y=4,z;
    z=y++*x++|y--;/* y*x=4*2=8  8|y=8|4 = ++12 ++13 --14 13  as post inc. in NL */
    printf("%d\n",z);



/*11*/ int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;/*c&&a=1 b=6&1=0 a=5&0=0 d=0*/ 
    printf("%d\n",d);
    

/*12*/ int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;/* 4 as 10<10 is flase */
    printf("%d\n",i);

/*13*/ int a=10,b=20;
    a=(a>5||b==6?40:50);/*(a>5)=1 (b==6)=0 1?40:50=40*/
    printf("%d\n",a);

/*14*/ printf("%x\n",-'a'>>4);/*0x0fffffff*/
    printf("%x\n",-1<<4);/*0xfffffff0*/


/*15*/ int x=7;
    x=(x<<=x%2);/* x<<(x%2) x<<1 = 14 */
    printf("%d\n",x);

/*16*/ int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));/*b>=a =1 1>=c = 1 so 1  */

/*17*/ int a=5;
    a=a-~a +1;
    printf("%d\n",a);/*~a=-6 a=5-(-6)+1=12*/


/*18*/ int a,b,c,d,x;
    a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);/*a=0,b=2,c=0 inc...dec..   0||2*2/2&&2*0   0||0&&0   x=0*/
    printf("%d\n",x);


/*19*/int a=10;
    int b = -5;
    int c = 2.5;
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b));/*size of a+ size of b= 4+4=8*/


/*20*/ int i=5;
    i=i++ - i;/* 5-6=-1 as i++ reflects in NL*/
    printf("%d",i);
}
















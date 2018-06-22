//####################
//# C_LONG - long form
#include <stdio.h>

#define MAX 10
#define max 100
void pntr(int *, int *);
void arr(int *);
int strln(char *);
void prtstr(char *);
void pstrcpy(char *, char *);
void astrcpy(char *, char *);
int main(int argc, char *argv[])
{
	int a=10, b=3, i=0, cnt, *c, *cc;
// ARGS #################################################### 
	while (--argc>0)
		{ printf("arg[%d] : %s\n", ++cnt, *(++argv)); }
	printf("\n");
// POINTER ################################################# 
	// exchange pointer for variable
	c = &b;
	cc = c;
	printf("a = %d\nb = %d\nc = %d\n", a, b, *cc);
	// change pointer to change variable
	*c += + 1;
	// get main-variable addr
	printf("   a addr = %p\n   b addr = %p\n   c addr = %p\n\n", &a, &b, &c);
	// change main-variable in fn 
	pntr(&a, &b);
	printf("a +1    = %d\nb +1 *2 = %d\n\n", a, b);
	// increment pointer 
	printf("\norig %d\n", *c);
	printf("++(*c) %d\n", ++(*c));
	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	// relational pointer pg 102 && pointer subtraction
// ARRAY ################################################### 
	int *e, z=0, q; 
	int d[MAX];
	while (z<MAX)
		{ d[z]= z*10; z++; }
	e = d; 
	printf("\ninc ptr   %d\n", *(e+5));
	// increment value
	printf("inc value (*e)+9 %d\n", (*e)+9);
	// increment pointer
	printf("inc pointer *(e+9) %d\n", *(e+9));
	// pass pointer // array to fn
	arr(d);
	printf("chk array change %d\n", *(d+3));
	// e[i] vs d[i] pg96
	printf("(pointer)e[1]=%d vs d[1]=%d\n", e[1], d[1]);
	int l, ll[MAX], getint(int *);
	// pointer strings
	char *j = "ducki&dicki";
	char *k = "fktheworldx";
	printf("j="); prtstr(j); printf("k="); prtstr(k);
	// string lengths
	printf("\nconstant           %d\n", strln("fk the world"));
	printf("ptr string         %d\n", strln(j));
	printf("partial ptr string %d\n", strln(j+4));
	// array[] replace strings dispite length
	char aa[] = "you a punk bitch muthrfkn trick";
	char bb[] = "fk ur wife bro";
	printf("bb: %s\n", bb);
	pstrcpy(bb, aa);
	printf("pstrcpy(bb, aa) bb: %s\n", bb);
	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	// pointer to array of int pg 112  
	// pointer-arrays 
	i=0;
	char *day[7] = {"mon","tues","wed","thur","fri","sat","sun"};
	prtstr(day[3]);
	printf("%c\n", day[3][2]);
	// multi-d array
	int list[3][5] = {
		{1,3,4,5,6},
		{11,13,14,15,16},
		{21,23,24,25,26}};
	printf("%d\b", list[2][3]);
// FUNCTION ################################################ 
	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	// pointer to fn_A passed to fn_B
	// array of fn (dispatch table)
	// return fn from fn
	// int *f() pg 122
	// int (*f)() pg 122
//########################################################## 
// bitwise
	i=0;
	// &
	i = i & 0177;
	printf("&: %b\n", i);
	// |
	i=0;
	i = i | SET_ON;
	// ^
	// <<
	// >>
	// ~
	i=0;
	i = i & ~077;
	// int bitcount(unsigned x) 
	// {
	// 	for (i=0; z!=0; x >>=1)
	// 	{
	// 		if (x & 01)
	// 			i++;
	// 	}
	// 	return i;
	// }
	// unsigned getbits(unsignedx, int p, int in0
	// {
	// 	return (x >> (p+1-n)) & ~(~0 << n);
	// }
//########################################################## 
//########################################################## 
//########################################################## 
//########################################################## 
//########################################################## 
//# BAD #################################################### 
// bad
// pop/push
// last element:     printf("LAST %d\n", d[-1]);	
//########################################################## 
	
	return 0;	
}
void pntr(int *x, int *y)
{ 
	*x+=1; *y*=2; 
// chk fn-variable addr
	printf("fn a addr = %p\nfn b addr = %p\n", x, y);
}
void arr(int *a)
{
	a[3] = 33;
	printf("\nfn array change  %d\n", *(a+3));
}
int strln(char *p)
{
	int n = 0;

	for (n=0; *p != '\0'; p++)
		n++;
	return n;
}
void pstrcpy(char *ts, char *tt)
{
	while ((*ts++ = *tt++))
		;
}
void prtstr(char *c)
{
	while(*(c) != '\0')
		{ printf("%c", *(c)); c++;}
	printf("\n");
}

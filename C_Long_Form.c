////////////////////////////////////////////////
// C_LONG_FORM of the village hidden in the 1337
#include <stdio.h>
#define MAX 10
void pntr(int *, int *);
void arr(int *);
int strln(char *);
void prtstr(char *);
int main()
{
	int a=10, b=3, i=0, *c;
	// main variable addr
	c=&b;
	printf("a_addr=%p %d\nb_addr=%p %d\nc_addr=%p %d\n\n", (void*)&a,a, (void*)&b,b, (void*)c, *c);
	// main variable changed in fn
	pntr(&a, &b);
	printf("a+=1 = %d\nb*=2 = %d\n\n", a, b);
	// pointer arithmetic
	*c+=4;
	printf("*c+=4 = %d\n++(*c) = %d\n", *c, ++(*c));
	// array
	int d[10], *e, z=0;
	char *f="ducki&dicki", *g="fktheworldz";
	// loop
	while (z<MAX)
		{ d[z]=z*10; z++; }
	e=d;
	printf("\n*(e+5) = %d\n", *(e+5));
	e+=9;
	printf("e+=9 = %d\n", *e);
	// array change in fn
	arr(d);
	printf("fn array change %d\n", *(d+3));
	// string
	printf("\nconstant %d\nptr string %d\nstrln(f+4) %d\n", strln("fkutoo"), strln(f), strln(f+4));
	// pointer-array
	i=0;
	char *day[]={"monday","tues","wednesday","thurs","friday","sat","7"};
	prtstr(day[2]);
	printf("%c\n", day[3][2]);
	//multi-d-array
	int list[3][5] = {
		{8,3,0,0,0},
		{0,1,3,3,7},
		{21,23,24,25,26}};
	printf("%d\n", list[2][3]);
	return 0;
}
void pntr(int *x, int *y)
{
	*x+=1; *y*=2;
	printf("fn_a_addr=%p\nfn_b_addr=%p\n", (void*)x, (void*)y);
}
void arr(int *a)
{
	a[3] = 33;
	printf("\nfn_arr_change=%d\n", *(a+3));
}
int strln(char *p)
{
	int n;
	// iterate
	for (n=0; *p!='\0'; p++)
		n++;
	return n;
}
void prtstr(char *c)
{
	while(*(c) != '\0')
		printf("%c", *(c++));
	printf("\n");
}

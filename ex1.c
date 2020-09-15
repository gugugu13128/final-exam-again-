#include<stdio.h>
main(){
    double a;
    double b;
    double c;
    printf("please input two numbers(divided by space)\n");
    scanf("%lf %lf",&a,&b);
    if(a>=b)
    {
    	c=(a-b)*(a-b);
	}else{
		c=(b-a)*(b-a);
	}
    printf("%.2lf\n",c);
}
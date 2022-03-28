#include<stdio.h>
#include<math.h>

int main(void){
	
	//I will use my discriminant value as D
	float a,b,c,D,x1,x2,x1_re,x2_re,x1_im,x2_im;
	
	printf("The program will allow you to find the real and imaginary roots of the given equation.\n\n");
	printf("Ax^2 + Bx + C = 0\n");
	printf("\nEnter coefficients A,B and C of the equation: \n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0){
		printf("The value of a can not be equal to zero. Try again: ");
		scanf("%f%f%f",&a,&b,&c);
	}
	
	
	D=(b*b)-4*a*c;
	//I will use %.0f expression to make the output look identical with the shown output at the lab pdf.
	printf("\nDiscriminant is %.0f",D);
	x1=(-b+sqrt(D))/(2*a);
	x2=(-b-sqrt(D))/(2*a);
	
	if(D>0){
		
		printf("\nThere are two real roots.");
		printf("\nx1=%.3f x2=%.3f",x1,x2);
	}
	
	else if(D==0){
		
		printf("\nThere are two real, identical roots.");
		printf("\nx1=x2=%.3f",x2);
	}
	
	else if(D<0){
		
		x1_re = x2_re = (-b)/(2*a);
		x1_im = sqrt(-D)/(2*a);
		x2_im = -sqrt(-D)/(2*a);
		printf("\nThere are no real roots.");
		printf("\nx1_re=%.3f x1_im=%.3f and\nx2_re=%.3f x2_im=%.3f ",x1_re,x1_im,x2_re,x2_im);
		
		
	}
	
	

	printf("\nProgram ended with exit code: 0");
	
	
	
	
	return 0;
}

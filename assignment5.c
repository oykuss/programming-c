#include <stdio.h>
#include <stdlib.h>

double f(int, int );
int x, y;

int main(void)
{
	
	float result;
	
	printf("Please enter an integer value(x):");
	scanf("%d", &x);
	
	printf("Please enter an integer value(y):");
	scanf("%d", &y);
	
	result = f(x, y);
	
	printf("f(x,y) : %f", result);
	
	return 0;
}

double f(int x, int y){
	if (y == 0)
        return 1;
    else if (y > 0)
		return x * f(x, y - 1);
	else if ( y < 0)
		return 1.0 / (x * f(x, abs(y) - 1)) ;
		
}

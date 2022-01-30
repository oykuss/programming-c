#include <math.h>
#include <stdio.h>
#include <stdlib.h>


double calcMedian( double Array[] );
double calcAverage( double Array[] );
double calcStdDeviation( double Array[] );
double calcVariance( double Array[] );

double doubleArray [] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9 };
double sum = 0;
int n = 17;


int main(void)
{	
	printf( "Average : %f \n", calcAverage( doubleArray ) );
	
	printf( "Median : %f \n", calcMedian( doubleArray) );
	
	printf( "Standard Deviation : %f \n", calcStdDeviation(doubleArray) );
	
	printf( "Variance : %f \n", calcVariance(doubleArray) );
}

double calcAverage( double doubleArray[] )
{
	double sum = 0 ;
	double ort = 0;
	for( size_t i = 0 ; i < 18; i ++ ){
		sum = sum + doubleArray[i];
	}
	return ort = sum / 18 ;
}

double calcStdDeviation( double doubleArray[] )
{
	double std = 0 ;
	
	for(size_t i=0; i<=n; i++){
		std = std + pow(doubleArray[i] - calcAverage(doubleArray ), 2);
	} 
	
	return sqrt(std/n);
}

double calcMedian( double doubleArray[] )
{
	double median = 0;
    median = (doubleArray[(n-1)/2] + doubleArray[(n+1)/2])/2 ;
    return median;
}

double calcVariance( double doubleArray[] )
{
	double variance = 0 ;
	double sumOfSquares = 0;
    for (size_t i = 0; i <= n; i++){
    	sumOfSquares += pow(doubleArray[i] - calcAverage(doubleArray ), 2);
    }
 
    return variance = sumOfSquares / (n+1) ;
}


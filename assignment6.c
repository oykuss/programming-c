#include <stdio.h>

 
int fibonacci(int n);
int counter = 0 ;

int main() {
 
	int x=0;
	
	printf("Kaçýncý elemanýn hesaplanacaðýný giriniz:");
	scanf("%d", &x);
    
	int y = fibonacci(x);
    printf("Serinin %d .’nci elemanýnýn deðeri: %d \n", x, y);
    
    printf("Serinin %d .’nci elemanýnýn hesaplanmasý için fonksiyon çaðrýlma sayýsý: %d ", x,counter);
    
    return 0;
    
}
 
int fibonacci(int n) {
	counter++;
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

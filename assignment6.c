#include <stdio.h>

 
int fibonacci(int n);
int counter = 0 ;

int main() {
 
	int x=0;
	
	printf("Ka��nc� eleman�n hesaplanaca��n� giriniz:");
	scanf("%d", &x);
    
	int y = fibonacci(x);
    printf("Serinin %d .�nci eleman�n�n de�eri: %d \n", x, y);
    
    printf("Serinin %d .�nci eleman�n�n hesaplanmas� i�in fonksiyon �a�r�lma say�s�: %d ", x,counter);
    
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

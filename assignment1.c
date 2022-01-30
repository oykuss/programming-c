#include <stdio.h>
#include <stdlib.h>


#define SIZEOFARRAY 101

int main(void)
{
	char charArray [ SIZEOFARRAY ] = { '\0' };
	char vowel [ ] = { 'a' , 'e', 'o', 'i', 'u', 'A', 'E', 'O', 'I', 'U' };
	char consonant [ ] = {  'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'r', 's', 't', 'v', 'y', 'z', 'w', 'q', 'x', 'B', 'C', 'D', 'F', 'G', 'H' , 'J', 'K', 'L', 'M', 'N', 'P', 'R','S', 'T', 'V', 'Y', 'Z', 'Q', 'W', 'X' };
	int counter1 = 0; // sesli harfler için sayaç
	int counter2 = 0; // sessiz harfler için sayaç
	
	printf( "Enter a word(no longer than 100 characters):" );
	gets( charArray );
	
	for( size_t i = 0; i < SIZEOFARRAY; i ++ ){
		for( size_t j = 0; j <10 ; j++ ){
			if(charArray [ i ] == ' ' || charArray [ i ] == '.' ||charArray [ i ] == ',' || charArray [ i ] == '?' ||charArray [ i ] == ':' || charArray [ i ] == ';' ||charArray [ i ] == '('|| charArray [ i ] == ')' ){
				continue;
			}
			if(charArray [ i ] == vowel [ j ] ){
				counter1 = counter1 + 1;
			}
		}
		for( size_t k = 0; k < 42 ; k++ ){
			if(charArray [ i ] == ' ' || charArray [ i ] == '.' ||charArray [ i ] == ',' || charArray [ i ] == '?' ||charArray [ i ] == ':' || charArray [ i ] == ';' ||charArray [ i ] == '('|| charArray [ i ] == ')'   ){
				continue;
			}
			if(charArray [ i ] == consonant [ k ] ){
				counter2 = counter2 + 1;
			}
		}
	}
	
	printf("Vowels : %d\nConsonant : %d ", counter1, counter2);
	return 0;
}

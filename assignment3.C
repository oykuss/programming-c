#include <stdio.h>

#include <string.h>



char charArray [] = "A computer is a machine that can be instructed to carry out sequences of arithmetic or logical operations automatically via computer programming.Modern computers have the ability to follow generalized sets of operations, called programs.These programs enable computers to perform an extremely wide range of tasks.A complete computer including the hardware, the operating system (main software), and peripheral equipment required and used for full operation can be referred to as a computer system.This term may as well be used for a group of computers that are connected and work together, in particular a computer network or computer cluster.Computers are used as control systems for a wide variety of industrial and consumer devices.This includes simple special purpose devices like microwave ovens and remote controls, factory devices such as industrial robots and computer-aided design, and also general purpose devices like personal computers and mobile devices such as smartphones.The Internet is run on computers and it connects hundreds of millions of other computers and their users.Early computers were only conceived as calculating devices.Since ancient times, simple manual devices like the abacus aided people in doing calculations.Early in the Industrial Revolution, some mechanical devices were builtto automate long tedious tasks, such as guiding patterns for looms.More sophisticated electrical machines did specialized analog calculations in the early 20th century.";



void lowercase(char array[] );
int isVowel(char c);
void assignVowelsAndConsonants(int vowels[], int consonants[], char text[]);



int main(void)

{

	int k = 97;

	int len = strlen( charArray );

	int maxVowel, maxConsonat = -1 ;

	char letter ;

	char character;

	char character2;

    // Ascii tablosunda 256 karakter vardir, daha fazla tutmamiza gerek yok.
	int vowel[256] = {};

	int consonat[256] = {};

	int counter = 0;

	lowercase( charArray );

	

	printf("Bu karakter dizisinde %d adet karakter var.\n", len);

	assignVowelsAndConsonants(vowel, consonat, charArray);
	
	while(k < 123) {

		if (maxVowel <= vowel[k]) {

			maxVowel = vowel[k];

			character = k;
		}

		k++;

	}

	printf("Dizide en çok %c sesli harfi %d tane vardýr.\n", character, vowel[character]);

	
    k = 97;
	while(k < 123) {

		if (maxConsonat <= consonat[k]) {

			maxConsonat = consonat[k];

			character2 = k;
		}

        k++;

	}

    printf("Dizide en çok %c sessiz harfi %d tane vardýr.\n", character2, consonat[character2]);



	printf("Dizide aramak istediðiniz bir harf giriniz:");

	scanf("%c", &letter);

	for( size_t i = 0; i < len; i ++ ){

		if( letter == charArray [i] )

			counter++;

	}

	printf("Girdiðiniz harften %d tane var.\n", counter);

	return 0;

}



void lowercase(char array[] ) {

	for (size_t i = 0; i< strlen( array ) && array[i] != '\0' && array[i] != ' ' && array[i] != '.' && array[i] != ','; i++) {

		if (array[i] >= 'A' && array[i] <= 'Z')

			array[i] = array[i] + 32;

	}

}

void assignVowelsAndConsonants(int vowels[], int consonants[], char text[]) {
    
    for (size_t j = 0; j < strlen(text); j++) {
	    
	    char c = text[j];
	    
	    if (isVowel(c)) {
	        
	        vowels[c]++;
	        
	    } else {
	        
			consonants[c]++;
			
		}
	}
}

int isVowel(char c) {
    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ) {
        return 1;
    }
    return 0;
}

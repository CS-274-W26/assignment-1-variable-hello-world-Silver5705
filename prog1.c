#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>
// TODO Other includes


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
	

	srand(time(NULL)); // resets the seed
	int myrand = rand() % 11; // random number from 0 to 10
	printf("%d\n", myrand); // Prints number to terminal

	// If statements
	if (myrand == 10) {
		printf("Larn is the best roguelike\n");
	} else if (myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	} else if (myrand >= 4 && myrand <= 9) {
		printf("FRODO LIVES\n");
	}
	
}

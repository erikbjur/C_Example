#include <stdio.h>

int main() {
    printf("Hello world\n");
    printf("Hit enter to count to 10" );
    //Wait for the user to hit a key
    getchar();

    //Now count to 10
    for(int i = 1; i < 10+1; i++) {
        printf("%i\n", i);
    }

}
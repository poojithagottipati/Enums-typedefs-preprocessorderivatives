#include <stdio.h>

#define DEBUG 
#undef DEBUG

int main() {
#ifdef DEBUG
    printf("Debugging is enabled.\n");
#endif

    printf("This is the main program.\n");

    return 0;
}
//output This is the main program.

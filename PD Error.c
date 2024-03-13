#include <stdio.h>

#define DEBUG_MODE  // Uncomment to enable debugging

#ifdef DEBUG_MODE
#error Debugging mode is enabled. Disable before compiling for production.
#endif

int main() {
    printf("Main program running...\n");
    return 0;
}
//#error Debugging mode is enabled. Disable before compiling for production.

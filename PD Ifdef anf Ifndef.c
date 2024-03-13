#include <stdio.h>

#define FEATURE_ENABLED  // Uncomment this line to enable the feature

int main() {
#ifdef FEATURE_ENABLED
    printf("Feature is enabled.\n");
#else
    printf("Feature is disabled.\n");
#endif

#ifndef MAX_VALUE
#define MAX_VALUE 100
#endif

    printf("Maximum value is: %d\n", MAX_VALUE);

    return 0;
}

//Feature is enabled.
//Maximum value is: 100

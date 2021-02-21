#include <stdio.h>
#include <inttypes.h>

void bin_print(unsigned int i) {
    // The number of bits in an integer
    int j = sizeof(unsigned int) * 8;

    // Temporary variables
    int k;

    // Loop over the number of bits in i from left to right
    for (j-- ; j >= 0; j--) {
        // Pick out the j^th bit of i.
        k = ((1 << j) & i) ? 1 : 0;
        // Print out k
        printf("%d", k);
    }
}


// Standard main signature.
int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;

    // Set i to a literal value
    unsigned int i = 0x0f0f0f0f;


    printf("Original:\t");
    // Print out i in binary
    bin_print(i);
    printf("\t%x\t%u\n\n", i, i);

    int j = sizeof(unsigned int) * 8;

    for (j--; j >= 0 ; j--) {
        // 1 shifted left j times
        bin_print(1 << j); printf("\n");
        bin_print(i); printf("\n");
        printf("-------------------------------- &\n");
        // (1 shifted left j times) bitwise logical and i
        bin_print((1 << j) & i); printf("\n\n");
    }

    return 0;
}
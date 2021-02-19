#include <stdio.h>
#include <stdint.h>

int64_t x = 0x1234F6789C011121LL;

void bin_print(int i) {
    // Temporary variables
    int k;

    // Number of bis in an integer.
    int j = sizeof(int) * 8;

    for (j-- ; j >= 0; j--) {
        k = ((1 << j) & i) ? 1 : 0;
        printf("%d", k);
    }
}



int main(int argc, char *argv[]) {
    int i = 0xf1;

    printf("Original:  ");
    bin_print(i);
    printf("\n");

    for (int j = 0; j < 40; j++) {
        printf("%3d << %2d: ", i, j);
        bin_print(i << j);
        printf("\n");
    }

    return 0;
}

void Ch(x, y, z){

}

void Maj(x, y, z){

}

void ROTL(x){

}

void ROTR(x){

}


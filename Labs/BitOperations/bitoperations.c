#include <stdio.h>
#include <inttypes.h>

int64_t x = 0x1234F6789C011121LL;

void bin_print(int i){
    // Temporary variables
    int k;

    // Number of bits in an integer.
    int j = sizeof(int) * 8;

    for (j-- ; j >= 0; j--) {
        k = ((1 << j) & i) ? 1 : 0;
        printf("%d", k);
    }
}

void bin_print64(int i){
    //Temporary variables
    int k;

    //Number of bits in a 64 bit number
    int j = sizeof(int64_t) * 8;

    for (j-- ; j >= 0; j--) {
        k = ((1 << j) & i) ? 1 : 0;
        printf("%d", k);
    }
}


int main(int argc, char *argv[]){
    int i = 0xf1;

    printf("Original:  ");
    bin_print(i);
    printf("\n");

    for (int j = 0; j < 40; j++) {
        printf("%3d << %2d: ", i, j);
        bin_print(i << j);
        printf("\n");
    }

    printf("\n");
    rotateLeft(10,x);
    printf("\n");
    rotateRight(20,x);

    return 0;
}

//https://www.geeksforgeeks.org/rotate-bits-of-an-integer/

int rotateLeft(int n, int64_t d){
    for(int i=0;i<=n;i++){    
        bin_print64((d << i)|(i >> (sizeof(d) * 8 - d))); 
        printf("\n");
    }
}

int rotateRight(int n, int64_t d){ 
    for(int i=0;i<=n;i++){    
        bin_print64((d >> i)|(i << (sizeof(d) * 8 - d))); 
        printf("\n");
    }
} 

void Ch(x,y,z){}
void Maj(x,y,z){}



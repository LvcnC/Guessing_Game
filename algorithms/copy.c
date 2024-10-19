#include <stdio.h>
#include <stdint.h>

// lets call 8 bits, 1 byte
typedef uint8_t BYTE;

int main(int argc, char *argv[]){

// create/open a file typed in the second command line
    // allow it to read every Bit
    FILE *src = fopen(argv[1], "rb");

// create/open a file typed in the third line of command
    // allow it to overwrite every Bit
    FILE *dst = fopen(argv[2], "wb");

    BYTE b;

// &b is where to put it
// it's the address of 'b' because it needs to be passsed by reference
    // sizeof: how big is a byte? you could say 1
        // 1: how many bytes at the time? just 1
            // src: from where i want to read it from
    while(fread(&b, sizeof(b), 1, src) != 0)  // as long as the byte doesnt stop
    {
// go find the byte you copied
    // it's this size: sizeof(b)
        // 1 byte at the time
            // copy it here, in dst
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(dst);
    fclose(src);

}
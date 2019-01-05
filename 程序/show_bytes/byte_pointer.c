#include <stdio.h>
typedef unsigned char* byte_pointer;
int main()
{
    short x = 123456;
    short mx = -x;
    void show_bytes(byte_pointer start, int len){
        printf("%d\n", start);
        printf("%d\n", len);
        int i;
        for(i = 0; i < len; i++){
            printf("%.2x\t", start[i]);
            printf("\n");
        }
    }
    show_bytes((byte_pointer) &x, sizeof(short));
    show_bytes((byte_pointer) &mx, sizeof(short));
}

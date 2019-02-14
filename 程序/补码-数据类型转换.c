#include <stdio.h>
typedef unsigned char *byte_pointer;

/*
void show_bytes(byte_pointer start, int len){
    printf("len = %d\n", len);
    int i;
    for (i = 0; i < len; i++){
        printf ("%.2x", start[i]);
    }
    printf("\n");
}
void show_int(int x){
    printf("======int\n");
    show_bytes((byte_pointer)&x, sizeof (int));
}
void show_float(float x){
    printf("======float\n");
    show_bytes((byte_pointer)&x, sizeof (float));
}
void show_pointer(void *x){
    printf("======pointer\n");
    show_bytes((byte_pointer)&x, sizeof (void *));
}
void test_show_bytes(int val){
    int ival = val;
    float fval = (float) val;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main(int argc, char const *argv[])
{
    int test = 12345;
    test_show_bytes(test);
}
*/

int main()
{

    void show_bytes(byte_pointer start, int len){
        //printf("%d\n", start);
        //printf("%d\n", len);
        int i;
        for(i = 0; i < len; i++){
            printf("%.2x", start[i]);
        }
        printf("\n");
    }


    short sx = -12345;
    unsigned short usx = sx;
    int x = sx;
    unsigned ux = usx;


    printf("sx = %d:\t\n", sx);
    show_bytes((byte_pointer) &sx, sizeof(short));

    printf("sx = %d:\t\n", usx);
    show_bytes((byte_pointer) &usx, sizeof(unsigned short));

    printf("sx = %d:\t\n", x);
    show_bytes((byte_pointer) &x, sizeof(int));

    printf("sx = %d:\t\n", ux);
    show_bytes((byte_pointer) &ux, sizeof(unsigned));


    /*
    short sx = -12345;
    unsigned uy = sx;
    printf("uy = %u:\t\n", uy);
    show_bytes((byte_pointer) &uy, sizeof(unsigned));
    */


}


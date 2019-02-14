#include <stdio.h>
typedef unsigned char *byte_pointer;

int main()
{
    /*
        位的扩展--0扩展与符号扩展
        移位
        十六进制与二进制的转换
    */
    int fun1(unsigned word){
        return (int) ((word << 24) >> 24);
    }
    int fun2(unsigned word){
        return ((int) word << 24) >> 24;
    }
    //unsigned word = 0x00000076;
    //unsigned word = 0x87654321;
    //unsigned word = 0x000000c9;
    unsigned word = 0xEDCBA987;

    printf("%.8x\n%.8x\n", fun1(word), fun2(word));

}


#include <stdio.h>

#define M 10

int main()
{
    /*
        ĳ��Ϸ�н�ս������ʵ���˺����㹫ʽΪ��
        ����ʵ������˺� = ��������˺� * (������� + 100) / 100
        ����������������������˺�256��Ҫ��������ҵ���������ӡ����ʵ������˺�
    */
    //1����Ҫ���弸�������� --����ʵ������˺�����ҵ���������������˺�
    //2����Ӧʲô���������أ�    double            int         double
    double factShangHai;      //����ʵ������˺�
    int strength;             //�������
    double maxShangHai = 256; //��������˺�

    printf("��������뵱ǰ��ɫ��������");
    //&ȡ��ַ
    scanf("%d", &strength);

    //���ù�ʽ
    factShangHai = maxShangHai * (strength + 100) / 100;
    printf("����ʵ������˺���%.2lf", factShangHai);

    return 0;
}


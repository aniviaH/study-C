#include <stdio.h>

#define M 10

int main()
{
    /*
        某游戏中近战武器的实际伤害计算公式为：
        武器实际最大伤害 = 武器最大伤害 * (玩家力量 + 100) / 100
        现有如下武器，武器最大伤害256，要求输入玩家的力量，打印武器实际最大伤害
    */
    //1、需要定义几个变量？ --武器实际最大伤害，玩家的力量，武器最大伤害
    //2、对应什么数据类型呢？    double            int         double
    double factShangHai;      //武器实际最大伤害
    int strength;             //玩家力量
    double maxShangHai = 256; //武器最大伤害

    printf("请玩家输入当前角色的力量：");
    //&取地址
    scanf("%d", &strength);

    //套用公式
    factShangHai = maxShangHai * (strength + 100) / 100;
    printf("武器实际最大伤害：%.2lf", factShangHai);

    return 0;
}


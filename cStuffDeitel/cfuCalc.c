#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int _SOP_CFU = 9;
    const int _Alg_CFU = 6;
    const int _Prog2_CFU = 9;

    float vSOP = 0;
    float vAlg = 0;
    float vProg2 = 0;
    float medium = 0;

    int _nEx = 0;
    int sel = 0;

    printf("N of Exams: \n");
    scanf("%d", &_nEx);

    while (sel != _nEx){
        printf("Input vSOP: (max 30) \n");
        scanf("%f" , &vSOP);
        if (vSOP > 30){
            printf("Value too high, try again: \n");
            vSOP = 0;
            scanf("%f" , &vSOP);
        }

        printf("Input vAlg: (max 30) \n");
        scanf("%f" , &vAlg);
        if (vAlg > 30){
            printf("Value too high, try again: \n");
            vAlg = 0;
            scanf("%f" , &vAlg);
        }

        printf("Input vProg2: (max 30) \n");
        scanf("%f" , &vProg2);
        if (vProg2 > 30){
            printf("Value too high, try again: \n");
            vProg2 = 0;
            scanf("%f" , &vProg2);
        }

        medium = ((vSOP * _SOP_CFU)+(vAlg * _Alg_CFU)+(vProg2 * _Prog2_CFU)) / (_SOP_CFU+_Alg_CFU+_Prog2_CFU);

        printf("Medium is: %f\n" , medium);
        if (medium > 18.0){
            printf("You're alright!\n");
        }
        else {
            printf("Bho-ho");
        }

        sel++;
    }
    return 0;
}

#include <math.h>

double test()
{
    return 1. / 3. + 1. / 3.;
}

int test2()
{
    int iARSrc = 80;
    int iERSrc = 90;
    float fAR = ((float)iARSrc + 210.0f) / 300.0f;
    float fER = ((float)(iERSrc * 2 + 5) / (iERSrc + 95)) * 3.0f / 10.0f;
    float AttackRating = fAR - fER;
    int iAtk = 1317;
    iAtk = (int)(iAtk * AttackRating);

    return iAtk;
}

float test3() {
    return 0.7f * 270;
}

float test4() {
    return 0.7f * 330;
}

float test5() {
    return floor(1.6);
}
#include <iostream>

int main()
{
    int x1[4];
    char x2[4];
    float x3[4];
    double x4[4];

    for(int i=1; i<5 ; i++){
        std::cout << "X1 + "<< i <<" = " << x1+i <<std::endl;
    }

    for(int i=1; i<5 ; i++){
        std::cout << "X2 + "<< i <<" = " << x2+i <<std::endl;
    }

    for(int i=1; i<5 ; i++){
        std::cout << "X3 + "<< i <<" = " << x3+i <<std::endl;
    }
    
    for(int i=1; i<5 ; i++){
        std::cout << "X4 + "<< i <<" = " << x4+i <<std::endl;
    }

    return 0;
}
/*
X1 + 4 = 0x61ff00
X2 + 1 =  a
X2 + 2 = a
X2 + 3 =
X2 + 4 = pßRwå[í■   a
X3 + 1 = 0x61fee0
X3 + 2 = 0x61fee4
X3 + 3 = 0x61fee8
X3 + 4 = 0x61feec
X4 + 1 = 0x61fec0
X4 + 2 = 0x61fec8
X4 + 3 = 0x61fed0
X4 + 4 = 0x61fed8

*/
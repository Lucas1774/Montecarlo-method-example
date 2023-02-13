#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <ctime>

using namespace std;

#define N 50000
const int Pa = 70;
const int Pb = 80;
const int Pc = 85;
const int Pd = 85;

bool isclosed (int Px){
        if ((rand() % 100) +1 <= Px){
        return true;
    } else {
        return false;
    }
}

int main(){
    bool a, b, c, d;
    double numberisclosed=0;
    double Pisclosed;

    srand(time(NULL));
    for(int i=0; i<N; i++){
        a = isclosed (Pa);
        b = isclosed (Pb);
        c = isclosed (Pc);
        d = isclosed (Pd);
        if(a || b || (c && d)){
            numberisclosed++;
        }   
    }
    Pisclosed=numberisclosed/N;
    cout << "N = " << N << "\n";
    cout << "P(c) = " << Pisclosed;
}
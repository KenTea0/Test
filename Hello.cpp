#include <iostream>
using namespace std;

double func(double x){
    return x*x;
}

double numericDiff(double (*f)(double), double x, double eps=0.001){
    return (f(x + eps) - f(x)) / eps;
}

int main(){
    double (*pfunc)(double);
    pfunc = func;
    cout<<numericDiff(pfunc,2);
}
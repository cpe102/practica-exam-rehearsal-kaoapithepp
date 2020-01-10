#include <iostream>
#include <cmath>

using namespace std;

float sumSqrt(float N) {
    float sum,R=1,zero=0,ans=0;
    while (R <= N){
        sum = 1/pow(R,0.5);
        ans = ans + sum;
        R++;
    }
    
    if (N > 0){
        return ans; 
    } else {
        return zero;
    }
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}

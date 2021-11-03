/* 
    Estimate pi, given that you have random (0,1)
*/

#include <iostream>
#include <random>
#include <math.h>

using namespace std;

double fRand(double fMin, double fMax){
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

double estimate_pi(int n){
    int num_point_circle = 0;
    int num_point_square = 0;
    for(int i = 0;i < n;++i){
        double x = fRand(0,1);
        double y = fRand(0,1);
        double distance = x*x + y*x;
        distance = sqrt(distance);
        if (distance <= 1){
            num_point_circle += 1;
        }
        num_point_square += 1;
    }
    return 4 * num_point_circle/num_point_square;
}

int main(){
    int n;
    cin>>n;
    cout<<estimate_pi(n);
    return 0;
}
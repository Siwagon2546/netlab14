#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);
    

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[] ,int N,double B[]){
    double sumsq = 0,sumre = 0,max = A[0],min = A[0],C=1;
    for(int i = 0;i<N;i++){
        B[0]+=(A[i]/N);
        if(max<=A[i]){
            max = A[i];
        }
        else if(min>=A[i]){
            min = A[i];
        }
    }
    for(int i = 0;i<N;i++){
        C *=A[i];
        sumre+=pow(A[i],-1);
        sumsq+=pow((A[i]-B[0]),2);
    }
    B[1]=sqrt(sumsq/N);
    B[2]=pow(C,1.00/N);
    B[3]=N/sumre;


    B[4]=max;
    B[5]=min;
    
    
    }

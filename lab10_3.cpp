#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    int i = 0 ;
    double sum = 0, sum2 = 0 ;
    string textline;
    while(getline(source, textline)){
        double x = stod(textline);
        sum = sum + x ;
        sum2 = sum2 + (x * x) ; 
        i++ ;
    }
    double mean = sum / i ;
    source.close();

    cout << "Number of data = " << i << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << sqrt((sum2/i)-(mean * mean));
}
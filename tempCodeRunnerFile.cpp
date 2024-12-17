#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main (){
int count = 0 ;
float sum = 0 , sum2 = 0;
string textline ;
ifstream source("score.txt") ;
source.open("score.txt") ;
    while(getline(source , textline)){
    sum += atof(textline.c_str()) ;
    sum2 += pow(atof(textline.c_str()) , 2 ) ;
    count++ ;
    }
    cout << "Number of data = " << count << endl ;
    cout << "Mean = " << sum/count << endl ;
    cout << "Standard deviation = " << sum2/count  << endl ;
    source.close() ;
}
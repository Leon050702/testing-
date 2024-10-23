#include <iostream>
using namespace std ;
#include <iomanip>

int BMI (double kg ,double m){

    double bmi = (kg)/(m*m);
    return bmi ;

};

int main (){

    double kg,m ;
    cout <<"Enter your weight in kg:";
    cin >> kg ;
    cout <<"enter your height in m :";
    cin >> m;
    double bmi = (kg/(m*m));
    cout <<"Your BMI index is " <<fixed<< setprecision(2) <<bmi;


system ("pause");

    return 0;
}
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;


void euler(float delta, string nombre);


int main(){
    
    string nombre="14.dat";
    euler(0.01, nombre);
    return 0;
}

void euler(float delta, string nombre){
    ofstream outfile;
    outfile.open(nombre);
    float yn=1.0;
    float x=1.0;
    float k=10.0;
double m=2.0;

    for(float tini=0.0; tini<=10.0; tini+= delta){
        x-=delta*k/m*x;
        yn=yn + (delta * yn);
        outfile<<tini<<" "<<yn<<" "<<x<<std::endl;
    }
    outfile.close();
}
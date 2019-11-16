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
    float v=0.0;
    float x=1.0;
    float k=50.0;
    double m=2.0;

    for(float tini=0.0; tini<17; tini += delta){
        
        double xn = x;
        double vn = v;
        
        x = x + delta *vn;
        v = v - (delta * (k/m) * xn);
        outfile<<tini<<" "<<x<<" "<<v<<std::endl;
    }
    outfile.close();
}


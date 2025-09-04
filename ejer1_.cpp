#include<iostream>
using namespace std;

class Punto{
    private: 
    int x,y;
    public:
    Punto();
    void setPunto(int,int);
    int getPuntoX();
    int getPuntoY();
};

Punto::Punto(){
}

void Punto::setPunto(int _x,int _y){
    x =_x;
    y =_y;
}
int Punto::getPuntoX(){
    return x;
}
int Punto::getPuntoY(){
    return y;
}
int main(){
    Punto puntoa;
    puntoa.setPunto(89,1234);
    cout<<puntoa.getPuntoX()<<endl;
    cout<<puntoa.getPuntoY()<<endl;
    
return 0;
}
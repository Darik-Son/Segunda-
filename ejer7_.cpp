#include<iostream>
using namespace std;

class Estudiante{
    private:
    string nombre,codigo;
    int AI;
    public:
    string getNombre(){
        return nombre;
    }
    void setNombre(string nom){
        nombre = nom;
    }

    string getCodigo(){
        return codigo;
    }

    void setCodigo(string cod){
        codigo = cod;
    }

    int getAI(){
        return AI;
    }

    void setAI( int ai){
        AI = ai;
    }

};
int main(){
    Estudiante e;

    e.setNombre("Juan");
    e.setCodigo("123456");
    e.setAI(2024);

    cout<<"Nombre: "<<e.getNombre()<<endl;
    cout<<"Codigo: "<<e.getCodigo()<<endl;
    cout<<"Anio de ingreso: "<<e.getAI()<<endl;

return 0;
}
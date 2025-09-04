#include<iostream>
using namespace std;

class Persona{
    public: 
    Persona(const string &nom){
        nombre = nom;
    }
    void mostrar(){
        cout<<" Nombre de la persona es: "<<nombre<<endl;
    }
    private:
    string nombre;
};

class Bebe : public Persona{
    public:
    Bebe(const string &nom) : Persona(nom){
        nombre = nom;
        }
        void mostrar(){
            cout<<"Elnombre del bebe es: "<<nombre<<endl;
        }
        private:
        string nombre;
};

int main(){
    Persona p1("Manuel");
    Bebe p2("Jose"),p3("Antonio");

    p1.mostrar();
    p2.mostrar();
    p3.mostrar();
}
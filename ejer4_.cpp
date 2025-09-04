#include<iostream>
using namespace std;

class Persona{
    private:
    string nombre;
    int edad;
    public: 
    Persona(string, int);
    void mostrarPersona();
};
class Estudiante : public Persona{
    private: 
    float promedioFinal;
    public:
    Estudiante( string, int, float);
    void mostrarEstudiante();
};
Persona::Persona( string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}
Estudiante::Estudiante( string _nombre, int _edad, float _promedioFinal) : Persona(_nombre,_edad){
    promedioFinal = _promedioFinal;
}
void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Promedio Final: "<<promedioFinal<<endl;
}

int main(){

    Persona p("Pablo",17);
    Estudiante e("Darikson",18,19.7);
    cout<<'\n';
    cout<<"-Perosna\n";
    p.mostrarPersona();
    cout<<'\n';
    cout<<"-Estudiante\n";
    e.mostrarEstudiante();
    cout<<'\n';
}
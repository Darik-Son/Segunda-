#include<iostream>
using namespace std;

class Persona{
    private: 
    string nombre;
    string apellido;
    int edad;
    public:
    Persona(string,string,int);
    void mostrarPersona();
};

class Alumno{
    private: 
    string notaFinal;
    public:
    Alumno(string);
    void mostrarAlumno();
};

class Universitario : public Persona, public Alumno{
    private:
    string especialidad;
    public:
    Universitario(string, string, int, string);
    void mostrarUniversitario();
};

Persona::Persona ( string _nombre, string _apellido, int _edad){
    nombre = _nombre;
    apellido = _apellido;
    edad = _edad;
}

Alumno::Alumno(string _notaFinal){
    notaFinal = _notaFinal;
}

Universitario::Universitario( string _nombre, string _apellido, int _edad, string notaFinal, string _especialidad) : Persona(_nombre, _appelido, _edad) : Estudiante( _notaFinal){
    Persona::mostrarPersona();
    Alumno::mostrarAlumno();
    especialidad = _especialidad;
}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Alumno::mostrarAlumno(){
    cout<<"Nota Final: "<<notaFinal<<endl;
}

void Universitario::mostrarUniversitario(){
    Persona::mostrarPersona();
    Alumno::mostrarAlumno();
    cout<<"Especialidad: "<<especialidad<<endl;
}
int main(){
    Persona p1("Darikson","Enrique",17);
    Persona p2("Darleny","Enrique",11);
    Persona p3("Haniel","Encarnacion",18);
    cout<<endl;
    p1.mostrarPersona();
    cout<<endl;
    p2.mostrarPersona();
    cout<<endl;
    p3.mostrarPersona();
    cout<<endl;

}

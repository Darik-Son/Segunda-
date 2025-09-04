#include<iostream>
using namespace std;

class Persona{
    private: // protected
    string nombre;
    int edad;
    public:
    Persona(string,int);
    void mostrarPersona();
};

class Alumno : public Persona{
    private: //atributos
    string codigoAlumno;
    float notaFinal;
    public:
    Alumno(string, int,string,float);
    void mostrarAlumno();
};

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad){
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
    cout<<"nombre: "<<nombre<<endl;
    cout<<"edad: "<<edad<<endl;
}
void Alumno::mostrarAlumno(){
    mostrarPersona();
    cout<<"codigo del alumno: "<<codigoAlumno<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;
}

int main(){
    Persona per1("Ricardo",19);
    per1.mostrarPersona();
    cout<<endl;

    Alumno alum1("Darikson",17,"0020240032",18);
     alum1.mostrarAlumno();
}
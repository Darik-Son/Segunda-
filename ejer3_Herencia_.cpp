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

class Empleado : public Persona{
    private:
    float sueldo;
    public:
    Empleado(string, int, float);
    void mostrarEmpleado();
};

class Estudiante : public Persona{
    private:
    float notaFinal;
    public:
    Estudiante(string,int,float);
    void mostrarEstudiante();
};

class Universitario : public Estudiante{
    private:
    string especialidad;
    public: 
    Universitario(string,int,float,string);
    void mostrarUniversitario();
};


Persona::Persona( string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}


Empleado::Empleado( string _nombre, int _edad, float _sueldo) : Persona(_nombre,_edad){
    sueldo = _sueldo;
}

Estudiante::Estudiante( string _nombre, int _edad, float _notaFinal) : Persona(_nombre,_edad){
    notaFinal = _notaFinal;
}

Universitario::Universitario(string _nombre, int _edad, float _notaFinal, string _especialidad) : Estudiante( _nombre, _edad,_notaFinal){
    especialidad = _especialidad;
}
void Persona::mostrarPersona(){
    cout<<"nombre: "<<nombre<<endl;
    cout<<"edad: "<<edad<<endl;
}

void Empleado::mostrarEmpleado(){
    mostrarPersona();
    cout<<"Sueldo: "<<sueldo<<endl;
}

void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Nota Final: "<<notaFinal<<endl;
}

void Universitario::mostrarUniversitario(){
    mostrarEstudiante();
    cout<<"Especialidad: "<<especialidad<<endl;
}

int main(){
    Persona p("Pedro",18);
    Empleado e("Haniel",17,1650);
    Estudiante s("Darleny",12,14);
    Universitario u("Darikson",17,17.5,"Ingenieria en Informatica y Sistemas");
    cout<<"\n";
    cout<<"-Persona: "<<endl;
    p.mostrarPersona();
    cout<<"\n";
     cout<<"-Empleado: "<<endl;
    e.mostrarEmpleado();
    cout<<"\n";
     cout<<"-Estudiante: "<<endl;
    s.mostrarEstudiante();
    cout<<"\n";
     cout<<"-Universitario: "<<endl;
    u.mostrarUniversitario();
    cout<<"\n";
}



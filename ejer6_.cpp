#include<iostream>
using namespace std;

class Persona{
    private:
    string nombre;
    int edad;
    public:
    Persona(string, int);
    virtual void leer();
};

class Alumno : public Persona{
    private: 
    float notaFinal;
    public:
    Alumno(string,int,float);
    void leer();
};

class Profesor : public Persona{
    private:
    string curso;
    public:
    Profesor(string, int, string);
    void leer();
};

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad){
    notaFinal = _notaFinal;
}

Profesor::Profesor(string _nombre, int _edad, string _curso) : Persona(_nombre,_edad){
    curso = _curso;
}
void Persona::leer(){
    cout << "Nombre: " << nombre<<endl;
    cout<<"Edad: " << edad << endl;
}

void Alumno::leer(){
    Persona::leer();
    cout<<"NOta Final: "<<notaFinal<<endl;
}

void Profesor::leer(){
    Persona::leer();
    cout<<"El curso a cargo es: "<<curso<<endl;
}

int main(){
    
    Persona *vector[4];

    vector[0]= new Alumno("Darikson", 17,19.6);
    vector[1]= new Alumno("Roberto",19,14.6);
    vector[2] = new Profesor("Christian",37,"Programacion Basica");
    vector[3] = new Profesor("Hubel",53,"Programacion Basica");

    for(int i=0; i<4; i++){
        cout<<'\n';
        vector[i]->leer();
        cout<<'\n';
    }
}
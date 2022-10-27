// Interfaz

typedef struct complejo{
	double real;
	double img;
} Complejo;

Complejo crear_complejo(double, double);
Complejo suma(Complejo, Complejo);
Complejo resta(Complejo, Complejo);
Complejo multiplicacion(Complejo, Complejo);
Complejo division(Complejo, Complejo);
void print(Complejo);

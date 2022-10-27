// Interfaz
#define MAX 10

struct lista{
	int arr[MAX];
	int cont; // Contar los elementos en el arreglo
};

typedef struct lista Lista;

// Prototipos
Lista init(); // Como un constructor
Lista insertar(Lista, int);
Lista borrar(Lista);
void display(Lista);

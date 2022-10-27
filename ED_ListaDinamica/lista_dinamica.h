// Interfaz
#define MAX 10

typedef struct lista_dinamica * ListaDinamica; // Apuntador a tipo oculto

// Prototipos
ListaDinamica init(); // Como un constructor
ListaDinamica insertar(ListaDinamica, int);
ListaDinamica insertar_en(ListaDinamica, int, int);
ListaDinamica borrar(ListaDinamica);
ListaDinamica borrar_en(ListaDinamica, int);
void ordenar(ListaDinamica lista_dinamica);
void display(ListaDinamica);
void destroy(ListaDinamica);

#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_LIBROS 10
#define MAX_NOMBRE 100
#define MAX_AUTOR 50
#define MAX_ESTADO 10

typedef struct
{
    int ID;
    char titulo[MAX_NOMBRE];
    char autor[MAX_AUTOR];
    int pub;
    char estado[MAX_ESTADO];
} Libro;

/**
 * @brief Funcion para buscar productos
 * @param nombres nombres de productos (Cambiar a tipo struct si es necesario)
 * @param nomnreBuscado busqueda ingresada
 */
int buscarNombre(char nombres[][25], char nombreBuscado[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(nombres[i], nombreBuscado) == 0)
        {
            return i;
        }
    }
    return -1;
}

/**
 * @brief Funcion para comprobar si ya se ingreso un nombre anteriormente
 * @param nombres nombres de los productos (cambiar a tipo struct si es necesario)
 * @param nombre nuevo nombre ingresado
 */
int existeNombre(char nombres[][25], char nombre[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(nombres[i], nombre) == 0)
        {
            return 1;
        }
    }
    return 0;
}

/**
 * @brief Funcion para calcular el precio total del inventario
 *
 * @param precios
 * @param tamano
 * @return float Precio total de inventario
 */
float PrecioTotal(float precios[], int tamano)
{
    float suma = 0;
    for (int i = 0; i < tamano; i++)
    {
        suma += precios[i];
    }

    return suma;
}

/**
 * @brief Calcular promedio de los precios
 *
 * @param precios
 * @param tamano
 * @return float promedio
 */
float Promediar(float precios[], int tamano)
{
    float suma = 0, promedio = 0;
    for (int i = 0; i < tamano; i++)
    {
        suma += precios[i];
    }

    promedio = suma / tamano;
    return promedio;
}

/**
 * @brief verifica si el nombre ingresado ya fue registrado
 * @param libro matriz de objetos de la estructura
 * @param nombre cadena ingresada a comprobar
 * @param n cantidad de libros a registrar
 * @return 1 si el nombre existe, 0 si no existe
 */
int existeNombre(Libro libros[], char nombre[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(libros[i].titulo, nombre) == 0)
        {
            return 1;
        }
    }
    return 0;
}

/**
 * @brief verifica si la ID ingresada ya fue registrada
 * @param libro matriz de objetos de la estructura
 * @param ID cadena ingresada a comprobar
 * @param n cantidad de libros a registrar
 * @return 1 si el nombre existe, 0 si no existe
 */
int existeID(Libro libros[], int ID, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (libros[i].ID == ID)
        {
            return 1;
        }
    }
    return 0;
}

/**
 * @brief Funcion para limpieza de buffer
 * evitar buffer overflow
 *
 */
void LimpiarBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}


/**
 * @brief Funcion para buscar libros por ID
 *
 * @param libros vector de la estructura libros
 * @param entrada busqueda del usuario
 * @return int la posicion en el vector del libro buscado
 */
int buscarProductoID(Libro libros[], int entrada)
{
    for (int i = 0; i < MAX_LIBROS; i++)
    {
        if (libros[i].ID == entrada)
        {
            return i;
        }
    }
    return -1;
}

/**
 * @brief Funcion para buscar libros por TITULO
 *
 * @param libros vector de la estructura libros
 * @param nombreBuscado Busqueda del usuario
 * @return int la posicion en el vector del libro buscado
 */
int buscarProducto(Libro libros[], char nombreBuscado[])
{
    for (int i = 0; i < MAX_LIBROS; i++)
    {
        if (strcmp(libros[i].titulo, nombreBuscado) == 0)
        {
            return i;
        }
    }
    return -1;
}

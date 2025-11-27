 #include <string.h>

/**
 * @brief Funcion para buscar productos
 * @param nombres nombres de productos (Cambiar a tipo struct si es necesario)
 * @param nomnreBuscado busqueda ingresada
 */
int buscarProducto(char nombres[][25], char nombreBuscado[]){
    for(int i = 0; i < 5; i++){
        if(strcmp(nombres[i], nombreBuscado) == 0){
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
int existeNombre(char nombres[][25], char nombre[]){
    for(int i = 0; i < 5; i++){
        if(strcmp(nombres[i], nombre) == 0){
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
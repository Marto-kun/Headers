Ejemplo de ingreso de datos:


Tipo numerico: 

int nValido = 0;
do
    {
        printf("\nIngrese la cantidad de productos a ingresar (1 - 10): ");

        if (fgets(entrada, 25, stdin) == NULL)
        {
            LimpiarBuffer();
            continue;
        }

        // 2. Eliminar el salto de línea al final de la cadena
        entrada[strcspn(entrada, "\n")] = '\0';

        if (VerificacionDigitos(entrada))
        {
            int nIngresado = atoi(entrada);   // Cambiar por atof para usar floats
            if (nIngresado > 0 && nIngresado <= 10)
            {
                n = nIngresado;
                nValido = 1;
            }
        }
        else
        {
            printf("\nSolo se permiten numeros del 1 al 10. Intentelo de nuevo.");
        }

    } while (nValido == 0);


Tipo caracter:


// Ingreso de nombres de productos
    for (int i = 0; i < n; i++)
    {

        int nombreValido = 0;
        do
        {
            printf("\nIngresar el nombre del producto #%i: ", i + 1);
            if (fgets(entrada, 25, stdin) == NULL)
            {
                LimpiarBuffer();
                nombreValido = 0;
                continue;
            }

            // Eliminar el salto de línea al final de la cadena
            entrada[strcspn(entrada, "\n")] = '\0';

            if (VerificacionChar(entrada) == 1)
            {
                strcpy(productos[i], entrada);
                nombreValido = 1;
            }
            else
            {
                printf("\nSolo se permiten letras. Intentelo de nuevo.");
                nombreValido = 0;
            }

        } while (nombreValido == 0);
    }

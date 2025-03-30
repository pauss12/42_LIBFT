# libft - 42 Madrid

![alt text](image.png)

Este proyecto tiene como objetivo implementar una biblioteca en C que replica la funcionalidad de varias funciones estándar de la biblioteca C.

## Descripción

La `libft` es una biblioteca personalizada que proporciona implementaciones de funciones estándar de C, así como algunas funciones adicionales útiles. El objetivo principal es comprender y aplicar los conceptos fundamentales de la programación en C, como la manipulación de memoria, cadenas y archivos.

## Funciones implementadas

### Funciones de caracteres

* `ft_isalnum()`: Verifica si un carácter es alfanumérico.
* `ft_isalpha()`: Verifica si un carácter es una letra del alfabeto.
* `ft_isascii()`: Verifica si un carácter está dentro del rango ASCII.
* `ft_isdigit()`: Verifica si un carácter es un dígito.
* `ft_isprint()`: Verifica si un carácter es imprimible en ASCII.
* `ft_toupper()`: Convierte un carácter a mayúscula.
* `ft_tolower()`: Convierte un carácter a minúscula.

### Funciones de cadenas

* `ft_strlen()`: Calcula la longitud de una cadena.
* `ft_atoi()`: Convierte una cadena a un entero.
* `ft_substr()`: Extrae una subcadena de una cadena.
* `ft_strjoin()`: Concatena dos cadenas.
* `ft_strtrim()`: Elimina caracteres especificados del inicio y final de una cadena.
* `ft_split()`: Divide una cadena en subcadenas usando un delimitador.
* `ft_itoa()`: Convierte un entero a una cadena.
* `ft_strmapi()`: Aplica una función a cada carácter de una cadena, creando una nueva cadena.
* `ft_striteri()`: Aplica una función a cada carácter de una cadena, modificando la cadena original.
* `ft_strlcpy()`: Copia una cadena a otra, con un límite de tamaño.
* `ft_strlcat()`: Concatena dos cadenas con un límite de tamaño.
* `ft_strchr()`: Busca la primera aparición de un carácter en una cadena.
* `ft_strrchr()`: Busca la última aparición de un carácter en una cadena.
* `ft_strncmp()`: Compara dos cadenas hasta un número especificado de caracteres.
* `ft_strnstr()`: Busca una subcadena dentro de una cadena.

### Funciones de archivos

* `ft_putchar_fd()`: Escribe un carácter en un descriptor de archivo.
* `ft_putstr_fd()`: Escribe una cadena en un descriptor de archivo.
* `ft_putendl_fd()`: Escribe una cadena en un descriptor de archivo, seguida de un salto de línea.
* `ft_putnbr_fd()`: Escribe un entero en un descriptor de archivo.

### Funciones de memoria

* `ft_memset()`: Rellena un bloque de memoria con un valor específico.
* `ft_bzero()`: Rellena un bloque de memoria con ceros.
* `ft_calloc()`: Asigna memoria y la inicializa con ceros.
* `ft_memcpy()`: Copia un bloque de memoria a otro.
* `ft_memmove()`: Copia un bloque de memoria a otro, manejando solapamientos.
* `ft_strdup()`: Duplica una cadena.
* `ft_memchr()`: Busca un carácter en un bloque de memoria.
* `ft_memcmp()`: Compara dos bloques de memoria.

### Funciones de listas enlazadas (bonus)

Las listas enlazadas son estructuras de datos que permiten almacenar y manipular colecciones de elementos de forma dinámica.

```c
typedef struct t_list
{
    void *content;
    struct t_list *next;
} t_list;
```

## Cómo usar

1.  **Clonar el repositorio:**

```bash
    git clone git@github.com:pauss12/42_LIBFT.git libft
    cd libft
```
2.  **Compilar el programa:**

    ```bash
    make
    ```

3. **Enjoy ;)**
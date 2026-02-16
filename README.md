# 📚 Libft - Biblioteca Estándar en C

> Implementación desde cero de funciones fundamentales de la biblioteca estándar de C, desarrollado como parte del curriculum de 42 School.

## 🎯 Descripción

**Libft** es una biblioteca de funciones en C creada manualmente, sin el uso de librerías externas (excepto `write`, `malloc` y `free`). Este proyecto constituye la base para futuros desarrollos en el curriculum de 42, estableciendo un entendimiento profundo de cómo funcionan las estructuras de datos y algoritmos a bajo nivel.

## 🔧 Compilación y Uso

```bash
# Compilar la biblioteca
make

# Limpiar archivos objeto
make clean

# Limpiar todo incluyendo la biblioteca
make fclean

# Recompilar desde cero
make re
```

La compilación genera `libft.a`, una biblioteca estática lista para ser enlazada con otros proyectos en C.

## 📋 Funciones Implementadas

### Part I: Funciones de Libc
Reimplementación de funciones estándar de C con el prefijo `ft_`:

**Manipulación de caracteres:**
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`

**Manipulación de strings:**
- `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- `ft_strlcpy`, `ft_strlcat`, `ft_strdup`

**Manipulación de memoria:**
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_memchr`, `ft_memcmp`, `ft_calloc`

**Conversión:**
- `ft_atoi` - Convierte string a entero

### Part II: Funciones Adicionales
Funciones que no están en libc o con implementaciones extendidas:

- `ft_substr` - Extrae substring de un string
- `ft_strjoin` - Concatena dos strings en uno nuevo
- `ft_strtrim` - Elimina caracteres especificados del inicio y final
- `ft_split` - Divide string en array usando un delimitador
- `ft_itoa` - Convierte entero a string
- `ft_strmapi` - Aplica función a cada carácter de un string
- `ft_striteri` - Aplica función a cada carácter (versión con índice)
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` - Escritura en file descriptors

### Part III: Listas Enlazadas
Implementación completa de estructuras de datos dinámicas:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

- `ft_lstnew` - Crea nuevo nodo
- `ft_lstadd_front`, `ft_lstadd_back` - Añade nodos al inicio/final
- `ft_lstsize` - Cuenta elementos
- `ft_lstlast` - Obtiene último nodo
- `ft_lstdelone`, `ft_lstclear` - Gestión de memoria
- `ft_lstiter` - Itera aplicando función
- `ft_lstmap` - Crea nueva lista aplicando función

## 💡 Conocimientos Adquiridos

### Conceptos Fundamentales
- **Gestión manual de memoria:** Uso correcto de `malloc`, `free` y prevención de memory leaks
- **Punteros y referencias:** Manipulación avanzada de punteros, punteros a funciones, y dobles punteros
- **Estructuras de datos:** Implementación de listas enlazadas desde cero
- **Algoritmos:** Desarrollo de algoritmos de búsqueda, división de strings y conversión de tipos

### Buenas Prácticas
- **Norma de código:** Cumplimiento estricto de la Norminette (estándar de código de 42)
- **Protección de errores:** Validación exhaustiva de parámetros y casos límite
- **Compilación:** Flags estrictos (`-Wall -Werror -Wextra`)
- **Makefiles:** Automatización de compilación con reglas eficientes

### Competencias Técnicas
- Programación en C a bajo nivel
- Comprensión profunda del funcionamiento de funciones estándar
- Manejo de descriptores de archivo
- Resolución de problemas algorítmicos
- Testing y debugging de código crítico
- Gestión de casos límite y validación exhaustiva

## 📊 Especificaciones Técnicas

- **Lenguaje:** C
- **Estándar:** Compatible con funciones de `libc`
- **Norma:** 42 Norminette
- **Compilador:** `cc` con flags `-Wall -Werror -Wextra`
- **Funciones externas permitidas:** `malloc`, `free`, `write`

## 🎓 Contexto Académico

Este proyecto es el primero del curriculum común de 42 School y sienta las bases para todos los proyectos posteriores. La biblioteca resultante se reutiliza en proyectos más complejos como `get_next_line`, `ft_printf`, `so_long`, `push_swap`, entre otros.

## 👤 Autor

**ncaravac** - Estudiante de 42 School

---

*Este proyecto fue desarrollado siguiendo los estándares de 42 School y demuestra comprensión sólida de programación en C, gestión de memoria y estructuras de datos fundamentales.*

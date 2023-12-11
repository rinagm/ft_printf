# My own printf in C 📝 in 42 Madrid

My second Project in 42 is to replicate the printf function in C.

## Variadic function
In this project is required to use the variadic functions. </br>

Variadic functions are functions that may be called with differents number of arguments.</br>
When a variadic function is called, all parameters are stored on the stack by the compiler and initialised with macros.</br>

- The necesary information is stored in _va_list_
- Initialise parameter access with _va_start_
- Get a new parameter with each call to _va_arg_
- Finish with _va_end_</br>

Is required to use the library <stdarg.h></br>
When it finds the `'%'` character, it calls the conversion function and formats it according to the corresponding conversion specifier (the character after the `'%').</br>

## Project ft_prinft


``` c
# define FORMATS	"cspdiuxX%"
```

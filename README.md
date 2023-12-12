 # My printf in C 📝 in 42 Madrid

My second Project in <b>42</b> is to replicate the printf function in C.

## Variadic function
In this project is required to use the variadic functions. </br>

Variadic functions are functions that may be called with different numbers of arguments.</br>
When a variadic function is called, all parameters are stored on the stack by the compiler and initialized with macros: </br>

- The necessary information is stored in _va_list_
- Initialise parameter access with _va_start_
- Get a new parameter with each call to _va_arg_
- Finish with _va_end_</br>

Is required to use the library <stdarg.h></br>
When it finds the `'%'` character, it calls the conversion function and formats it according to the corresponding conversion specifier (the character after the `'%').</br>

## Project ft_prinft
This project consists of duplicating the behavior of the C function `printf()`.

``` c
int ft_printf(const char *, ...);
```

The printf function returns the number of characters printed, or a negative value if an error occurs.</br>

Supported conversions:

`%c` - Prints a single character</br>
`%s` - Prints a string</br>
`%p` - Prints a pointer address </br>
`%d` or %i - Prints a signed integer</br>
`%u` - Prints an unsigned integer</br>
`%x` or `%X` - Prints an unsigned integer in hexadecimal format ("0123456789abcdef")</br>

## Used functions

`ft_putchar`
`ft_putstr`
`ft_ptr`
`ft_putnbr`
`ft_unsigned`
`ft_hex`
 

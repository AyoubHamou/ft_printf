<h2 align="center"> Summary </h2>

The goal of this project is pretty straightforward. You will recode printf().
You will mainly learn about using a variable number of arguments. How cool is that?
It is actually pretty cool :)

---

### .♦️ Main Topic
**Variadic functions.**

- What is Variadic Functions?

Variadic function takes indefinite size arity and a variable number of arguments as a parameter. Situations that you do not know how many parameters pass the function.

- What is ellipses (...)?

The ellipsis (...) is part of the C language and indicates that there are 0 or more optional arguments.



### .♦️ Handled Conversions
• **%c** Prints a single character.<br>
• **%s** Prints a string (as defined by the common C convention).<br>
• **%p** The void * pointer argument has to be printed in hexadecimal format.<br>
• **%d** Prints a decimal (base 10) number.<br>
• **%i** Prints an integer in base 10.<br>
• **%u** Prints an unsigned decimal (base 10) number.<br>
• **%x** Prints a number in hexadecimal (base 16) lowercase format.<br>
• **%X** Prints a number in hexadecimal (base 16) uppercase format.<br>
• **%%** Prints a percent sign.<br>

### .♦️ Used Functions
***ft_putchar*** : write a single char.<br>
***ft_putstr*** : print string of chars.<br>
***ft_putnbr*** : print integer .<br>
***ft_putnbr_u*** : print unsogned integer.<br>
***ft_puthex*** : print hexadecimal values.<br>
***stdarg.h*** : va_list, va_start, va_end.<br>

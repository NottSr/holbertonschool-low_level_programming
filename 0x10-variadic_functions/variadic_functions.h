#ifndef _VFUNC_
#define _VFUNC_
#include <stdarg.h>
/**
 * struct get_type - struct to get type
 * @type: type
 * @f: function
 */
typedef struct get_type
{
	char *type;
	void (*f)(char *separator, va_list pall);
} get_ty;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void pr_char(char *separator, va_list pall);
void pr_int(char *separator, va_list pall);
void pr_float(char *separator, va_list pall);
void pr_str(char *separator, va_list pall);
#endif

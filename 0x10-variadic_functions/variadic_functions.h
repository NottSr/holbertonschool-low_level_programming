#ifndef _VFUNC_
#define _VFUNC_
struct get_type
{
	char *type;
	char (*f)(char *separator, va_list pall);
}get_ty;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

#ifndef _SYMBOLS_H
#define _SYMBOLS_H

void init_symbols(const char *fname);
int print_attribute_name(unsigned long attr_names_base, int attr_no);
int print_property_name(unsigned long property_names_base, int prop_no);
int print_local_name(unsigned long start_of_routine, int local_no);
int print_global_name(unsigned long start_of_routine, int global_no);

#endif // _SYMBOLS_H

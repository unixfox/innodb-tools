#ifndef _check_data_h_
#define _check_data_h_

#include <univ.i>
#include <page0page.h>
#include <rem0rec.h>

#include "common.h"

extern bool debug;

ibool check_datetime(ulonglong ldate);
ibool check_char_ascii(char *value, ulint len);
ibool check_char_digits(char *value, ulint len);
ibool check_field_limits(field_def_t *field, byte *value, ulint len);

#endif

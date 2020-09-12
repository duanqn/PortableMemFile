#pragma once
#include <cstdio>

FILE *fmemopen(void *buf, size_t size, const char *mode);

FILE *open_memstream(char **ptr, size_t *sizeloc);
#include "types.h"
#include <stdlib.h>

void freeFileAttrib(t_fileAttrib * fileAttrib)
{
  free(fileAttrib->name);
  free(fileAttrib);
}

t_theme * DefaultTheme() {
  t_theme * theme = malloc(sizeof(t_theme));
  theme->normal = "\033[49;39m";
  theme->numberLine = "\033[49;90m";
  theme->directory = "\033[49;34m";
  theme->gitWarn = "\033[49;31m";
  theme->gitAdd = "\033[49;32m";
  return theme;
}

//TODO: make init functions

 // Converting a string to uppercase using a non-constant pointer to non-constant data.
 #include <stdio.h>
 #include <ctype.h> // in order to use 'tolower' and 'toupper'

void convert(char *p) {
  while (*p != NULL) { // NULL yerine '\0' da yazılabilir.
    *p = toupper(*p);
    p++;
  }
}

int main(void) {
  char string[] = "cHarEcTerS aNd $31.69";
  convert(string);
  printf("%s", string);
}
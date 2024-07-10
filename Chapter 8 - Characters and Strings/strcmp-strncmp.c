// Using functions strcmp() and strncmp()
#include <stdio.h>
#include <string.h>

int main(void) {
  const char *s1 = "Ahmet";
  const char *s2 = "Ahmet";
  const char *s3 = "AhmET";

  if ((strcmp(s1, s2) == 0)) { 
    printf("s1 and s2 are same.");
  } else { 
    printf("s1 and s2 are NOT same.");
  } puts("");

  if ((strcmp(s1, s3) == 0)) { 
    printf("s1 and s3 are same.");
  } else { 
    printf("s1 and s3 are NOT same.");
  } puts("");

  if ((strncmp(s1, s3, 3) == 0)) { 
    printf("s1 and s3 are same up to first 3 characters.");
  } else { 
    printf("s1 and s3 are NOT same up to first 3 characters.");
  }
}

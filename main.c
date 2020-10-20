#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

int64_t entry(void *);

int main(int argc, char** argv) {
  void * heap = malloc(1000);
  int64_t result = entry(heap);
  
  printf("%" PRId64 "\n", result);
  printf("%" PRId64 "\n", (int64_t *) heap);

  free(heap);
  return 0;
}
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

int64_t entry_win(void *);
int64_t entry_unix(void *);

int main(int argc, char** argv) {
  void * heap = malloc(1000);
  int64_t result_win = entry_win(heap);
  int64_t result_unix = entry_unix(heap);
  
  printf("Windows\t: %" PRId64 "\n", result_win);
  printf("UNIX\t: %" PRId64 "\n", result_unix);
  printf("Actual\t: %" PRId64 "\n", (int64_t *) heap);

  free(heap);
  return 0;
}
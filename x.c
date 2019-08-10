#include "indirect_header.h"
#include "indirect_header2.h"
triggers_the_bug() {
  for (struct wrap w;;)
    ;
}

main() {
  struct list_node head, b;
  b.prev = 0x1;
  list_insert_after(&head, &b);

  // after list_insert_after, b.prev == &head should be true
  if ((b.prev == (void *)0x1) && (b.next == &head)) {
    // however...
    printf("Bugged\n");
  }
}

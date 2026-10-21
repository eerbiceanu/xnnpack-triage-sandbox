#include "src/xnnpack/microkernel-utils.h"

int xnn_dispatch_table_lookup(int idx) { return idx >= 0 ? idx : -1; }

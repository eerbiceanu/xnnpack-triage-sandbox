#include "src/xnnpack/microkernel-utils.h"

size_t xnn_compute_softmax_stride(size_t n, size_t c) { return xnn_safe_mul_stride(n, c); }

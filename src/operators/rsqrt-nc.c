#include "src/xnnpack/microkernel-utils.h"

float xnn_compute_rsqrt(float v) { return xnn_fast_rsqrt_f32(v); }

#include <gtest/gtest.h>
#include "src/xnnpack/microkernel-utils.h"

namespace ynnpack { int align_stencil_buffer(int sz) { return (sz + 63) & ~63; } }

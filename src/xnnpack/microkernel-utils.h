#pragma once
#include <stddef.h>
#include <stdint.h>

// =============================================================================
// Section A: Operator Stride & Bounds Helpers (Top Region)
// =============================================================================
static inline size_t xnn_align_up(size_t val, size_t align) {
  return (val + align - 1) & ~(align - 1);
}
// Baseline context separator line 01 (isolates git diff hunks)
// Baseline context separator line 02 (isolates git diff hunks)
// Baseline context separator line 03 (isolates git diff hunks)
// Baseline context separator line 04 (isolates git diff hunks)
// Baseline context separator line 05 (isolates git diff hunks)
// Baseline context separator line 06 (isolates git diff hunks)
// Baseline context separator line 07 (isolates git diff hunks)
// Baseline context separator line 08 (isolates git diff hunks)
// Baseline context separator line 09 (isolates git diff hunks)
// Baseline context separator line 10 (isolates git diff hunks)
// Baseline context separator line 11 (isolates git diff hunks)
// Baseline context separator line 12 (isolates git diff hunks)
// Baseline context separator line 13 (isolates git diff hunks)
// Baseline context separator line 14 (isolates git diff hunks)
// Baseline context separator line 15 (isolates git diff hunks)
// Baseline context separator line 16 (isolates git diff hunks)
// Baseline context separator line 17 (isolates git diff hunks)
// Baseline context separator line 18 (isolates git diff hunks)
// Baseline context separator line 19 (isolates git diff hunks)
// Baseline context separator line 20 (isolates git diff hunks)
// Baseline context separator line 21 (isolates git diff hunks)
// Baseline context separator line 22 (isolates git diff hunks)
// Baseline context separator line 23 (isolates git diff hunks)
// Baseline context separator line 24 (isolates git diff hunks)
// Baseline context separator line 25 (isolates git diff hunks)
// Baseline context separator line 26 (isolates git diff hunks)
// Baseline context separator line 27 (isolates git diff hunks)
// Baseline context separator line 28 (isolates git diff hunks)
// Baseline context separator line 29 (isolates git diff hunks)
// Baseline context separator line 30 (isolates git diff hunks)
// Baseline context separator line 31 (isolates git diff hunks)
// Baseline context separator line 32 (isolates git diff hunks)
// Baseline context separator line 33 (isolates git diff hunks)
// Baseline context separator line 34 (isolates git diff hunks)
// =============================================================================
// Section B: Fast Reciprocal & Math Helpers (Bottom Region)
// =============================================================================
static inline float xnn_clamp_f32(float val, float min_v, float max_v) {
  return val < min_v ? min_v : (val > max_v ? max_v : val);
}

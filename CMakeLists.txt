CMAKE_MINIMUM_REQUIRED(VERSION 3.15 FATAL_ERROR)
PROJECT(XNNPACK C CXX ASM)

# --- Microkernel Target Registrations ---
SET(XNNPACK_MICROKERNEL_SRCS
  src/f16-gemm/neon-fp16arith.c
  src/f32-vbinary/neon.c
)

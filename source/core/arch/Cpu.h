#ifndef CORE_ARCH_CPU_H
#define CORE_ARCH_CPU_H

// 包含平台特定的 CPU 头文件
#ifdef ARCH_X86
#include "core/arch/x86/cpu-x86.h"
#elif ARCH_ARM
#include "core/arch/arm/cpu-arm.h"
#elif ARCH_ARM64
#include "core/arch/arm64/cpu-arm64.h"
#endif

#endif // CORE_ARCH_CPU_H

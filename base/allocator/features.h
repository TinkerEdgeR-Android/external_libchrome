// Generated by build/write_buildflag_header.py
// From "allocator_features"

#ifndef BASE_ALLOCATOR_FEATURES_H_
#define BASE_ALLOCATOR_FEATURES_H_

#include "build/buildflag.h"

#if defined(__APPLE__) || defined(ANDROID)
#define BUILDFLAG_INTERNAL_USE_EXPERIMENTAL_ALLOCATOR_SHIM() (0)
#else
#define BUILDFLAG_INTERNAL_USE_EXPERIMENTAL_ALLOCATOR_SHIM() (1)
#endif

#endif  // BASE_ALLOCATOR_FEATURES_H_

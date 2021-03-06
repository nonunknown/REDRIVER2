#ifndef PSYX_COMPAT_H
#define PSYX_COMPAT_H

// Psy-Cross compatibility header

// Necessary includes
#ifndef PSX
#include "PSYX_PUBLIC.H"
#endif

// Necessary types
// It's size should match P_LEN*4
#ifdef PSX
typedef u_long OTTYPE;
#else
typedef unsigned long long OTTYPE;
#endif

#endif PSYX_COMPAT_H
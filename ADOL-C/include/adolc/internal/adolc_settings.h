/*----------------------------------------------------------------------------
 ADOL-C -- Automatic Differentiation by Overloading in C++
 File:     adolc_settings.h
 Revision: $Id$
 Contents: ADOL-C Settings:
           These parameters might affect the performance of the ADOL-C
           system; and are set by the configure script during the build.
	   Do not edit this file.

 Copyright (c) Kshitij Kulshreshtha, Jean Utke

 This file is part of ADOL-C. This software is provided as open source.
 Any use, reproduction, or distribution of the software constitutes
 recipient's acceptance of the terms of the accompanying license file.

----------------------------------------------------------------------------*/

#if !defined(ADOLC_ADOLC_SETTINGS_H)
#define ADOLC_ADOLC_SETTINGS_H 1

#include <stdint.h>
/*--------------------------------------------------------------------------*/
/* ADOL-C data types */
typedef uint32_t locint;                /* ensure locint is unsigned */
typedef double revreal;

/*--------------------------------------------------------------------------*/
/* Enable/disable asinh, acosh,atanh, erf */
#undef ATRIG_ERF

/*--------------------------------------------------------------------------*/
/* Enable/disable advanced branching */
#undef ADOLC_ADVANCED_BRANCHING

/*--------------------------------------------------------------------------*/
/* Use Boost Library Pool allocator */
#define USE_BOOST_POOL 1

#endif

#ifndef CONSTANTS_H
#define CONSTANTS_H

#ifndef ULONG
typedef unsigned long ULONG;
#endif

#ifndef DBL_MAX
#define DBL_MAX 1.7976931348623158e+308
#endif

#ifndef FLT_MAX
#define FLT_MAX	3.402823466e+38F
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#define CLAMP_TO_RANGE 1

static const float aa_GRAVITY		= 9.81f;
static const float aa_EPSILON		= FLT_MIN;
static const float aa_PI			= 3.14159265358979323846f;
static const float aa_PIBYTWO		= 1.57079632679489661923f;
static const float aa_180BYPI		= 57.295779513082320876798154814105f;
static const float aa_PIBY180		= 0.01745329251994329576922222222222f;
static const float aa_INV_PIBYTWO	= 0.63661977236758134307607071493546f;
static const float aa_INV_SQRTTWO	= 0.70710678118654752440084436210485f;

#endif /*CONSTANTS_H*/
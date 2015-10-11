#include "vector.h"
#include <math.h>
#include "assert.h"
#include "mem.h"
#define T Vector_T
struct T {
    float x;
    float y;
    float z;
};

T Vector_New( void )
{
	T vec;
	NEW(vec);
	vec->x = 0.0f;
	vec->y = 0.0f;
	vec->z = 0.0f;
	return vec;
}

void Vector_Normalize(T vec)
{
	assert(vec);
	float m = Vector_Magnitude(vec);
	vec->x /= m;
	vec->y /= m;
	vec->z /= m;
}

float Vector_Magnitude(T vec)
{
	assert(vec);
	float value = (vec->x*vec->x) + (vec->y*vec->y) + (vec->z*vec->z);
	return sqrt(value);
}

float Vector_Product(T vec)
{
	assert(vec);
	return (vec->x*vec->y*vec->z);
}

void Vector_Add(T vec, T vecToAdd)
{
	vec->x += vecToAdd->x;
	vec->y += vecToAdd->y;
	vec->z += vecToAdd->z;
}

float Vector_GetX(T vec)
{
	assert(vec);
	return vec->x;
}

void Vector_SetX(T vec, float x)
{
	vec->x = x;
}

float Vector_GetY(T vec)
{
	assert(vec);
	return vec->y;
}

void Vector_SetY(T vec, float y)
{
	vec->y = y;
}

float Vector_GetZ(T vec)
{
	assert(vec);
	return vec->z;
}

void Vector_SetZ(T vec, float z)
{
	vec->z = z;
}

void Vector_Free(T *vec) {
	assert(vec && *vec);
	FREE(*vec);
}

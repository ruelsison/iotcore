/****************************************************************************
* Title                 :   Vector
* Filename              :   vector.h
* Author                :   Ruel Sison
* Origin Date           :   06/10/2015
* Version               :   1.0.0
* Compiler              :   TODO: COMPILER GOES HERE
* Target                :   TODO: MCU GOES HERE
* Notes                 :   None
*
* THIS SOFTWARE IS PROVIDED BY IOTEMPO COMPANY "AS IS" AND ANY EXPRESSED
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL BENINGO ENGINEERING OR ITS CONTRIBUTORS BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
*****************************************************************************/
/****************************************************************************
* Doxygen C Template
* Copyright (c) 2013 - Jacob Beningo - All Rights Reserved
*
* Feel free to use this Doxygen Code Template at your own risk for your own
* purposes.  The latest license and updates for this Doxygen C template can be
* found at www.beningo.com or by contacting Jacob at jacob@beningo.com.
*
* For updates, free software, training and to stay up to date on the latest
* embedded software techniques sign-up for Jacobs newsletter at
* http://www.beningo.com/814-2/
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Template.
*
*****************************************************************************/
/*************** INTERFACE CHANGE LIST **************************************
*
*    Date    Version   Author         Description
*  06/10/2015   1.0.0   Ruel Sison   Interface Created.
*
*****************************************************************************/

/** @file fall_detection.h
 *  @brief This module TODO: WHAT DO I DO?
 *
 *  This is the header file for the definition TODO: MORE ABOUT ME!
 */

#ifndef IOT_VECTOR_H_
#define IOT_VECTOR_H_

/******************************************************************************
* Includes
*******************************************************************************/
#include <stdint.h>
#include <stdbool.h>

/******************************************************************************
* Preprocessor Constants
*******************************************************************************/


/******************************************************************************
* Configuration Constants
*******************************************************************************/


/******************************************************************************
* Macros
*******************************************************************************/


/******************************************************************************
* Typedefs
*******************************************************************************/
/**
 * This enumeration is a list of test types
 */
#define T Vector_T
typedef struct T *T;

/******************************************************************************
* Function Prototypes
*******************************************************************************/
#ifdef __cplusplus
extern "C"{
#endif

/******************************************************************************
* Allocate, initialize, and return a new vector that stores elements of size
* `size`. If `freefn` is not NULL, it is used to free individual elements
* upon removal. Note that `freefn` will be called on already free'd memory
* if elements point to the same memory location.
*******************************************************************************/
T	Vector_New( void );

/******************************************************************************
* Free memory allocated by `Vector_new`. If `v` has a non-NULL `free`
* function, the remaining elements of `v` are passed to this function.
*******************************************************************************/
void Vector_Free(T *vec);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
void Vector_Normalize(T vec);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
float Vector_Magnitude(T vec);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
float Vector_Product(T vec);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
void Vector_Add(T vec, T vecToAdd);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
float Vector_GetX(T vec);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
void Vector_SetX(T vec, float x);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
float Vector_GetY(T vec);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
void Vector_SetY(T vec, float y);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
float Vector_GetZ(T vec);

/******************************************************************************
* Function Prototypes
*******************************************************************************/
void Vector_SetZ(T vec, float z);

#ifdef __cplusplus
} // extern "C"
#endif

#undef T

#endif /* IOT_VECTOR_H_ */

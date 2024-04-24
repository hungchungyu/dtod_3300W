/*****************************************************************************/
/***** MACROS ****************************************************************/
/*****************************************************************************/

#define FALSE   0
#define TRUE    1
#define LOW     0
#define HIGH    1

typedef unsigned                BIT;
typedef unsigned char           BYTE;
typedef unsigned int            WORD;
typedef unsigned long           DWORD;

typedef char                    INT8;
typedef unsigned char           UINT8;
typedef int                     INT16;
typedef unsigned int            UINT16;
typedef long                    INT32;
typedef unsigned long           UINT32;
typedef float                   FLOAT32;
typedef long double             FLOAT64;

typedef union WordType
{
    WORD val;
    struct
    {
        BIT b0 : 1;
        BIT b1 : 1;
        BIT b2 : 1;
        BIT b3 : 1;
        BIT b4 : 1;
        BIT b5 : 1;
        BIT b6 : 1;
        BIT b7 : 1;
        BIT b8 : 1;
        BIT b9 : 1;
        BIT b10 : 1;
        BIT b11 : 1;
        BIT b12 : 1;
        BIT b13 : 1;
        BIT b14 : 1;
        BIT b15 : 1;
    }bits;
} WORDTYPE;


#define TestBit(Reg, n)                 ((Reg) & (1L << (n)))
#define SetBit(Reg, n)                  ((Reg) |= 1L << (n))
#define ClearBit(Reg, n)                ((Reg) &= ~(1L << (n)))

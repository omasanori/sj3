/*
 * Copyright (c) 1991-1994  Sony Corporation
 * 
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL SONY CORPORATION BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 * Except as contained in this notice, the name of Sony Corporation
 * shall not be used in advertising or otherwise to promote the sale, use
 * or other dealings in this Software without prior written authorization
 * from Sony Corporation.
 *
 */

/*
 * $SonyRCSfile: sj_typedef.h,v $  
 * $SonyRevision: 1.1 $ 
 * $SonyDate: 1994/06/03 08:01:22 $
 */



#ifndef	_SJ_TYPEDEF

#define	_SJ_TYPEDEF

#define	RECURS

#define	TFar
#define	Far
#define	Reg1	register
#define	Reg2	register
#define	Reg3	register
#define	Reg4	register
#define	Reg5	register
#define	Reg6	register
#define	Reg7	register
#define	Reg8	register

#define	Void	void
#define	Char	char
#define	Uchar	unsigned char
#define	Short	short
#define	Ushort	unsigned short
#define	Int	int
#define	Uint	unsigned int
#define	Long	long
#define	Ulong	unsigned long

typedef	Void	(*VFunc)();
typedef	Uchar	*(*UCPFunc)();
typedef	Int	(*IFunc)();


#include <sys/types.h>

typedef	Uchar	TypeGroup;
typedef	Uchar	TypeGram;
typedef	Ushort	TypeIdxOfs;
typedef	Short	TypeDicSeg;
typedef	Ushort	TypeDicOfs;
typedef	ino_t	TypeDicID;
typedef	Uchar	TypeCnct;
typedef	Ushort	TypeStyNum;
typedef	Uchar	TypeClass;
typedef	Uchar	TypeBunNum;

#ifndef	NULL
#	define	NULL	0
#endif

#endif


/*-
 * SPDX-License-Identifier: MIT-open-group
 *
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
 */





#include "sj_const.h"

#ifndef	_STRUCT_
#define	_STRUCT_



typedef struct kanji_rec {
	int	klen;			
	u_char	*kptr;			
	int	alen;			
	u_char	*aptr;			
	struct kanji_rec *knext;	
} KanjiRec;



typedef struct hinsi_rec {
	int	hinsi;			
	KanjiRec *krec;			
	struct hinsi_rec *hnext;	
} HinsiRec;



typedef struct douon_rec {
	u_char	*yptr;			
	int	dlen;			
	int	hrec_num;		
	HinsiRec *hrec;			
	struct douon_rec *dnext;	
} DouonRec;



typedef struct hindo_rec {
	int	klen;			
	u_char	*kptr;			
	int	exist;			
	int	hindo;			

	int	offset;			

	struct hindo_rec *anext;	
	struct assyuku_rec *arec;	
} HindoRec;



typedef struct assyuku_rec {
	int	len;			
	HindoRec *nrec;			
	struct assyuku_rec *anext;	
} AssyukuRec;



typedef struct offset_rec {
	int	klen;			
	u_char	*kptr;			
	int	offset;			
} OffsetRec;

#endif

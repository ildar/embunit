/*
 * COPYRIGHT AND PERMISSION NOTICE
 * 
 * Copyright (c) 2003 Embedded Unit Project
 * 
 * All rights reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining 
 * a copy of this software and associated documentation files (the 
 * "Software"), to deal in the Software without restriction, including 
 * without limitation the rights to use, copy, modify, merge, publish, 
 * distribute, and/or sell copies of the Software, and to permit persons 
 * to whom the Software is furnished to do so, provided that the above 
 * copyright notice(s) and this permission notice appear in all copies 
 * of the Software and that both the above copyright notice(s) and this 
 * permission notice appear in supporting documentation.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT 
 * OF THIRD PARTY RIGHTS. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR 
 * HOLDERS INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM, OR ANY 
 * SPECIAL INDIRECT OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER 
 * RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF 
 * CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN 
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 * 
 * Except as contained in this notice, the name of a copyright holder 
 * shall not be used in advertising or otherwise to promote the sale, 
 * use or other dealings in this Software without prior written 
 * authorization of the copyright holder.
 *
 * $Id: TestResult.h,v 1.1 2003/09/09 12:57:17 arms22 Exp $
 */
#ifndef	__TESTRESULT_H__
#define	__TESTRESULT_H__

#include "Test.h"
#include "TestListener.h"

#ifdef	__cplusplus
extern "C" {
#endif

/*typedef struct __TestResult		TestResult;*//* -> Test.h*/
/*typedef struct __TestResult*		TestResultRef;*//* -> Test.h*/

struct __TestResult {
	TestListnerImplementRef isa;
	unsigned short runCount;
	unsigned short failureCount;
	TestListnerRef listener;
};

void TestResult_init(TestResultRef self,TestListnerRef listner);

extern const TestListnerImplement TestResultImplement;

#define new_TestResult(listener)\
	{\
		(TestListnerImplementRef)&TestResultImplement,\
		0,\
		0,\
		(TestListnerRef)listener,\
	}

#ifdef	__cplusplus
}
#endif

#endif/*__TESTRESULT_H__*/
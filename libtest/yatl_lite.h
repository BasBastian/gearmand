/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 *
 *  Data Differential YATL (i.e. libtest)  library
 *
 *  Copyright (C) 2012 Data Differential, http://datadifferential.com/
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *      * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above
 *  copyright notice, this list of conditions and the following disclaimer
 *  in the documentation and/or other materials provided with the
 *  distribution.
 *
 *      * The names of its contributors may not be used to endorse or
 *  promote products derived from this software without specific prior
 *  written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#pragma once

#ifdef __cplusplus
# include <cstddef>
# include <cstdlib>
# include <cstring>
#else
# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include <string.h>
#endif

#ifndef EXIT_SKIP
# define EXIT_SKIP 77
#endif

static inline bool valgrind_is_caller(void)
{
  if (getenv("TESTS_ENVIRONMENT")  && strstr(getenv("TESTS_ENVIRONMENT"), "valgrind"))
  {
    return true;
  }

  return false;
}

#define TEST_TRUE(A) \
do \
{ \
  if (! (A)) { \
    fprintf(stderr, "\n%s:%d: Assertion \"%s\" failed, in %s\n", __FILE__, __LINE__, #A, __func__);\
    exit(EXIT_FAILURE); \
  } \
} while (0)

#define TEST_FALSE(A) \
do \
{ \
  if ((A)) { \
    fprintf(stderr, "\n%s:%d: Assertion failed %s, in %s\n", __FILE__, __LINE__, #A, __func__);\
    exit(EXIT_FAILURE); \
  } \
} while (0)
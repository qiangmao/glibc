/* Thread-local storage handling in the ELF dynamic linker.  S390 version.
   Copyright (C) 2003 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

#include <stdlib.h>
#include <sysdeps/generic/libc-tls.c>

#if USE_TLS

/* On s390, the literal pool entry that refers to __tls_get_offset
   is not removed, even if all branches that use the literal pool
   entry gets removed by TLS optimizations. To get binaries
   statically linked __tls_get_offset is defined here but
   aborts if it is used.  */

void *
__tls_get_offset (size_t m, size_t offset)
{
  abort ();
}

#endif

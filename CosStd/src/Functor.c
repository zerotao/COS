/*
 o---------------------------------------------------------------------o
 |
 | COS Functor
 |
 o---------------------------------------------------------------------o
 |
 | C Object System
 |
 | Copyright (c) 2006+ Laurent Deniau, laurent.deniau@cern.ch
 |
 | For more information, see:
 | http://cern.ch/laurent.deniau/cos.html
 |
 o---------------------------------------------------------------------o
 |
 | This file is part of the C Object System framework.
 |
 | The C Object System is free software; you can redistribute it and/or
 | modify it under the terms of the GNU Lesser General Public License
 | as published by the Free Software Foundation; either version 3 of
 | the License, or (at your option) any later version.
 |
 | The C Object System is distributed in the hope that it will be
 | useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 | of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 |
 | See <http://www.gnu.org/licenses> for more details.
 |
 o---------------------------------------------------------------------o
 |
 | $Id: Functor.c,v 1.20 2010/01/04 14:35:29 ldeniau Exp $
 |
*/

#include <cos/Functor.h>
#include <cos/gen/object.h>
#include <cos/gen/value.h>

makclass(Expression);

makclass(Functor, Expression);
makclass(FunArg , Expression);
makclass(FunVar , Expression);
makclass(FunLzy , Expression);

// ----- generics

defmethod(OBJ, gdeinit, FunExpr)
  retmethod(_1);
endmethod

defmethod(STR, gstr, FunExpr)
  retmethod(self->str);
endmethod


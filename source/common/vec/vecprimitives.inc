/*****************************************************************************
 * Copyright (C) 2013 x265 project
 *
 * Authors: Steve Borho <steve@borho.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111, USA.
 *
 * This program is also available under a commercial proprietary license.
 * For more information, contact us at licensing@multicorewareinc.com.
 *****************************************************************************/

#include "primitives.h"
#include "utils.h"

namespace x265 {
// private x265 namespace

void NAME(Setup_Vec_PixelPrimitives)(EncoderPrimitives&);      // pixel-ARCH.cpp
void NAME(Setup_Vec_IPredPrimitives)(EncoderPrimitives&);      // intra-ARCH.cpp
void NAME(Setup_Vec_IPFilterPrimitives)(EncoderPrimitives&);   // ipfilter-ARCH.cpp
void NAME(Setup_Vec_DCTPrimitives)(EncoderPrimitives&);        // dct-ARCH.cpp
void NAME(Setup_Vec_BlockCopyPrimitives)(EncoderPrimitives&);  // blockcopy-ARCH.cpp

/* initialize function table with functions compiled for this vector
 * architecture.  This is the only symbol exported from each file. */
void NAME(Setup_Vec_Primitives) (EncoderPrimitives &p)
{
    NAME(Setup_Vec_PixelPrimitives)(p);
    NAME(Setup_Vec_IPredPrimitives)(p);
    NAME(Setup_Vec_IPFilterPrimitives)(p);
    NAME(Setup_Vec_DCTPrimitives)(p);
    NAME(Setup_Vec_BlockCopyPrimitives)(p);
}
}

/*
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Sun designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Sun in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa Clara,
 * CA 95054 USA or visit www.sun.com if you need additional information or
 * have any questions.
 *
 */

/*
 *
 * (C) Copyright IBM Corp. 1998-2004 - All Rights Reserved
 *
 */

#ifndef __OPENTYPEUTILITIES_H
#define __OPENTYPEUTILITIES_H

#include "LETypes.h"
#include "OpenTypeTables.h"

class OpenTypeUtilities {
public:
    static le_int8 highBit(le_int32 value);
    static Offset getTagOffset(LETag tag, const TagAndOffsetRecord *records, le_int32 recordCount);
    static le_int32 getGlyphRangeIndex(TTGlyphID glyphID, const GlyphRangeRecord *records, le_int32 recordCount);
    static le_int32 search(le_uint16 value, const le_uint16 array[], le_int32 count);
    static le_int32 search(le_uint32 value, const le_uint32 array[], le_int32 count);
    static void sort(le_uint16 *array, le_int32 count);

private:
    OpenTypeUtilities() {} // private - forbid instantiation
};

#endif

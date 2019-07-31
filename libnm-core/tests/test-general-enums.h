/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright 2015 Red Hat, Inc.
 */

#ifndef _NM_TEST_GENERAL_ENUMS_H_
#define _NM_TEST_GENERAL_ENUMS_H_

typedef enum {
	NM_TEST_GENERAL_BOOL_ENUM_NO       = 0,
	NM_TEST_GENERAL_BOOL_ENUM_YES      = 1,
	NM_TEST_GENERAL_BOOL_ENUM_MAYBE    = 2,
	NM_TEST_GENERAL_BOOL_ENUM_UNKNOWN  = 3,
	NM_TEST_GENERAL_BOOL_ENUM_INVALID  = 4, /*< skip >*/
	NM_TEST_GENERAL_BOOL_ENUM_67       = 67,
	NM_TEST_GENERAL_BOOL_ENUM_46       = 64,
} NMTestGeneralBoolEnum;

typedef enum {
	NM_TEST_GENERAL_META_FLAGS_NONE    = 0,
	NM_TEST_GENERAL_META_FLAGS_FOO     = (1 << 0),
	NM_TEST_GENERAL_META_FLAGS_BAR     = (1 << 1),
	NM_TEST_GENERAL_META_FLAGS_BAZ     = (1 << 2),
	NM_TEST_GENERAL_META_FLAGS_0x8     = (1 << 3),
	NM_TEST_GENERAL_META_FLAGS_0x4     = (1 << 4),
} NMTestGeneralMetaFlags;

typedef enum {  /*< flags >*/
	NM_TEST_GENERAL_COLOR_FLAGS_WHITE  = 1, /*< skip >*/
	NM_TEST_GENERAL_COLOR_FLAGS_BLUE   = 2,
	NM_TEST_GENERAL_COLOR_FLAGS_RED    = 4,
	NM_TEST_GENERAL_COLOR_FLAGS_GREEN  = 8,
} NMTestGeneralColorFlags;

#endif /* _NM_TEST_GENERAL_ENUMS_H_ */

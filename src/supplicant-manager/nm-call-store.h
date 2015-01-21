/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/* NetworkManager -- Network link manager
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
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * (C) Copyright 2007 Novell, Inc.
 */

#ifndef __NETWORKMANAGER_CALLBACK_STORE_H__
#define __NETWORKMANAGER_CALLBACK_STORE_H__

#include <glib-object.h>
#include <dbus/dbus-glib.h>

typedef GHashTable NMCallStore;

NMCallStore *nm_call_store_new     (void);
void         nm_call_store_add     (NMCallStore *store,
									DBusGProxy *proxy,
									DBusGProxyCall *call);

void         nm_call_store_remove  (NMCallStore *store,
									DBusGProxy *proxy,
									DBusGProxyCall *call);

void         nm_call_store_clear   (NMCallStore *store);
void         nm_call_store_destroy (NMCallStore *store);

#endif /* __NETWORKMANAGER_CALLBACK_STORE_H__ */

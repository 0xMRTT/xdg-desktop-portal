/*
 * Copyright © 2014 Red Hat, Inc
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *       Alexander Larsson <alexl@redhat.com>
 */

#ifndef __FLATPAK_UTILS_H__
#define __FLATPAK_UTILS_H__

#include <gio/gio.h>

void  flatpak_invocation_lookup_app_id (GDBusMethodInvocation *invocation,
                                        GCancellable          *cancellable,
                                        GAsyncReadyCallback    callback,
                                        gpointer               user_data);

char *flatpak_invocation_lookup_app_id_finish (GDBusMethodInvocation *invocation,
                                               GAsyncResult          *result,
                                               GError               **error);

void  flatpak_connection_lookup_app_id (GDBusConnection       *connection,
                                        const char            *sender,
                                        GCancellable          *cancellable,
                                        GAsyncReadyCallback    callback,
                                        gpointer               user_data);

char *flatpak_connection_lookup_app_id_finish (GDBusConnection  *connection,
                                               GAsyncResult     *result,
                                               GError          **error);

void  flatpak_connection_track_name_owners (GDBusConnection *connection);


#endif /* __FLATPAK_UTILS_H__ */

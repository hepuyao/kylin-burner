/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */
/*
 * Libburner-media
 * Copyright (C) Philippe Rouquier 2005-2009 <bonfire-app@wanadoo.fr>
 *
 * Libburner-media is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * The Libburner-media authors hereby grant permission for non-GPL compatible
 * GStreamer plugins to be used and distributed together with GStreamer
 * and Libburner-media. This permission is above and beyond the permissions granted
 * by the GPL license by which Libburner-media is covered. If you modify this code
 * you may extend this exception to your version of the code, but you are not
 * obligated to do so. If you do not wish to do so, delete this exception
 * statement from your version.
 * 
 * Libburner-media is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */
 
#ifndef _BURN_MEDIA_PRIV_H_
#define _BURN_MEDIA_PRIV_H_

#include <glib.h>

#include "burner-media.h"

G_BEGIN_DECLS

/**
 * These functions will be exposed when the burn backend will be split
 */

GSList *
burner_media_get_all_list (BurnerMedia type);


/**
 * For internal debugging purposes
 */

void
burner_media_library_set_debug (gboolean value);

void
burner_media_to_string (BurnerMedia media,
			 gchar *string);

#define BURNER_MEDIA_LOG(format, ...)				\
	burner_media_message (G_STRLOC,			\
			       format,				\
			       ##__VA_ARGS__);

void
burner_media_message (const gchar *location,
		       const gchar *format,
		       ...);

G_END_DECLS

#endif /* _BURN_MEDIA_PRIV_H_ */

 

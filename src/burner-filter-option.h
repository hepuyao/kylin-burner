/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */
/*
 * burner
 * Copyright (C) Philippe Rouquier 2005-2008 <bonfire-app@wanadoo.fr>
 * 
 *  Burner is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 * 
 * burner is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with burner.  If not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */

#ifndef _BURNER_FILTER_OPTION_H_
#define _BURNER_FILTER_OPTION_H_

#include <glib-object.h>

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define BURNER_TYPE_FILTER_OPTION             (burner_filter_option_get_type ())
#define BURNER_FILTER_OPTION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), BURNER_TYPE_FILTER_OPTION, BurnerFilterOption))
#define BURNER_FILTER_OPTION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), BURNER_TYPE_FILTER_OPTION, BurnerFilterOptionClass))
#define BURNER_IS_FILTER_OPTION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BURNER_TYPE_FILTER_OPTION))
#define BURNER_IS_FILTER_OPTION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), BURNER_TYPE_FILTER_OPTION))
#define BURNER_FILTER_OPTION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), BURNER_TYPE_FILTER_OPTION, BurnerFilterOptionClass))

typedef struct _BurnerFilterOptionClass BurnerFilterOptionClass;
typedef struct _BurnerFilterOption BurnerFilterOption;

struct _BurnerFilterOptionClass
{
	GtkBoxClass parent_class;
};

struct _BurnerFilterOption
{
	GtkBox parent_instance;
};

GType burner_filter_option_get_type (void) G_GNUC_CONST;

GtkWidget *
burner_filter_option_new (void);

G_END_DECLS

#endif /* _BURNER_FILTER_OPTION_H_ */

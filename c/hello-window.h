#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define HELLO_TYPE_WINDOW (hello_window_get_type())

G_DECLARE_FINAL_TYPE (HelloWindow, hello_window, HELLO, WINDOW, GtkWindow)

G_END_DECLS

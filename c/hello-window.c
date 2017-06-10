#include <gtk/gtk.h>

#include "hello-window.h"

struct _HelloWindow
{
  GtkWindow     parent_instance;
  GtkHeaderBar *header_bar;
  GtkLabel     *label;
};

G_DEFINE_TYPE (HelloWindow, hello_window, GTK_TYPE_WINDOW)

static void
hello_window_class_init (HelloWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/hello/hello-window.ui");
  gtk_widget_class_bind_template_child (widget_class, HelloWindow, label);
}

static void
hello_window_init (HelloWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}

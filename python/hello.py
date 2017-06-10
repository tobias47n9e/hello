#!/usr/bin/env python

import gi
import sys

gi.require_version('Gtk', '3.0')

from gi.repository import Gio
from gi.repository import Gtk

def create_window(app):
    # TODO: Once PyGObject supports Gtk templates, use that
    win = Gtk.Window(application=app, default_width=600, default_height=300)
    headerbar = Gtk.HeaderBar(visible=True, show_close_button=True, title='Hello, World!')
    win.set_titlebar(headerbar)
    label = Gtk.Label(visible=True, label='Hello, World!')
    win.add(label)
    return win

def on_activate(app):
    win = app.get_active_window()
    if win is None:
        win = create_window(app)
    win.present()

if __name__ == '__main__':
    app = Gtk.Application.new('com.example.Hello', Gio.ApplicationFlags.FLAGS_NONE)
    app.connect('activate', on_activate)
    sys.exit(app.run())

#!/usr/bin/env lua

local lgi = require 'lgi'
local Gtk = lgi.require('Gtk')

local window = Gtk.Window {
    title = 'Hello World!',
    default_width = 400,
    default_height = 300,
    on_destroy = Gtk.main_quit
}

local label = Gtk.Label({label='Hello World!'})

window:add(label)

window:show_all()
Gtk.main()


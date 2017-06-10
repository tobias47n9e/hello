#!/usr/bin/env ruby

# TODO: Use GtkApplication
# TODO: Use gtk template ui file

require 'gtk3'

class HelloWindow < Gtk::Window
  def initialize
    super

    set_title "Hello, World!"
    set_default_size 600, 300

    headerbar = Gtk::HeaderBar.new
    headerbar.set_show_close_button(true)
    headerbar.set_title("Hello, World!")

    label = Gtk::Label.new
    label.set_markup "<span size='larger' weight='bold'>Hello, World!</span>"
    add(label)
    label.show

  end
end

win = HelloWindow.new
win.signal_connect "destroy" do
  Gtk.main_quit
end
win.present
Gtk.main

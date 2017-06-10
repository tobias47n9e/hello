all: hello

PKGS = gtk+-3.0 gio-2.0
VALA_PKGS = $(foreach pkg,$(PKGS),--pkg=$(pkg))

SOURCES = main.vala

resources.c: hello.gresources.xml $(shell glib-compile-resources --generate-dependencies hello.gresources.xml)
	glib-compile-resources hello.gresources.xml --generate-source --target=resources.c --c-name hello ;

hello: $(SOURCES) resources.c hello.gresources.xml $(shell glib-compile-resources --generate-dependencies hello.gresources.xml)
	valac --target-glib=2.50 --gresources=hello.gresources.xml $(VALA_PKGS) main.vala -C ; \
	gcc -g -o $@ $(shell pkg-config --cflags --libs $(PKGS)) main.c resources.c

clean:
	rm -f hello main.c resources.c

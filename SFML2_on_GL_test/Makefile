OBJDIR := obj
OBJS := $(addprefix $(OBJDIR)/,SFML2_on_GL.o myGL.o)
CPPFLAGS := -I/usr/include -I../gwen/include
DEFS :=
LDLIBS := -lGLEW -lGL -L. -Wl,-rpath,. -lgwen -lsfml-window -lsfml-system -lsfml-graphics

$(OBJDIR)/%.o : %.cpp
	$(COMPILE.cc) $(CPPFLAGS) $(OUTPUT_OPTION) $<

.PHONY: all
all: init $(OBJS)
	g++ ${OBJS} ../gwen/Renderers/SFML2/SFML2.cpp ../gwen/lib/linux/gmake/libunittest.a $(CPPFLAGS) $(DEFS) -o SFML2_on_GL $(LDLIBS)

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

.ONESHELL:
init:
	cd ../gwen/Projects
	@./Build.sh
	cd ../../SFML2_on_GL_test
	cp ../gwen/Samples/SFML2/SFML2.cpp ./SFML2_on_GL.cpp
	patch -R SFML2_on_GL.cpp <patch.txt
	cp ../gwen/lib/linux/gmake/libgwen.so .
	cp ../gwen/bin/DefaultSkin.png .
	cp ../gwen/bin/OpenSans.ttf .

clean:
	rm -rf $(OBJS)
	rm -f libgwen.so
	rm -f DefaultSkin.png
	rm -f OpenSans.ttf
	rm -f SFML2_on_GL.cpp
	rm -f SFML2_on_GL
	rmdir $(OBJDIR)

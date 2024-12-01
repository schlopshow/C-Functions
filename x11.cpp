// @ Nir Lichtman https://www.youtube.com/watch?v=d2E7ryHCK08

#include <X11/Xlib.h>

int main() {
    XEvent event;
    Display* display = XOpenDisplay(NULL);
    Window w = XCreateSimpleWindow(display, DefaultRootWindow(display), 50,50,250,250,1, BlackPixel(display, 0), WhitePixel(display,0));
    XMapWindow(display, w);
    XSelectInput(display, w, ExposureMask);

    for(;;) {
      XNextEvent(display, &event);
      if (event.type == Expose) {
        XDrawString(display,w, DefaultGC(display, 0), 10, 100, "bingus", 6);
      }
    }
    return 0;
}

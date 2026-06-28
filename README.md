# listboard

A simple kanban board written in C and OpenGL

## Building
Only Desktop and Web is supported.

### Desktop (Linux)
```
CC=clang CXX=clang++ meson setup bin/desktop-debug
meson compile -C bin/desktop-debug
```

### Web (Emscripten)
Source emsdk first, then:
```
meson setup bin/web-debug --cross-file cross/emscripten.ini
meson compile -C bin/web-debug
```

/**
 * On a Linux X64 machine with glibc, compile this file with these commands:
     gcc -Wall -Os -s -nostartfiles \
                      -Wl,-z,norelro \
                      -Wl,--build-id=none \
                      -fno-asynchronous-unwind-tables \
                      -fno-ident \
                      -o detect-linux-x64-gcc \
                      detect-linux-x64-gcc.c
     strip -S --strip-unneeded \
              --remove-section=.got \
              --remove-section=.got.plt \
              --remove-section=.plt \
              --remove-section=.eh_frame \
              --remove-section=.gnu.hash \
              --remove-section=.gnu.version \
              detect-linux-x64-gcc
 */

void exit(int);
int _start() { exit(42); }

// COLOR SCHEME TEST "molokai/molokai.tmTheme" "C"

        // This indented comment is to the preceding whitespace.
// ^ fg=#f8f8f2 bg=#1b1d1e fs=

    // x
//  ^^^^ fg=#7e8e91 fs=

#include <windows.h>
// ^ fg=#a6e22e fs=
//       ^^^^^^^^^^^ fg=#e6db74 fs=

#define UNICODE
// ^ fg=#c4be89 fs=italic
//      ^ fg=#c4be89 fs=italic

#define CONST0 1 // x
// ^ fg=#c4be89 fs=italic
//      ^ fg=#c4be89 fs=italic
//             ^ fg=#ae81ff fs=
//               ^^^^ fg=#7e8e91 fs=

bool x = true;
// ^ fg=#66d9ef fs=
//   ^ fg=#f8f8f2 fs=
//     ^ fg=#f92672 fs=
//       ^^^^ fg=#ae81ff fs=bold
//           ^ fg=#f8f8f2 fs=

int x() {}
//^ fg=#66d9ef fs=
//  ^ fg=#f8f8f2 fs=
//   ^^ fg=#f8f8f2 fs=
//      ^^ fg=#f8f8f2 fs=

typedef int myint;
// ^ fg=#66d9ef fs=
//      ^ fg=#66d9ef fs=
//          ^ fg=#f8f8f2 fs=
//               ^ fg=#f8f8f2 fs=

typedef struct mystruct {
// ^ fg=#66d9ef fs=
//      ^ fg=#66d9ef fs=
//             ^ fg=#f8f8f2 fs=
//                      ^ fg=#f8f8f2 fs=
    } mystruct;
//  ^ fg=#f8f8f2 fs=
//    ^ fg=#f8f8f2 fs=
//            ^ fg=#f8f8f2 fs=


struct point
// ^ fg=#66d9ef fs=
//     ^ fg=#f8f8f2 fs=
{
    int x;
//  ^ fg=#66d9ef fs=
//      ^ fg=#f8f8f2 fs=
//       ^ fg=#f8f8f2 fs=
    int y;
//  ^ fg=#66d9ef fs=
//      ^ fg=#f8f8f2 fs=
//       ^ fg=#f8f8f2 fs=
}

struct foo **alloc_foo();
// ^ fg=#66d9ef fs=
//     ^ fg=#f8f8f2 fs=
//         ^^ fg=#f92672 fs=
//           ^ fg=#f8f8f2 fs=
//                    ^^^ fg=#f8f8f2 fs=

scanf("%ms %as %*[, ]", &buf);
// ^ fg=#f8f8f2 fs=
//   ^ fg=#f8f8f2 fs=
//    ^ fg=#e6db74 fs=
//     ^^^ fg=#f92672 fs=bold
//         ^^^ fg=#f92672 fs=bold
//             ^^^^ fg=#f92672 fs=bold
//                  ^ fg=#f92672 fs=bold
//                   ^ fg=#e6db74 fs=
//                    ^ fg=#f8f8f2 fs=
//                      ^ fg=#f92672 fs=
//                       ^^^^^ fg=#f8f8f2 fs=

int main(int argc, char **argv) {
//  ^^^^^ fg=#f8f8f2 fs=
//       ^^^ fg=#66d9ef fs=
//           ^^^^ fg=#fd971f fs=
//               ^ fg=#f8f8f2 fs=
//                 ^^^^ fg=#66d9ef fs=
//                      ^^ fg=#f92672 fs=
//                        ^^^^ fg=#fd971f fs=
//                            ^ fg=#f8f8f2 fs=
//                              ^ fg=#f8f8f2 fs=

    int speed = 0, speed1 = 0, speed2 = 0;
    //^ fg=#66d9ef fs=
    //  ^ fg=#f8f8f2 fs=
    //        ^ fg=#f92672 fs=
    //          ^ fg=#ae81ff fs=
    //           ^ fg=#f8f8f2 fs=
    //             ^ fg=#f8f8f2 fs=
    //                    ^ fg=#f92672 fs=
    //                      ^ fg=#ae81ff fs=
    //                       ^ fg=#f8f8f2 fs=
    //                         ^ fg=#f8f8f2 fs=
    //                                ^ fg=#f92672 fs=
    //                                  ^ fg=#ae81ff fs=
    //                                   ^ fg=#f8f8f2 fs=

    printf("Set Mouse Speed by Maverick\n");
    // ^ fg=#a6e22e fs=
    //     ^^ fg=#e6db74 fs=
    //                                 ^^ fg=#f92672 fs=bold
    //                                   ^ fg=#e6db74 fs=

    SystemParametersInfo(SPI_GETMOUSESPEED, 0, &speed, 0);
    // ^ fg=#f8f8f2 fs=
    //                  ^^^^^^^^^^^^^^^^^^^ fg=#f8f8f2 fs=
    //                                      ^ fg=#ae81ff fs=
    //                                       ^ fg=#f8f8f2 fs=
    //                                         ^ fg=#f92672 fs=
    //                                          ^^^^^^ fg=#f8f8f2 fs=
    //                                                 ^ fg=#ae81ff fs=
    //                                                  ^^ fg=#f8f8f2 fs=

    printf("Current speed: %2d\n", speed);
    // ^ fg=#a6e22e fs=
    //     ^^ fg=#e6db74 fs=
    //                     ^^^ fg=#f92672 fs=bold
    //                        ^^ fg=#f92672 fs=bold
    //                          ^ fg=#e6db74 fs=
    //                             ^^^^^^^ fg=#f8f8f2 fs=

    if (argc == 1) return 0;
//  ^ fg=#f92672 fs=bold
    //       ^^ fg=#f92672 fs=
    //          ^ fg=#ae81ff fs=
    //             ^ fg=#f92672 fs=bold
    //                    ^ fg=#ae81ff fs=

    if (argc >= 2) sscanf(argv[1], "%d", &speed1);
//  ^ fg=#f92672 fs=bold
    //       ^^ fg=#f92672 fs=
    //          ^ fg=#ae81ff fs=
    //             ^ fg=#a6e22e fs=
    //                         ^ fg=#ae81ff fs=
    //                              ^^ fg=#f92672 fs=bold

    if (argc >= 3) sscanf(argv[2], "%d", &speed2);
//  ^ fg=#f92672 fs=bold
    //       ^^ fg=#f92672 fs=
    //          ^ fg=#ae81ff fs=
    //             ^ fg=#a6e22e fs=
    //                         ^ fg=#ae81ff fs=
    //                              ^^ fg=#f92672 fs=bold

    if (argc == 2) // set speed to first value
//  ^ fg=#f92672 fs=bold
    //       ^^ fg=#f92672 fs=
    //          ^ fg=#ae81ff fs=
        speed = speed1;
        //    ^ fg=#f92672 fs=
    else if (speed == speed1 || speed == speed2) // alternate
    // ^ fg=#f92672 fs=bold
    //   ^ fg=#f92672 fs=bold
    //             ^^ fg=#f92672 fs=
    //                       ^^ fg=#f92672 fs=
    //                                ^^ fg=#f92672 fs=
        speed = speed1 + speed2 - speed;
        //    ^ fg=#f92672 fs=
        //             ^ fg=#f92672 fs=
        //                      ^ fg=#f92672 fs=
    else
    // ^ fg=#f92672 fs=bold
        speed = speed1;  // start with first value

    SystemParametersInfo(SPI_SETMOUSESPEED, 0,  speed, 0);
    // ^ fg=#f8f8f2 fs=
    //                                      ^ fg=#ae81ff fs=
    //                                                 ^ fg=#ae81ff fs=

    SystemParametersInfo(SPI_GETMOUSESPEED, 0, &speed, 0);
    // ^ fg=#f8f8f2 fs=
    //                                      ^ fg=#ae81ff fs=
    //                                                 ^ fg=#ae81ff fs=

    printf("New speed: %2d\n", speed);
    // ^ fg=#a6e22e fs=
    //     ^^ fg=#e6db74 fs=
    //                 ^^^^^ fg=#f92672 fs=bold
    //                      ^ fg=#e6db74 fs=

    return 0;
    // ^ fg=#f92672 fs=bold
    //     ^ fg=#ae81ff fs=
}

int foo(int a, float b[])
//      ^ fg=#66d9ef fs=
//          ^ fg=#fd971f fs=
//           ^ fg=#f8f8f2 fs=
//             ^ fg=#66d9ef fs=
//                   ^ fg=#fd971f fs=
//                    ^^^ fg=#f8f8f2 fs=
{
    myClass *result;
    // ^ fg=#f8f8f2 fs=
    //      ^ fg=#f92672 fs=
    //       ^ fg=#f8f8f2 fs=
    //             ^ fg=#f8f8f2 fs=

    result->kk = func(val);
    // ^^^^^^^ fg=#f8f8f2 fs=
    //         ^ fg=#f92672 fs=
    //           ^^^^ fg=#f8f8f2 fs=
    //               ^^^^^^ fg=#f8f8f2 fs=

    if (result == 0) {
    // ^^^^^^^ fg=#f8f8f2 fs=
    //         ^^ fg=#f92672 fs=
    //            ^ fg=#ae81ff fs=
    //             ^ fg=#f8f8f2 fs=
        return 0;
        // ^ fg=#f92672 fs=bold
        //     ^ fg=#ae81ff fs=
        //      ^ fg=#f8f8f2 fs=
#if CROSS_SCOPE_MACRO
//^ fg=#a6e22e fs=bold
//  ^ fg=#a6e22e fs=bold
    } else if (result > 0) {
    // ^ fg=#f92672 fs=bold
    //     ^ fg=#f92672 fs=bold
        return 1;
#endif
// ^ fg=#a6e22e fs=bold
    }
}

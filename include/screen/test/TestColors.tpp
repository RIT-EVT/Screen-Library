#ifndef _EVT_TEST_PATTERNS_HPP_
#define _EVT_TEST_PATTERNS_HPP_

#include <screen/DisplayDriver.hpp>


// Define standard colors for test patterns per color space.
namespace Colors::BGR_24 {
    constexpr ScreenLibrary::BGR_24 white   = { .blue = 255, .green = 255, .red = 255 };
    constexpr ScreenLibrary::BGR_24 yellow  = { .blue = 0,   .green = 255, .red = 255 };
    constexpr ScreenLibrary::BGR_24 cyan    = { .blue = 255, .green = 255, .red = 0   };
    constexpr ScreenLibrary::BGR_24 green   = { .blue = 0,   .green = 255, .red = 0   };
    constexpr ScreenLibrary::BGR_24 magenta = { .blue = 255, .green = 0,   .red = 255 };
    constexpr ScreenLibrary::BGR_24 red     = { .blue = 0,   .green = 0,   .red = 255 };
    constexpr ScreenLibrary::BGR_24 blue    = { .blue = 255, .green = 0,   .red = 0   };
}

#endif

#ifndef TEST_PATTERNS_HPP
#define TEST_PATTERNS_HPP

#include <DisplayDriver.hpp>

namespace ScreenLibrary::TestPatterns {

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

/// SMPTE ECR 1-1978 (SDTV), https://en.wikipedia.org/wiki/SMPTE_color_bars#SMPTE_ECR_1-1978_.28SDTV.29
template<class Color>
class SMPTE_ECR {
public:
    SMPTE_ECR(Color white, Color yellow, Color cyan, Color green, Color magenta, Color red, Color blue);

    void draw(Driver::DisplayDriver<Color>* driver);
private:
    Color white;
    Color yellow;
    Color cyan;
    Color green;
    Color magenta;
    Color red;
    Color blue;
};
} // namespace Screen::TestPatterns
#endif // TEST_PATTERNS_HPP

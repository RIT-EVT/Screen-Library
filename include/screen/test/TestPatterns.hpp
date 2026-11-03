#ifndef _EVT_TEST_PATTERNS_HPP_
#define _EVT_TEST_PATTERNS_HPP_

#include <screen/DisplayDriver.hpp>

#ifdef EVT_SCREEN_LIBRARY_TEST_PATTERN_ENABLE
namespace ScreenLibrary::TestPatterns {

/// SMPTE ECR 1-1978 (SDTV), https://en.wikipedia.org/wiki/SMPTE_color_bars#SMPTE_ECR_1-1978_.28SDTV.29
template<class Color>
class SMPTE_ECR {
public:
    SMPTE_ECR(Color black, Color white, Color yellow, Color cyan, Color green, Color magenta, Color red, Color blue);

    void draw(Driver::DisplayDriver<Color>* driver);
private:
    Color black;
    Color white;
    Color yellow;
    Color cyan;
    Color green;
    Color magenta;
    Color red;
    Color blue;
};
} // namespace Screen::TestPatterns

#include <template/test/TestPatterns.tpp>
#endif // EVT_SCREEN_LIBRARY_TEST_PATTERN_ENABLE
#endif // _EVT_TEST_PATTERNS_HPP_
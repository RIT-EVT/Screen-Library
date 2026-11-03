#ifndef _EVT_TEST_PATTERNS_TPP_
#define _EVT_TEST_PATTERNS_TPP_

#include <screen/test/TestPatterns.hpp>
#include <screen/DisplayDriver.hpp>

#ifdef EVT_SCREEN_LIBRARY_TEST_PATTERN_ENABLE
namespace ScreenLibrary::TestPatterns {

template<class Color>
SMPTE_ECR<Color>::SMPTE_ECR(Color black, Color white, Color yellow, Color cyan, Color green, Color magenta, Color red, Color blue) {
    this->black = black;
    this->white = white;
    this->yellow = yellow;
    this->cyan = cyan;
    this->green = green;
    this->magenta = magenta;
    this->red = red;
    this->blue = blue;
}

template<class Color>
void SMPTE_ECR<Color>::draw(Driver::DisplayDriver<Color>* driver) {
    const uint16_t width = driver->getWidth();
    const uint16_t height = driver->getHeight();

    // Draw the colors at the top of the test pattern.
    const uint16_t topBarWidth = width / 7;
    const uint16_t topBarHeight = (height / 3) * 2;

    const Color topColors[7] = { white, yellow, cyan, green, magenta, red, blue };

    for (uint8_t i = 0; i < 7; i++) {
        driver->fillRect(topColors[i], i * topBarWidth, 0, topBarWidth, topBarHeight);
    }

    // Draw bottom black bar.
    const uint16_t bottomBarHeight = (height / 3);

    driver->fillRect(black, 0, topBarHeight, width, bottomBarHeight);
}

}
#endif // EVT_SCREEN_LIBRARY_TEST_PATTERN_ENABLE
#endif // _EVT_TEST_PATTERNS_TPP_
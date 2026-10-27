#include <TestPatterns.hpp>

namespace ScreenLibrary::TestPatterns {
// MARK: SMPTE_ECR
template<class Color>
SMPTE_ECR<Color>::SMPTE_ECR(Color white, Color yellow, Color cyan, Color green, Color magenta, Color red, Color blue) {
    this->white = white;
    this->yellow = yellow;
    this->cyan = cyan;
    this->green = green;
    this->magenta = magenta;
    this->red = red;
    this->blue = blue;
}

template<class Color>
void SMPTE_ECR<Color>::draw(ScreenLibrary::Driver::DisplayDriver<Color>* driver) {
    const uint16_t width = driver->getWidth();
    const uint16_t height = driver->getHeight();

    // Draw the colors at the top of the test pattern.
    const uint16_t topBarWidth = width / 7;
    const uint16_t topBarHeight = (height / 3) * 2;

    const Color topColors[7] = { white, yellow, cyan, magenta, green, red, blue };

    for (uint8_t i = 0; i < 7; i++) {
        driver->fillRect(topColors[i], i * topBarWidth, 0, topBarWidth, topBarHeight);
    }

    // Draw
}

}
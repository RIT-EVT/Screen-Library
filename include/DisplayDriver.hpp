#ifndef DISPLAY_DRIVER_SHAPE_HPP
#define DISPLAY_DRIVER_SHAPE_HPP

#include <Color.hpp>
#include <cstdint>

namespace ScreenLibrary::Driver {
class DisplayDriver {
public:
    virtual ~DisplayDriver() = default;

    virtual uint16_t getWidth() = 0;
    virtual uint16_t getHeight() = 0;

    virtual void setPixel(ScreenLibrary::RGBA color, uint16_t x, uint16_t y) = 0;
    virtual void fillRect(ScreenLibrary::RGBA color, uint16_t x, uint16_t y, uint16_t width, uint16_t height) = 0;

    virtual void clear(uint16_t x, uint16_t y) = 0;
    virtual void clearRect(uint16_t x, uint16_t y, uint16_t width, uint16_t height) = 0;
};

class BufferedDisplayDriver : DisplayDriver {
    /**
     * Flush the current buffer to the actual display. Internally should interface with a ``Display
     */
    virtual void flush() = 0;
};
} // namespace Screen::Driver
#endif // _EVT_DISPLAY_DRIVER_HPP_

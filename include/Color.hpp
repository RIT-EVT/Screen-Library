#ifndef _EVT_RGBA_HPP_
#define _EVT_RGBA_HPP_
#include <cstdint>

namespace ScreenLibrary {
typedef struct __attribute__((packed)) {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t alpha;
} RGBA_32;

typedef struct __attribute__((packed)) {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} RGB_24;

typedef union __attribute__((packed)) {
    uint16_t value;

    struct {
        uint16_t red: 5;
        uint16_t green: 6;
        uint16_t blue: 5;
    };
} RGB_16;

typedef struct {
    uint8_t value;
} BW_8;
}

#endif // _EVT_RGBA_HPP_

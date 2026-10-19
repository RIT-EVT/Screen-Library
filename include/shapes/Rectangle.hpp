#ifndef BOX_RGBA_HPP
#define BOX_RGBA_HPP
#include <shapes/Shape.h>
#include <Color.hpp>

namespace ScreenLibrary {
    class Rectangle: Shape {
    public:
        uint16_t getX() override;
        void setX(uint16_t x) override;

        uint16_t getY() override;
        void setY(uint16_t y) override;

        uint16_t getWidth() override;
        void setWidth(uint16_t width) override;

        uint16_t getHeight() override;
        void setHeight(uint16_t height) override;

        RGBA getFill() override;
        void setFill(RGBA color) override;

        RGBA getStroke() override;
        void setStroke(RGBA color) override;

        explicit Rectangle(int x, int y, int width, int height, RGBA fill, RGBA stroke);

        void draw(Driver::DisplayDriver& display) override;
    private:
        int x;
        int y;

        int width;
        int height;

        RGBA fill;
        RGBA stroke;
    };
}
#endif

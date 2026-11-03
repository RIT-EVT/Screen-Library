#ifndef _EVT_BOX_RGBA_HPP_
#define _EVT_BOX_RGBA_HPP_
#include <screen/shapes/Shape.hpp>

namespace ScreenLibrary {
    template<class Color>
    class Rectangle: Shape<Color> {
    public:
        uint16_t getX() override;
        void setX(uint16_t x) override;

        uint16_t getY() override;
        void setY(uint16_t y) override;

        uint16_t getWidth() override;
        void setWidth(uint16_t width) override;

        uint16_t getHeight() override;
        void setHeight(uint16_t height) override;

        Color getFill() override;
        void setFill(Color color) override;

        Color getStroke() override;
        void setStroke(Color color) override;

        explicit Rectangle(int x, int y, int width, int height, Color fill, Color stroke);

        void draw(Driver::DisplayDriver<Color>& display) override;
    private:
        int x;
        int y;

        int width;
        int height;

        Color fill;
        Color stroke;
    };
}
#endif

#include "template/shapes/Rectangle.tpp"
#include "pch.h"

namespace Arc {
    class ARC_API Unit {
        public:
            Unit(const std::string & image, ScreenCoord coords);
            Unit(std::string && image, ScreenCood coords);

            int GetWidth() const;
            int GetHeight() const;

            ScreenCoords GetCoords() const;
            void SetCoords(ScreenCoords newCoords);

            void UpdateXCoord(int amount);
            void UpdateYCoord(int amount);

        private:
            Image mImage;
            ScreenCoord mPosition;

            friend class Renderer;
            friend bool UnitsOverlap(const Unit& a, const Unit& b);
    };
}
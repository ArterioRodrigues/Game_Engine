
#include "./Unit.h"

namespace Arc{
    bool UnitsOverlap(const Unit& a, const Unit& b){
        int left_a{ a.mPosition.xCoord };
        int right_a{ a.mPosition.xCoord + a.Image.GetWidth()};
        int left_b{ b.mPosition.xCoord };
        int right_b{ b.mPosition.xCoord + b.mImage.GetWidth() };

        bool x_intersection{ (left_a <= left_b  and left_b <= right_a) or (left_b <= left_a and left_a <= left_b)};

        int bot_a{ a.mPosition.yCoord };


    }
}
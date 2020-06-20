#ifndef __PLANETSURFACE_H
#define __PLANETSURFACE_H

#include <jsoncpp/json/json.h>
#include "olcPixelGameEngine.h"
#include "helperfunctions.h"
//#include "planet.h"

class Planet;

class PlanetSurface {
public:
    std::vector<int> tiles;
    
    PlanetSurface();
    PlanetSurface(Planet * p);
    PlanetSurface(Json::Value root);

    void drawTile(int ax, int ay, int thing, olc::PixelGameEngine * e, CamParams trx, Planet * p);
    void draw(olc::PixelGameEngine * e, CamParams trx, Planet * p);
    olc::Pixel getTint(int x, int y, Planet * p);

};

#endif
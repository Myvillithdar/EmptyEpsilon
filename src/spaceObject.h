#ifndef SPACE_OBJECT_H
#define SPACE_OBJECT_H

#include "engine.h"

class SpaceObject;
extern PVector<SpaceObject> spaceObjectList;
class SpaceObject : public Collisionable, public MultiplayerObject
{
public:
    SpaceObject(float collisionRange, string multiplayerName);
    
    virtual void draw3D();
    virtual void drawRadar(sf::RenderTarget& window, sf::Vector2f position, float scale);
};

class NebulaInfo
{
public:
    sf::Vector3f vector;
    std::string textureName;
};
extern std::vector<NebulaInfo> nebulaInfo;
void randomNebulas();

#endif//SPACE_OBJECT_H

#pragma once
#include "PVRShell/PVRShell.h"
#include "PVRUtils/PVRUtilsGles.h"

class Triangle
{
protected:
    // VBO handle
    uint32_t _vbo;

    // Texture handle
    uint32_t _texture;

    // MVP Matrix location
    uint32_t _mvp;
    uint32_t _mv;
    uint32_t _mvit;
    uint32_t _l;
    uint32_t _lmvp;

    uint32_t _nVertex;

    // Matrix for the Model position
    glm::mat4 _position;

    // Matrix for the Model rotation
    glm::mat4 _rotation;

public:
    Triangle(void);
    ~Triangle(void);

    void Update(float angle);
    bool Init(pvr::Shell *shell, uint32_t* mvpLoc);
    void Render(glm::mat4 view, glm::mat4 projection, glm::mat4 light);
    void SetPosition(float x, float y, float z);
};

class Cube : public Triangle
{
public:
    bool Init(pvr::Shell *shell, uint32_t* mvpLoc);
};

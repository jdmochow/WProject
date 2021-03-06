#pragma once

#include <SDL.h>
#include <string>
#include <memory>

#include "Transform.h"
#include "Animation.h"

class Renderable {
    TransformPtr transform;
    AnimationPtr animation;
    std::string textureName;

    explicit Renderable(const Renderable&);
    explicit Renderable(const std::string textureName, TransformPtr transform);

    public:
        static std::shared_ptr<Renderable> create(const std::string textureName = "default.bmp", TransformPtr transform = nullptr, AnimationPtr animation = nullptr);
        std::string getTextureName() const;
        SDL_Rect* getSrc() const;
        SDL_Rect* getDst() const;
        double getAngle() const;
        SDL_Point* getRotateCenter() const;
};

typedef std::shared_ptr<Renderable> RenderablePtr;

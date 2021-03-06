#pragma once

#include <SDL.h>
#include <vector>

using namespace std;

struct WindowListener {

        static vector<WindowListener*> windowListeners;

        WindowListener();
        virtual ~WindowListener();

        virtual void OnInputFocus();

        virtual void OnInputBlur();

        virtual void OnMouseFocus();

        virtual void OnMouseBlur();

        virtual void OnResize(int w,int h);

        virtual void OnExit();
};


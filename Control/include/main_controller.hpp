#ifndef MAINCONTROLLER_HPP
#define MAINCONTROLLER_HPP

#include <Ogre.h>
#include <OgreApplicationContext.h>
#include <OgreInput.h>
#include <OgreFrameListener.h>

class MainController : public OgreBites::ApplicationContext, public OgreBites::InputListener
{
    public:
        MainController();

        void setup();
        bool keyPressed(const OgreBites::KeyboardEvent& evt);

//        virtual bool frameRenderingQueued(const Ogre::FrameEvent& evt);

        void startRendering();

    private:
        Ogre::SceneNode* cameraNode;

};

#endif // MAINCONTROLLER_HPP

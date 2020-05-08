#define _USE_MATH_DEFINES
#include <cmath>

#include "main_controller.hpp"
#include <OgreSceneNode.h>


MainController::MainController()
    : OgreBites::ApplicationContext("MyOGREGame")
{

}


void MainController::setup()
{
    // do not forget to call the base first
    OgreBites::ApplicationContext::setup();
    this->addInputListener(this);

    // get a pointer to the already created root
    Ogre::Root* root = getRoot();
    Ogre::SceneManager* scnMgr = root->createSceneManager();

    // register our scene with the RTSS
    Ogre::RTShader::ShaderGenerator* shadergen = Ogre::RTShader::ShaderGenerator::getSingletonPtr();
    shadergen->addSceneManager(scnMgr);

    // -- tutorial section start --
    //! [turnlights]
    scnMgr->setAmbientLight(Ogre::ColourValue(0.5, 0.5, 0.5));
    //! [turnlights]

    //! [newlight]
    Ogre::Light* light = scnMgr->createLight("MainLight");
    Ogre::SceneNode* lightNode = scnMgr->getRootSceneNode()->createChildSceneNode();
    lightNode->attachObject(light);
    //! [newlight]

    //! [lightpos]
    lightNode->setPosition(20, 80, 50);
    //! [lightpos]

    //! [camera]
    this->cameraNode = scnMgr->getRootSceneNode()->createChildSceneNode();
    this->cameraNode->setPosition(0, 0, 0);
    Ogre::SceneNode* camNode = this->cameraNode->createChildSceneNode();

    // create the camera
    Ogre::Camera* cam = scnMgr->createCamera("CharCam");
    cam->setNearClipDistance(5); // specific to this sample
    cam->setAutoAspectRatio(true);
    camNode->attachObject(cam);
    camNode->setPosition(0,400,800);
    camNode->rotate(Ogre::Vector3(1,0,0), Ogre::Radian(-0.23));

    // and tell it to render into the main window
    getRenderWindow()->addViewport(cam);
    //! [camera]

    //! [entity2]
    Ogre::Entity* ogreEntity2 = scnMgr->createEntity("ninja.mesh");
    ogreEntity2->setCastShadows(true);
    Ogre::SceneNode* simbadNode = this->cameraNode->createChildSceneNode();
    simbadNode->attachObject(ogreEntity2);
    simbadNode->rotate(Ogre::Vector3(0,1,0), Ogre::Radian(-M_PI/2.0));



}


bool MainController::keyPressed(const OgreBites::KeyboardEvent& evt)
{
    if (evt.keysym.sym == OgreBites::SDLK_ESCAPE)
    {
        getRoot()->queueEndRendering();
    }
    else if (evt.keysym.sym == 's')
    {

    }
    else if (evt.keysym.sym == 'w')
    {

    }

    else if (evt.keysym.sym == 'a')
    {

    }
    else if (evt.keysym.sym == 'd')
    {

    }



    if(evt.keysym.sym == OgreBites::SDLK_RIGHT)
    {


    }
    else if(evt.keysym.sym == OgreBites::SDLK_LEFT)
    {

    }
    else if(evt.keysym.sym == OgreBites::SDLK_UP)
    {

    }
    else if(evt.keysym.sym == OgreBites::SDLK_DOWN)
    {

    }


    return true;
}

void MainController::startRendering()
{
    this->initApp();
    this->getRoot()->startRendering();
    this->closeApp();
}

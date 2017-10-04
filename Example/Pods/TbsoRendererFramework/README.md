# TBSORENDERER FRAMEWORK INSTALLATION
## I. Installing IOS SDK

### 1. CocoaPod
Pod TbsoRenderer Framework.

`pod 'TbsoRendererFramework'`

### 2. Manual Installing
#### Dependencies
* Tbsorenderer Framework
* IOS 10.0 and above

#### Setup
* Add require native framework

* Add embedded binaries

## II. GET STARTS
#### Add SCNView
* Add SCNView into your base view and connect this scn view with  the variable in your controller.
SCNView it is special view to render SCNKit scenes. Plaes pay attention, you have to choose correct Rendering API for this view with dependance from your current platform (Device or Simulator). This problem exists because simulator does not supports Metal API but only with Metal API I was able able to implement all complex materials that we have in our 3D models.
So, theoretically the framework works with Metal, but if you want to test your application on simulator you need to choose OpenGL API in your SCNView and keep in mind, some materials will be rendered simplified and incorrectly.

* Load the default scene into your SCNView
```javascript
[TbsoRendererUtils loadDefaultSceneForView:self.scnView];
```
Do it once in ViewDidLoad method.

* Load a model (create a new SCNNode from TBSO file)
```javascript
TbsoRenderer *tbsoTestRenderer = [[TbsoRenderer alloc] init];
SCNNode *node = [tbsoTestRenderer createSCNNodeFromFile:filePath];
```
Also you can load a model from NSData, it will be require in the future when the model will be downloaded from the server.

* Scale the model(node) to fit your view
```javascript
[TbsoRendererUtils scaleNode:node forView:self.scnView];
```

* And add a new model(node) to the scene
```javascript
[self.scnView.scene.rootNode addChildNode:node];
```

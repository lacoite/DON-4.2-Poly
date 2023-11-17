# DON 4.2
Continuation of migrating DON 4.0 from Unity to Unreal Engine 5.1

## Requirements:
Unreal Engine 5.1
 
## Current Implementation:
These implementation details are a summary of the additional developments made to DON 4.1. The project was acquired with the Main Menu functionality largely complete. The menu allows users to select a simulation directory containing the xml and object files for the simulation. The new development uses the objects specified in the Mission File (explain here that its not usually named mission in directories), and loads them into the simulation. These objects are spawned as instances of a custom actor class, and can be accessed within the blueprints.

## Source Code/Blueprint/Build Comments:

### To build: 
- Open the Unreal engine project, then navigate to the bottom left of the screen and open the Content Drawer. 
- In the SimBank folder open the Levels Folder.
- Double click on the Main Menu level in this folder to load it. 
- Click the run button at the top of the screen. When the menu loads, click the “Settings” button then “File Navigator”. Navigate to the ‘[User Directory]/Don-4.2-Poly/Simulations’ folder, then select either DuckTest or Converted-StateTest. 
- Once you have the simulation directory open, select the “Set Simulation Directory” button. There is currently no UI indicating that the directory was set, but there is an error message of an invalid directory was chosen.
- Navigate back to the Main Menu. Click the “Mission Select” button. In the Mission Select Screen, the new mission card will be displayed and runnable. If there are duplicate cards, click the “Reload” button at the bottom of the screen (this functionality needs to be corrected in future development).
- Click on the card, and wait for the simulation to load. There are currently no loading screens, however import messages should appear on the screen if the load was successful. There should currently be a 5 second delay between clicking the card and the simulation loading.

### Plugin Installation/Usage Comments:

All plugins should automatically download when pulling the build from Github. If there is a popup asking you to rebuild DONToUnreal, click yes.

If the popup displays you are missing a plugin, simply search the Unreal Engine marketplace and install:

- LE Xml Parser: https://www.unrealengine.com/marketplace/en-US/product/le-xml-parser
- Blueprint FileSDK: https://www.unrealengine.com/marketplace/en-US/product/blueprint-file-sdk
- Read & write text file: https://www.unrealengine.com/marketplace/en-US/product/read-write-text-file

The only plugin that should give you this issue is Blueprint FileSDK. This is a free plugin available on the market.

### Unreal Engine Comments:
- If you are fully unfamiliar with Unreal Engine like we were, here's a helpful beginner tutorial:
	- https://www.youtube.com/watch?v=k-zMkzmduqI
- To get a better understanding of what we have added to the project you can reference these videos:
	- https://www.youtube.com/watch?v=rSV96Ux43dk&t=499s
		- Note: If you need to change or modify anything in C++ you will need to generate the solution file (.sln) by right clicking the Unreal project file (.uproject) in your file explorer and click “Generate Visual Studio Project Files.” There is a brief setup of Visual Studio to ensure that it connects to Unreal Engine correctly, there is a tutorial for this setup: https://docs.unrealengine.com/4.26/en-US/ProductionPipelines/DevelopmentSetup/VisualStudioSetup/
	- https://www.youtube.com/watch?v=rSV96Ux43dk
	- https://www.youtube.com/watch?v=yEUlrvJ_rSg
- We did use the above videos for a C++ implementation, however a better solution was found using blueprints. This was the source for the implementation we used
	- https://docs.unrealengine.com/5.2/en-US/importing-assets-using-interchange-in-unreal-engine/
- Links To other Githubs Repos
	- https://github.com/FlaSpaceInst/DON-4.1
	- https://github.com/FlaSpaceInst/DON-4.0





### Changed Files:
This section details the changes we made to the files available in the project. The project consists of both blueprints and a small portion of C++. Each blueprint contains blocks to further explain our implementation in greater detail. (Note: To access the blueprints, navigate to the blueprint file, then switch to the Graph view within the window).

BluePrints: /Game/Assets/UI
- WB_SimulationIcon
	- This blueprint was modified to use the MPCMission File from the selected simulation directory to load the object specified in the file by their id. The ids are used in combination with the simulation directory variable to locate the objects on the disk and generate them into the Assets/Models folder. 
		- (Note: This folder will not exist until a simulation is successfully run.)
	- Each imported object is contained within its own folder with its respective id as the name. These models are then loaded into the game using the LoadMeshActor actor we created. This is done in the “Spawn Objects” function we implemented.
		- (Note: The original implementation of spawning objects with transforms parsed from the Telemetry data is still available in this file. It was left for future development reference, but is currently unused in the project.)
	- To assist with future development, the array of actors generated are accessed, and a transform is done on the second actor to increase its size and place it away from the other objects. If the simulation is DuckTest, the object is the Sphere_Follow cube. If the simulation is Converted-Statetest, the object Sphere, which looks like a soccer ball.
- BP_FileNavigator
	- This blueprint was modified to set a global variable of the selected simulation directory path.
- BP_GlobalData
	- This blueprint was modified to include additional global variables necessary for the project.
- MeshLoaderActor
	- This blueprint was created to load the objects imported from the mission select file. The blueprint is called each time an object is to be imported. The global “To Load” variable is first updated with the imported static mesh’s object reference, then used within this actor to assign the referenced mesh to the actor’s mesh. Each instance of this blueprint actor will appear as a different object loaded from the mission file. These instances can later be accessed and referenced for transformations.

Other Files:
- C++ Blueprint Function Class (MyBluePrintFunctionLibrary)
	- This Function Library contains the C++ function used to generate the object references to the imported objects. This value is used to update the global “To Load” variable used in the StaticMeshLoader for every instance of the actor.
		- (Note: This Blueprint Function Library can be used in future development to add additional C++ code.)
    
- /Game/Assets/DefaultAssetsPipeline
	- This file contains the default settings of the Interchange Pipeline Configurations window necessary for the project. The file is used as the  Override Pipelines argument in the Simulation Icon blueprint during the importing of the objects. The only changed default in this file is “combine meshes” to avoid breaking up the mesh into several indexed face sets. This was a necessary addition to prevent developers from having to manually update this setting.

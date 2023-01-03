# DISCONTINUATION OF PROJECT #
This project will no longer be maintained by Intel.
Intel has ceased development and contributions including, but not limited to, maintenance, bug fixes, new releases, or updates, to this project.
Intel no longer accepts patches to this project.
Unreal Capability Detect Demo
=============================

This application demonstrates system capability detection using a third-party plugin in Unreal Engine 4.18

Setup Instructions
==================

Compiling the Third Party Library
* Open CapabilityDetectDemo\Plugins\CapabilityDetect\Source\ThirdParty\CapabilityDetectLibrary\CapabilityDetectLibrary.sln
* Compile CapabilityDetectLibrary.sln as Release-x64
* Close CapabilityDetectLibrary.sln

Generate Project Files
* Right click CapabilityDetectDemo\CapabilityDetectDemo.uproject
* Select Generate Visual Studio project files

Build Project
* Open CapabilityDetectDemo\CapabilityDetectDemo.sln
* Build as Development_editor-x64
* CTRL+F5 to launch unreal editor

Verify Plugin
* Click Edit->Plugins from the main menu
* Under the installed node find the Intel(c) node
* Confirm the Capability Detect plugin is visible and enabled
* Close the Plugin dialog

Start the Demo
* Run the project by clicking the Play button in the toolbar.
* System Information should display on the screen.

Requirements
============

For compilation:

1) Visual C++ 2015/2017
1) Unreal Engine 4.18 or greater.

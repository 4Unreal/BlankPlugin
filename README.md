# BlankPlugin for Unreal Engine 4
**with HOT-RELOAD support**

---
## Requirements
- Unreal Engine 4.18
- Visual Studio 2017

## Setup
Following steps are necessarry to get this plugin working **with hot-reload**:
1. Download this repository and place it under the *Plugins* directory in your game project.
2. Replace all occurences of *BlankPlugin* with your plugin name, including file and directory names.
3. Delete plugin's *Content/Blueprints/BP_BlankActor.uasset* file.
4. Right-click on your game's uproject file and *Generate Visual Studio project files*.
5. Open your game solution in Visual Studio and build it with the *Develpment Editor configuration* (F7 key).
6. Start soludion without debugging (CTRL+F), make some changes, your hot-reloading plugin should be working now.

## About
Hot-reloading is enabled by changing the code in your plugin's CPP file like:
```cpp
//IMPLEMENT_MODULE(FTestPluginModule, BlankPlugin);
IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, BlankPlugin, "BlankPlugin");
```

## Addendum
Please, if you are interested in this Unreal Engine plugin report any issues and don't hesitate to contribute.
We will appreciate any contributions on development of this plugin.

[Issue](https://github.com/4Unreal/BlankPlugin/issues) | [Fork](https://github.com/4Unreal/BlankPlugin)

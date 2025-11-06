# PracticeRepoRust

Default Codespace image Doesnt have rust so followed githubs instructions to edit the container conifg file
so now from the codespace can use rust(cargo), python, go, js(node) and cpp(make) for testing here.

ChatGPT with the rewriting my simple python function to the other languages.

cargo new, build and run

cpp - header files and cpp files and main.cpp and then makefile and make --> ./appname arguments

go -  go mod init appname (mod file for dependency management?) --> .go files and go run . arguments

## Recommended Libraries

### Rust - GUI Libraries
1. **egui** - Immediate mode GUI, easy to use, great for tools and editors
2. **iced** - Elm-inspired, cross-platform GUI with reactive programming
3. **druid** - Data-first Rust-native UI toolkit
4. **tauri** - Build desktop apps with web frontend (like Electron but Rust)
5. **slint** - Declarative GUI toolkit for embedded and desktop
6. **gtk-rs** - Rust bindings for GTK
7. **fltk-rs** - Rust bindings for FLTK, lightweight and fast
8. **relm4** - Idiomatic GUI library based on GTK 4
9. **dioxus** - React-like library for web, desktop, mobile, and more
10. **vizia** - Declarative desktop GUI framework

### Rust - Game Libraries
1. **bevy** - Modern, data-driven game engine with ECS architecture
2. **macroquad** - Simple and easy to use game library, great for beginners
3. **ggez** - Lightweight framework for 2D games (Rust's answer to LÖVE)
4. **amethyst** - Data-oriented game engine (now mostly superseded by Bevy)
5. **fyrox** - Feature-rich 3D game engine with editor
6. **piston** - Modular game engine with lots of flexibility
7. **tetra** - Simple 2D game framework inspired by XNA/MonoGame
8. **bracket-lib** - Roguelike-focused library (formerly RLTK)
9. **pixels** - Tiny hardware-accelerated pixel frame buffer
10. **nannou** - Creative coding framework (great for generative art/games)

### Go - GUI Libraries
1. **fyne** - Cross-platform GUI with material design, easiest to use
2. **wails** - Build desktop apps with Go backend and web frontend
3. **gio** - Portable immediate mode GUI in pure Go
4. **gotk3** - Go bindings for GTK3
5. **walk** - Windows-only GUI toolkit
6. **qt-binding (therecipe/qt)** - Go bindings for Qt framework
7. **webview** - Tiny cross-platform webview library
8. **ui (andlabs/ui)** - Simple cross-platform GUI library
9. **nucular** - Immediate mode GUI based on Nuklear
10. **gioui.org/x** - Extended Gio components and widgets

### Go - Game Libraries
1. **ebiten** - Dead simple 2D game engine, very popular
2. **pixel** - Hand-crafted 2D game library with great API
3. **raylib-go** - Go bindings for Raylib
4. **g3n** - OpenGL 3D game engine
5. **engo** - Open-source 2D game framework with ECS
6. **oak** - Pure Go game engine focused on 2D
7. **termloop** - Terminal-based game engine for ASCII games
8. **goworld** - Scalable MMO game server engine
9. **nano** - Lightweight game server framework
10. **korok** - 2D game engine with component-based architecture

### C++ - GUI Libraries
1. **Qt** - Industry-standard cross-platform GUI framework
2. **Dear ImGui** - Immediate mode GUI, perfect for tools and debug UIs
3. **wxWidgets** - Mature cross-platform GUI library
4. **GTK+** - GNOME toolkit, popular on Linux
5. **FLTK** - Fast, light toolkit, small footprint
6. **nana** - Modern C++ GUI library
7. **JUCE** - Framework for audio applications and GUIs
8. **IUP** - Portable toolkit with native look and feel
9. **Sciter** - Embeddable HTML/CSS/scripting engine
10. **ultralight** - Lightweight web renderer for apps

### C++ - Game Libraries
1. **Unreal Engine** - AAA game engine with C++ scripting
2. **SDL2** - Low-level multimedia library, industry standard
3. **SFML** - Simple and Fast Multimedia Library, great for 2D
4. **raylib** - Simple and easy-to-use library for games
5. **Godot** - Game engine with GDNative for C++ (or use full C++)
6. **Cocos2d-x** - Cross-platform 2D/3D game engine
7. **OGRE** - Object-oriented 3D graphics rendering engine
8. **Irrlicht** - High-performance real-time 3D engine
9. **bgfx** - Cross-platform rendering library
10. **Allegro** - Game programming library for 2D games

### Rust - AR/VR Libraries
1. **openxrs** - Rust bindings for OpenXR, the standard for VR/AR applications
2. **hotham** - Lightweight, high-performance game engine for standalone VR headsets
3. **webxr** - Safe Rust API for WebXR, used in Servo browser
4. **wgpu** - Cross-platform graphics API abstraction (Vulkan, Metal, DX12, WebGL)
5. **gfx-rs** - Low-level graphics and compute abstraction library
6. **bevy (with VR plugins)** - Game engine with experimental VR support via plugins
7. **stereokit-rs** - Rust bindings for StereoKit mixed reality engine
8. **rust-openvr** - OpenVR bindings for Valve's VR SDK
9. **rapier** - Physics engine commonly used in VR game development
10. **xrbevy** - Proof-of-concept OpenXR rendering for Bevy engine

### Go - AR/VR Libraries
1. **openvr-go** - Go wrapper for Valve's OpenVR SDK
2. **g3n** - Go 3D game engine with potential VR applications
3. **azul3d** - 3D game engine that can be adapted for VR
4. **harfang3d (Go bindings)** - Cross-platform 3D visualization for VR/AR
5. **carrot** - Multi-device AR framework using WebSockets and Go
6. **go-gl** - Go bindings for OpenGL (foundation for VR rendering)
7. **mathgl** - Math library for 3D graphics and VR calculations
8. **webxr (Go implementations)** - WebXR implementations in Go for web-based VR

**Note**: Go has limited native VR/AR library support compared to C++ and Rust. Most Go VR development uses wrappers around C/C++ libraries or focuses on backend services for VR applications.

### C++ - AR/VR Libraries
1. **OpenXR** - Industry standard API for VR/AR (Khronos Group)
2. **OpenVR** - Valve's VR SDK for SteamVR and multiple headsets
3. **Oculus SDK** - Official SDK for Meta Quest and Rift development
4. **ARCore** - Google's AR platform with C++ NDK support
5. **ARKit** - Apple's AR framework (C++ via Objective-C++)
6. **ARToolKit** - Open-source AR tracking library for marker recognition
7. **Vuforia** - Enterprise AR platform with C++ API
8. **StereoKit** - Easy-to-use mixed reality library for HoloLens and VR
9. **Annwvyn** - Open-source VR game engine built on Ogre3D
10. **OSVR** - Open-source VR platform and SDK

---

## Example Projects and Resources

### Rust Example Projects (10)

1. **bevyengine/bevy** - Official Bevy game engine with extensive examples
   - https://github.com/bevyengine/bevy

2. **Anshorei/awesome-bevy** - Collection of awesome Bevy projects and plugins
   - https://github.com/Anshorei/awesome-bevy

3. **thephet/BevyRoguelike** - Roguelike game using Rust and Bevy engine
   - https://github.com/thephet/BevyRoguelike

4. **rust-adventure/bevy-examples** - Shaders and other small Bevy examples
   - https://github.com/rust-adventure/bevy-examples

5. **emilk/egui** - Easy-to-use immediate mode GUI (includes demos)
   - https://github.com/emilk/egui

6. **iced-rs/iced** - Cross-platform GUI library with official examples
   - https://github.com/iced-rs/iced

7. **iced-rs/awesome-iced** - Curated list of iced projects and custom widgets
   - https://github.com/iced-rs/awesome-iced

8. **not-fl3/macroquad** - Simple and easy game library with examples
   - https://github.com/not-fl3/macroquad

9. **ozkriff/awesome-quads** - Curated list of macroquad games and projects
   - https://github.com/ozkriff/awesome-quads

10. **tauri-apps/awesome-tauri** - Awesome Tauri apps, plugins and resources
    - https://github.com/tauri-apps/awesome-tauri

### Go Example Projects (10)

1. **fyne-io/fyne** - Cross-platform GUI toolkit with Material Design
   - https://github.com/fyne-io/fyne

2. **fyne-io/examples** - Official examples using Fyne toolkit
   - https://github.com/fyne-io/examples

3. **micheam/fyne-examples** - Sample applications and widgets with Fyne
   - https://github.com/micheam/fyne-examples

4. **hajimehoshi/ebiten** - Dead simple 2D game engine with examples
   - https://github.com/hajimehoshi/ebiten

5. **sedyh/awesome-ebitengine** - Curated list of Ebitengine frameworks and games
   - https://github.com/sedyh/awesome-ebitengine

6. **divVerent/awesome-ebiten** - Another curated Ebiten collection
   - https://github.com/divVerent/awesome-ebiten

7. **wailsapp/wails** - Build desktop apps using Go & web technologies
   - https://github.com/wailsapp/wails

8. **wailsapp/awesome-wails** - Carefully selected list of Wails applications
   - https://github.com/wailsapp/awesome-wails

9. **PacktPublishing/Building-Cross-Platform-GUI-Applications-with-Fyne** - Book examples
   - https://github.com/PacktPublishing/Building-Cross-Platform-GUI-Applications-with-Fyne

10. **ag-go/gui-examples** - Additional Fyne toolkit application examples
    - https://github.com/ag-go/gui-examples

### C++ Example Projects (10)

1. **ocornut/imgui** - Dear ImGui bloat-free GUI with extensive examples
   - https://github.com/ocornut/imgui

2. **SFML/SFML-Game-Development-Book** - Full source code from SFML Game Development book
   - https://github.com/SFML/SFML-Game-Development-Book

3. **JustCaptcha/awesome-sfml** - Curated list of SFML projects and games
   - https://github.com/JustCaptcha/awesome-sfml

4. **suraj95/16-Games-in-SFML** - 16 games developed in SFML library
   - https://github.com/suraj95/16-Games-in-SFML

5. **aminosbh/sdl2-samples-and-projects** - List of SDL2 samples and projects
   - https://github.com/aminosbh/sdl2-samples-and-projects

6. **alexdantas/sdl2-platformer** - Platform game testing SDL2 and C++11 features
   - https://github.com/alexdantas/sdl2-platformer

7. **jakowskidev/uMario_Jakowski** - Mario clone in C++/SDL2
   - https://github.com/jakowskidev/uMario_Jakowski

8. **gammasoft71/Examples_Qt** - Qt widgets examples in C++17
   - https://github.com/gammasoft71/Examples_Qt

9. **JesseTG/awesome-qt** - Curated list of Qt tools, libraries, and resources
   - https://github.com/JesseTG/awesome-qt

10. **Infernno/qt5-examples** - Qt 5 examples from official repository
    - https://github.com/Infernno/qt5-examples

---

## AR/VR Example Projects and Resources

### Rust AR/VR Example Projects (10)

1. **leetvr/hotham** - Lightweight VR game engine for standalone headsets with examples
   - https://github.com/leetvr/hotham

2. **Ralith/openxrs** - OpenXR bindings with Vulkan rendering examples
   - https://github.com/Ralith/openxrs

3. **krzentner/vr-rust-starter** - Example VR programs written in Rust
   - https://github.com/krzentner/vr-rust-starter

4. **rust-openvr/rust-openvr** - OpenVR bindings for Rust with examples
   - https://github.com/rust-openvr/rust-openvr

5. **servo/webxr** - WebXR bindings used in Servo browser
   - https://github.com/servo/webxr

6. **blaind/xrbevy** - Proof-of-concept OpenXR support for Bevy engine
   - https://github.com/blaind/xrbevy

7. **bevyengine/bevy** - VR discussions and experimental plugins (issues #1030, #115)
   - https://github.com/bevyengine/bevy

8. **Are We Game Yet - VR Section** - Curated list of Rust VR libraries
   - https://arewegameyet.rs/ecosystem/vr/

9. **Rust VR GitHub Organization** - Collection of VR-related Rust projects
   - https://github.com/rustvr

10. **Resolution Games Blog** - Real-world case study of using Rust for VR games
    - https://www.resolutiongames.com/blog/programming-a-vr-game-using-rust

### Go AR/VR Example Projects (10)

1. **tbogdala/openvr-go** - Go wrapper for OpenVR with examples
   - https://github.com/tbogdala/openvr-go

2. **g3n/engine** - Go 3D engine with VR potential
   - https://github.com/g3n/engine

3. **carrot-ar/carrot** - Multi-device AR framework in Go
   - https://github.com/carrot-ar/carrot

4. **go-gl/gl** - Go bindings for OpenGL (foundation for VR)
   - https://github.com/go-gl/gl

5. **go-gl/mathgl** - Math library for 3D/VR applications
   - https://github.com/go-gl/mathgl

6. **HARFANG3D** - 3D engine with Go bindings for VR/AR
   - https://www.harfang3d.com/

7. **Azul3D** - 3D game engine written in Go
   - https://azul3d.org/

8. **Building a Go VR Platform Tutorial** - Reintech tutorial
   - https://reintech.io/blog/building-go-based-virtual-reality-platform-developers-tutorial

9. **go-gl/examples** - OpenGL examples in Go (VR rendering basics)
   - https://github.com/go-gl/examples

10. **mikeroyal/AR-VR-Guide** - Comprehensive AR/VR development guide
    - https://github.com/mikeroyal/AR-VR-Guide

### C++ AR/VR Example Projects (10)

1. **KhronosGroup/OpenXR-SDK-Source** - Official OpenXR SDK with hello_xr example
   - https://github.com/KhronosGroup/OpenXR-SDK-Source

2. **KhronosGroup/OpenXR-Tutorials** - Official OpenXR tutorials
   - https://github.com/KhronosGroup/OpenXR-Tutorials

3. **maluoi/OpenXRSamples** - Concise OpenXR + DirectX 11 examples
   - https://github.com/maluoi/OpenXRSamples

4. **ValveSoftware/openvr** - OpenVR SDK with samples (hellovr_opengl)
   - https://github.com/ValveSoftware/openvr

5. **google-ar/arcore-android-sdk** - ARCore C++ NDK examples (hello_ar_c)
   - https://github.com/google-ar/arcore-android-sdk

6. **Ybalrid/Annwvyn** - Open-source VR game engine in C++
   - https://github.com/Ybalrid/Annwvyn

7. **sclark39/UE-VR-Code-Sample** - Unreal Engine VR C++ sample
   - https://github.com/sclark39/UE-VR-Code-Sample

8. **KhronosGroup/OpenXR-Hpp** - C++ language projection for OpenXR
   - https://github.com/KhronosGroup/OpenXR-Hpp

9. **KHeresy/openxr-simple-example** - Simple OpenXR with OpenGL + SDL2
   - https://github.com/KHeresy/openxr-simple-example

10. **mikeroyal/AR-VR-Guide** - Comprehensive guide covering AR/VR development
    - https://github.com/mikeroyal/AR-VR-Guide


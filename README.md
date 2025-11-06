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


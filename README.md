# Dungeon Escape – Unreal Engine 5.6

Dungeon Escape is a small first-person puzzle game built while following the **“Created in collaboration with Epic Games – Learn C++ from scratch while making 4 fun games in Unreal Engine 5.6”** course.

This project focuses on core gameplay systems like moving platforms, pressure plates, and lock-and-key style puzzles, implemented using both **C++** and **Blueprints**.

---

## Skills Gained

### 🧩 Game & Level Design

- **Level Layout & Flow**
  - Designed a simple dungeon with a clear objective (find a way out).
  - Placed walls, floors, doors, and obstacles to guide and challenge the player.
- **Interactive Environments**
  - Built areas that react to the player (e.g., doors that open, platforms that move).

### 🗂 Asset Importing & Organization

- **Asset Packs from Marketplace**
  - Imported and used free asset packs from the **Epic Games Marketplace**.
- **Reusable Actors**
  - Created Blueprint/C++ actors (e.g., moving platforms, locks) and reused them throughout the level via drag-and-drop.

### 🔐 Puzzle & Gameplay Systems

- **Pressure Plate Mechanics**
  - Implemented pressure plates that:
    - Detect when the player (or an object) is on them.
    - Trigger actions such as moving walls/doors or activating platforms.

- **Lock & Key / Item Collection**
  - Built a simple key system where:
    - The player can pick up an item.
    - A matching lock checks for that item and reacts (e.g., unlocks a door).
    - Logic handles placing/removing the key from the lock.

### 🎒 Inventory System Basics

- Created a lightweight **inventory system** that:
  - Stores items collected by the player.
  - Checks if the player has a required item before allowing an interaction (like unlocking a door).
  - Adds/removes items based on player actions.

### 💻 C++ Gameplay Programming (Unreal-Style)

- **Unreal C++ Fundamentals**
  - Worked with `AActor` and `UActorComponent` classes.
  - Used `BeginPlay()` and `Tick()` to drive runtime behavior.
- **UPROPERTY & Exposure to Editor**
  - Marked variables with `UPROPERTY` to:
    - Edit them in the Unreal Editor (e.g., movement distance, move time).
    - Safely reference assets and other actors.
- **Interaction & Logic**
  - Implemented line traces / interaction checks to detect what the player is looking at.
  - Used `Cast<>` to convert `AActor*` to specific types (e.g., `ALock*`) and run appropriate behavior.

### 🧵 Blueprints + C++ Together

- Created **Blueprints based on C++ classes** to:
  - Assign meshes, tweak movement offsets, and configure behavior per instance.
  - Quickly prototype and iterate on gameplay while keeping core logic in C++.
- Used Blueprints for:
  - Simple logic wiring (e.g., connecting pressure plates to movers).
  - Visual configuration and faster iteration.

### 🎮 Player Interaction & Feel

- Learned how players:
  - Interact with objects in the scene (looking at them, pressing a key, stepping on triggers).
  - Receive feedback through moving objects, opening doors, and other environment changes.
- Focused on making interactions **clear and responsive**.

### 🛠 Debugging & Workflow

- Used `UE_LOG` to:
  - Print debug messages when interactions failed (e.g., “You don’t have the key!”).
  - Inspect state and behavior during development.
- Built good habits around:
  - Testing puzzle logic.
  - Iterating on level layout and timings (e.g., movement speed, platform positions).

---

## Tech Stack

- **Engine:** Unreal Engine 5.6  
- **Language:** C++ (with Unreal’s reflection system)  
- **Scripting / Visual Logic:** Blueprints  
- **Platform:** PC

---

## Future Improvements

- Add sound effects and music for feedback and atmosphere.
- Introduce multiple keys and locks with different rules.
- Add UI elements (e.g., a simple inventory display).
- Expand the level into a multi-room dungeon with increasing puzzle complexity.

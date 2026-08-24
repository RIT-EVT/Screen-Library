# ScreenLibrary

This is to be used in addition with EVT-Core and will not work without. The architecture is still being defined, but will be recorded soon enough

## Goal 

The goal is to be able to support any number of screen types and interfaces using a single common codebase. Ideally, it will be able to handle primitive shapes, bitmaps, vector graphics, text, basic animation, and as a stretch 3d graphics.

## Requirements

1. Minimal Screen tear
2. External users do not have to know exactly how the library internals work
3. Update screen only when necessary
4. Performance !!!!!!
5. Bitmap and Vector graphics support
6. Text, both bitmap and vector
7. Generics to quickly build a UI
8. 2D !!! (3D later, maybe)
9. RTOS Aware (?, Stretch goal)


## Roadmap

### Phase 1 (0.x)

Get generics in the library
- Rectangles
- Lines
- Circles
- (Bitmap) Text, maybe

### Phase 2 (1.x)

- Performance Testing 
- Make Applicable to more than HUDLv2
- 

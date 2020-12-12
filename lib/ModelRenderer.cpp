#include <Display.h>
#include "ModelRenderer.h"

ModelRenderer::ModelRenderer(const Model &model) {
    this->model = model;
    this->width = 800;
    this->height = 600;
    this->title = "Model Renderer";
}

void ModelRenderer::run() {
//    Create an empty, new window with the provided size and title
    Display display(width, height, title);
//    TODO: Load shader
//    TODO: Load camera
//    TODO: Load mesh
//    Constantly update the window until the user closes it
    while (!display.isClosed()) {
//        Fill the screen with a dark-blue background. RGBA floats between 0-1.
        display.clear(0, 0.15, 0.3, 0.9);
//        TODO: Transform the model
//        TODO: Use shader to draw and transform the mesh
//        Update the window with all the newly drawn pixels
        display.update();
    }
}

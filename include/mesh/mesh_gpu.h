#pragma once

#ifndef GL_GLEXT_PROTOTYPES
	#define GL_GLEXT_PROTOTYPES 1
#endif
#include <GL/gl.h>
#include <GL/glext.h>

#include "mesh.h"

struct GPUMesh {
	const Mesh *m;
	GLuint pos_vbo;
	GLuint idx_vbo;
	GLuint vao;
	void upload();
	void draw() const;
};

#pragma once

#include "Structures.h"

namespace MeshLoader
{
	Mesh* Load(const char* path);
	Mesh* LoadSimpleObj(const char* filename);
};


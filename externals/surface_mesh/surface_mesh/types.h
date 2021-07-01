

#ifndef SURFACE_MESH_TYPES_H
#define SURFACE_MESH_TYPES_H


//== INCLUDES =================================================================


#include <surface_mesh/Vector.h>


//=============================================================================


namespace surface_mesh {


//=============================================================================


/// Scalar type
typedef float Scalar;

/// Point type
typedef Vector<Scalar,3> Point;

/// 3D vector type
typedef Vector<Scalar,3> Vec3;

/// Normal type
typedef Vector<Scalar,3> Normal;

/// Color type
typedef Vector<Scalar,3> Color;

/// Texture coordinate type
typedef Vector<Scalar,3> Texture_coordinate;


//=============================================================================
} // namespace surface_mesh
//=============================================================================
#endif // SURFACE_MESH_TYPES_H
//============================================================================

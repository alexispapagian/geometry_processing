

#ifndef SURFACE_MESH_IO_H
#define SURFACE_MESH_IO_H


//== INCLUDES =================================================================


#include <surface_mesh/Surface_mesh.h>

#include <string>


//== NAMESPACE ================================================================


namespace surface_mesh {


//=============================================================================


bool read_mesh(Surface_mesh& mesh, const std::string& filename);
bool read_off(Surface_mesh& mesh, const std::string& filename);
bool read_obj(Surface_mesh& mesh, const std::string& filename);
bool read_stl(Surface_mesh& mesh, const std::string& filename);

bool write_mesh(const Surface_mesh& mesh, const std::string& filename);
bool write_off(const Surface_mesh& mesh, const std::string& filename);
bool write_obj(const Surface_mesh& mesh, const std::string& filename);


//=============================================================================
} // namespace surface_mesh
//=============================================================================
#endif // SURFACE_MESH_IO_H
//=============================================================================

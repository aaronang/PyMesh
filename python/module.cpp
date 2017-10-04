#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pybind11/stl.h>

namespace py = pybind11;

void init_Mesh(py::module&);
void init_MeshFactory(py::module&);
void init_MeshWriter(py::module&);
void init_MeshUtils(py::module&);
void init_predicates(py::module&);
void init_ConvexHull(py::module&);
void init_Boolean(py::module&);
void init_SelfIntersectionResolver(py::module&);
void init_Tetrahedralization(py::module&);
void init_OuterHull(py::module&);
void init_WindingNumber(py::module&);
void init_DMAT(py::module&);
void init_MinkowskiSum(py::module&);
void init_CellPartition(py::module&);
void init_Triangulation(py::module&);
void init_CGAL(py::module&);
void init_AABB(py::module&);
void init_Wires(py::module&);
void init_VoxelGrid(py::module&);

PYBIND11_MODULE(PyMesh, m) {
    m.doc() = "Geometry Processing for Python.";

    init_Mesh(m);
    init_MeshFactory(m);
    init_MeshWriter(m);

    init_MeshUtils(m);
    init_predicates(m);
    init_ConvexHull(m);
    init_Boolean(m);
    init_SelfIntersectionResolver(m);
    init_Tetrahedralization(m);
    init_OuterHull(m);
    init_WindingNumber(m);
    init_DMAT(m);
    init_MinkowskiSum(m);
    init_CellPartition(m);
    init_Triangulation(m);
    init_CGAL(m);
    init_AABB(m);
    init_Wires(m);
    init_VoxelGrid(m);
}

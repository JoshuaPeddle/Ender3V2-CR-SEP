/**
 * Mesh Viewer for PRO UI
 * Author: Miguel A. Risco-Castillo (MRISCOC)
 * version: 5.1.1
 * Date: 2023/07/12
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

class MeshViewer {
public:
  static float max, min;
  static void drawMeshGrid(const uint8_t csizex, const uint8_t csizey);
  static void drawMeshPoint(const uint8_t x, const uint8_t y, const float z);
  static void draw(const bool withsave=false, const bool redraw=true);
  static void drawMesh(const bed_mesh_t zval, const uint8_t csizex, const uint8_t csizey);
};

extern MeshViewer meshViewer;

void gotoMeshViewer(const bool redraw);

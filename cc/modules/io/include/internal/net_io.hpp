// ==============================================================================
// Copyright 2020 The LatticeX Foundation
// This file is part of the Rosetta library.
//
// The Rosetta library is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// The Rosetta library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with the Rosetta library. If not, see <http://www.gnu.org/licenses/>.
// ==============================================================================

template <typename T>
int BasicIO::recv(int party, vector<T>& data, size_t n, int tid) {
  return recv(party, (char*)data.data(), n * sizeof(T), tid);
}

template <typename T>
int BasicIO::send(int party, const vector<T>& data, size_t n, int tid) {
  return send(party, (const char*)data.data(), n * sizeof(T), tid);
}

template <typename T>
int BasicIO::broadcast(const vector<T>& data, size_t n, int tid) {
  return broadcast((const char*)data.data(), n * sizeof(T), tid);
}

template <typename T>
int BasicIO::recv(int party, vector<T>& data, size_t n, const msg_id_t& msg_id) {
  return recv(party, (char*)data.data(), n * sizeof(T), msg_id);
}

template <typename T>
int BasicIO::send(int party, const vector<T>& data, size_t n, const msg_id_t& msg_id) {
  return send(party, (const char*)data.data(), n * sizeof(T), msg_id);
}

template <typename T>
int BasicIO::broadcast(const vector<T>& data, size_t n, const msg_id_t& msg_id) {
  return broadcast((const char*)data.data(), n * sizeof(T), msg_id);
}

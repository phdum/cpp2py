// Copyright (c) 2017 Commissariat à l'énergie atomique et aux énergies alternatives (CEA)
// Copyright (c) 2017 Centre national de la recherche scientifique (CNRS)
// Copyright (c) 2020 Simons Foundation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0.txt
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Authors: Olivier Parcollet, Nils Wentzell

#pragma once
namespace cpp2py {
  namespace signal_handler {

    /// Start the signal handler
    void start();

    /// Stop it. ?
    void stop();

    /// A signal has been received. If pop, and there is a signal, pop it.
    bool received(bool pop = false);

    /// Last received.
    int last();

    /// pop the last signal
    void pop();
  } // namespace signal_handler
} // namespace cpp2py

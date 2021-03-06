/*############################################################################
  # Copyright 2016-2019 Intel Corporation
  #
  # Licensed under the Apache License, Version 2.0 (the "License");
  # you may not use this file except in compliance with the License.
  # You may obtain a copy of the License at
  #
  #     http://www.apache.org/licenses/LICENSE-2.0
  #
  # Unless required by applicable law or agreed to in writing, software
  # distributed under the License is distributed on an "AS IS" BASIS,
  # WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  # See the License for the specific language governing permissions and
  # limitations under the License.
  ############################################################################*/

/*!
 * \file
 * \brief Verifier C++ wrapper interface.
 */
#ifndef EPID_INTERNAL_TESTHELPER_INCLUDE_TESTHELPER_1_1_VERIFIER_WRAPPER_TESTHELPER_H_
#define EPID_INTERNAL_TESTHELPER_INCLUDE_TESTHELPER_1_1_VERIFIER_WRAPPER_TESTHELPER_H_

extern "C" {
#include "epid/1.1/verifier.h"
}

/// C++ Wrapper to manage memory for VerifierCtx via RAII
class Epid11VerifierCtxObj {
 public:
  /// Create an Epid11VerifierCtx
  explicit Epid11VerifierCtxObj(Epid11GroupPubKey const& pub_key);
  /// Create an Epid11VerifierCtx given precomputation blob
  Epid11VerifierCtxObj(Epid11GroupPubKey const& pub_key,
                       Epid11VerifierPrecomp const& precomp);

  // This class instances are not meant to be copied.
  // Explicitly delete copy constructor and assignment operator.
  Epid11VerifierCtxObj(const Epid11VerifierCtxObj&) = delete;
  Epid11VerifierCtxObj& operator=(const Epid11VerifierCtxObj&) = delete;

  /// Destroy the Epid11VerifierCtx
  ~Epid11VerifierCtxObj();
  /// get a pointer to the stored Epid11VerifierCtx
  Epid11VerifierCtx* ctx() const;
  /// cast operator to get the pointer to the stored Epid11VerifierCtx
  operator Epid11VerifierCtx*() const;
  /// const cast operator to get the pointer to the stored Epid11VerifierCtx
  operator const Epid11VerifierCtx*() const;

 private:
  /// The stored VerifierCtx
  Epid11VerifierCtx* ctx_;
};

#endif  // EPID_INTERNAL_TESTHELPER_INCLUDE_TESTHELPER_1_1_VERIFIER_WRAPPER_TESTHELPER_H_

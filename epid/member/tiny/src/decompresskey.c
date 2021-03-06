/*############################################################################
  # Copyright 2017-2020 Intel Corporation
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
/// Tiny member DecompressPrivKey implementation.
/*! \file */

#define EXPORT_EPID_APIS
#include <epid/member/api.h>

EpidStatus EPID_MEMBER_API EpidDecompressPrivKey(
    GroupPubKey const* pub_key, CompressedPrivKey const* compressed_privkey,
    PrivKey* priv_key) {
  (void)pub_key;
  (void)compressed_privkey;
  (void)priv_key;
  return kEpidNotImpl;
}

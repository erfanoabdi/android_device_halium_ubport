/*
 * Copyright (C) 2020 Erfan Abdi <erfangplus@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Keymaster4.h"

/* Maximum allowed keymaster blob size. */
#define KEYMASTER_BLOB_SIZE 2048

#define RSA_KEY_SIZE 2048
#define RSA_KEY_SIZE_BYTES (RSA_KEY_SIZE / 8)
#define RSA_EXPONENT 0x10001
#define KEYMASTER_CRYPTFS_RATE_LIMIT 1  // Maximum one try per second

int main(int argc, char *argv[]) {
    unsigned char keymaster_blob[KEYMASTER_BLOB_SIZE];
    unsigned int keymaster_blob_size = 0;
    memset(keymaster_blob, 0, KEYMASTER_BLOB_SIZE);

    printf("Generating dummy keypair\n");
    int rc = keymaster_create_key_for_cryptfs_scrypt(RSA_KEY_SIZE, RSA_EXPONENT, KEYMASTER_CRYPTFS_RATE_LIMIT, keymaster_blob, KEYMASTER_BLOB_SIZE, &keymaster_blob_size);
    if (rc) {
        if (keymaster_blob_size > KEYMASTER_BLOB_SIZE) {
            printf("Keymaster key blob to large\n");
            keymaster_blob_size = 0;
        }
        printf("Failed to generate keypair\n");
        return -1;
    }
	return 0;
}

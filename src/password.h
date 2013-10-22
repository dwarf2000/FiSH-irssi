#ifndef PASSWORD_H_
#define PASSWORD_H_

/*
 * Derives a key from the given function.
 * It uses SHA256 to do so, which means
 * it always yields a 256 bit key.
 *
 * @param a_password   Input password.
 * @param a_key        Must be at least 32 bytes long.
 */
void key_from_password(const char *a_password, char *a_key);

/*
 * Hashes a key generated by key_from_password.
 * It uses SHA256 to do so, which means
 * it always yields a 256 bit hash.
 */
void key_hash(const char *a_key, char *a_hash);

#endif

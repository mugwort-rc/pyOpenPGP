#include <boost/python.hpp>
#define BOOST_PYTHON_STATIC_LIB

// Compress
void Compress_init();
void pgpbzip2_init();
void pgpzlib_init();

// Encryptions
void AES_init();
void Blowfish_init();
void CAST128_init();
void Camellia_init();
void DES_init();
void IDEA_init();
void SymAlg_init();
void TDES_init();
void Twofish_init();

// Hashes
void Hash_init();
void Hashes_init();
void MD5_init();
void RIPEMD160_init();
void SHA1_init();
void SHA2_Functions_init();
void SHA224_init();
void SHA256_init();
void SHA384_init();
void SHA512_init();

// PKA
void DSA_init();
void ElGamal_init();
void PKA_init();
void RSA_init();

// Packets
void Partial_init();
void Tag0_init();
void Tag1_init();
void Tag2_init();
void Tag3_init();
void Tag4_init();
void Tag5_init();
void Tag6_init();
void Tag7_init();
void Tag8_init();
void Tag9_init();
void Tag10_init();
void Tag11_init();
void Tag12_init();
void Tag13_init();
void Tag14_init();
void Tag17_init();
void Tag18_init();
void Tag19_init();
void Tag60_init();
void Tag61_init();
void Tag62_init();
void Tag63_init();
void packet_init();
void packets_init();
void s2k_init();

// RNG
void BBS_init();

// Subpackets
void Tag2Sub0_init();
void Tag2Sub1_init();
void Tag2Sub2_init();
void Tag2Sub3_init();
void Tag2Sub4_init();
void Tag2Sub5_init();
void Tag2Sub6_init();
void Tag2Sub7_init();
void Tag2Sub8_init();
void Tag2Sub9_init();
void Tag2Sub10_init();
void Tag2Sub11_init();
void Tag2Sub12_init();
void Tag2Sub13_init();
void Tag2Sub14_init();
void Tag2Sub15_init();
void Tag2Sub16_init();
void Tag2Sub17_init();
void Tag2Sub18_init();
void Tag2Sub19_init();
void Tag2Sub20_init();
void Tag2Sub21_init();
void Tag2Sub22_init();
void Tag2Sub23_init();
void Tag2Sub24_init();
void Tag2Sub25_init();
void Tag2Sub26_init();
void Tag2Sub27_init();
void Tag2Sub28_init();
void Tag2Sub29_init();
void Tag2Sub30_init();
void Tag2Sub31_init();
void Tag2Sub32_init();
void Tag17Sub1_init();
void subpacket_init();

// common
void includes_init();
void integer_init();

void decrypt_init();
void encrypt_init();
void generatekey_init();
void mpi_init();
void pgptime_init();
void radix64_init();
void revoke_init();
void sigcalc_init();
void sign_init();
void verify_init();


BOOST_PYTHON_MODULE(__OpenPGP)
{
// Compress
Compress_init();
pgpbzip2_init();
pgpzlib_init();

// Encryptions
SymAlg_init();
AES_init();
Blowfish_init();
CAST128_init();
Camellia_init();
DES_init();
IDEA_init();
TDES_init();
Twofish_init();

// Hashes
Hash_init();
Hashes_init();
MD5_init();
RIPEMD160_init();
SHA1_init();
SHA2_Functions_init();
SHA256_init();
SHA224_init();
SHA512_init();
SHA384_init();

// PKA
DSA_init();
ElGamal_init();
PKA_init();
RSA_init();

// Packets
packet_init();
Partial_init();
Tag0_init();
Tag1_init();
Tag2_init();
Tag3_init();
Tag4_init();
Tag6_init();  // inherit by Tag5
Tag5_init();
Tag7_init();
Tag8_init();
Tag9_init();
Tag10_init();
Tag11_init();
Tag12_init();
Tag13_init();
Tag14_init();
Tag17_init();
Tag18_init();
Tag19_init();
Tag60_init();
Tag61_init();
Tag62_init();
Tag63_init();
packets_init();
s2k_init();

// RNG
BBS_init();

// Subpackets
subpacket_init();
Tag2Sub0_init();
Tag2Sub1_init();
Tag2Sub2_init();
Tag2Sub3_init();
Tag2Sub4_init();
Tag2Sub5_init();
Tag2Sub6_init();
Tag2Sub7_init();
Tag2Sub8_init();
Tag2Sub9_init();
Tag2Sub10_init();
Tag2Sub11_init();
Tag2Sub12_init();
Tag2Sub13_init();
Tag2Sub14_init();
Tag2Sub15_init();
Tag2Sub16_init();
Tag2Sub17_init();
Tag2Sub18_init();
Tag2Sub19_init();
Tag2Sub20_init();
Tag2Sub21_init();
Tag2Sub22_init();
Tag2Sub23_init();
Tag2Sub24_init();
Tag2Sub25_init();
Tag2Sub26_init();
Tag2Sub27_init();
Tag2Sub28_init();
Tag2Sub29_init();
Tag2Sub30_init();
Tag2Sub31_init();
Tag2Sub32_init();
Tag17Sub1_init();

// common
includes_init();
integer_init();

decrypt_init();
encrypt_init();
generatekey_init();
mpi_init();
pgptime_init();
radix64_init();
revoke_init();
sigcalc_init();
sign_init();
verify_init();
}

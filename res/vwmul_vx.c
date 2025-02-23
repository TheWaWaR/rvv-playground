#include <stddef.h>
#include <stdint.h>

void vwmul_vx(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][8]);

int main() {
  uint64_t x[100][4] = {{0x25474d793f2c7d32, 0x25474d793f2c7d32, 0x1234769364d9eac9, 0x38be984c83ce8648},
                        {0x02ab7bb54e687499, 0xf5bad73c74be6d8a, 0xaf29109cc0000000, 0x00004a9e26b7f794},
                        {0x6d159abfb3030000, 0x3b4de2fabe6d6476, 0xd251a40a022b9000, 0x000000000000015b},
                        {0xbd6192029dd91d60, 0x000000000000714c, 0xf48119b103954df1, 0x14d93f0c55095499},
                        {0x0000000000000001, 0x0000000000000000, 0x9480583abdfb5837, 0x262a15662b298944},
                        {0x90e1bc8ba22d3294, 0xb040414dd8c98a14, 0x14d93f0c55095499, 0x44a705073f90be80},
                        {0x44a705073f90be80, 0x9d8dbb3a5bde4347, 0x68323fe289df33d1, 0x9420000000000000},
                        {0x2d21e3da342cd6be, 0xbebf0929f41aa230, 0x0000000000000040, 0x000000a3714b9ad2},
                        {0xc9d368e6546c1f00, 0xbe55668178139c8e, 0x68323fe289df33d1, 0xf0fe55be95a18d13},
                        {0x4cf560811e3465c5, 0xf0fe55be95a18d13, 0xc7dee68fffbaf900, 0x8b4eb00000000000},
                        {0x0000000000000040, 0xf0fe55be95a18d13, 0xa8519a5b46242cc0, 0x8f09996552504a5d},
                        {0xa73c905bcbc01878, 0xfad4dc0000000000, 0x000000000000015b, 0x686f332000000000},
                        {0xb040414dd8c98a14, 0x000000a3714b9ad2, 0x00000000000075da, 0x25474d793f2c7d32},
                        {0x4a6c986967d5ace8, 0xd0abd7d3688aa0d7, 0x6d159abfb3030000, 0x314320aa7da5b1ef},
                        {0x0000000001000000, 0x7c6bcb08155fac38, 0x37269c228e8e3db1, 0x4ab9cfc9a41744c4},
                        {0x58aee9fdc3f41b74, 0xc9d368e6546c1f00, 0x44a705073f90be80, 0x0000000000400000},
                        {0x867e3492977cb1bb, 0x00129af7f2440efe, 0x05ada4e53975b451, 0x9480583abdfb5837},
                        {0x58aee9fdc3f41b74, 0x7dc2ae94e4000000, 0x0ec6680cabb95f09, 0x6465f271027abfa8},
                        {0x2e00000000000000, 0x0000000000000000, 0x00004a9e26b7f794, 0x02ab7bb54e687499},
                        {0x6465f271027abfa8, 0x0000020000000000, 0xf48119b103954df1, 0x8b4eb00000000000},
                        {0x6d159abfb3030000, 0xa8519a5b46242cc0, 0x37269c228e8e3db1, 0x4ab9cfc9a41744c4},
                        {0x8a4a182923bdf75a, 0xb1db9b0fecbfaabe, 0xffffffffffffffff, 0x8c91e2fe14041a34},
                        {0x90e1bc8ba22d3294, 0xd27d2fde3497614c, 0x0000000000400000, 0xf3fbe985738811dd},
                        {0x0000000000000080, 0xbd6192029dd91d60, 0xb040414dd8c98a14, 0x4a6c986967d5ace8},
                        {0x1234769364d9eac9, 0x8c91e2fe14041a34, 0x0000000000000000, 0x1735808ee4398bca},
                        {0xd251a40a022b9000, 0x686f332000000000, 0x6edd225600000000, 0xa6a669d1baba633e},
                        {0x37269c228e8e3db1, 0x000000000000000d, 0xe5baa16ee5b5419e, 0x4ab9cfc9a41744c4},
                        {0x00004a9e26b7f794, 0x0100000000000000, 0x9d8dbb3a5bde4347, 0x44a705073f90be80},
                        {0x9480583abdfb5837, 0x0010000000000000, 0x00000000a865d7d4, 0x986a686578456056},
                        {0x93d7d7a9d87056f0, 0x14d93f0c55095499, 0x4cf560811e3465c5, 0x7c6bcb08155fac38},
                        {0xbebf0929f41aa230, 0x7c6bcb08155fac38, 0x44a705073f90be80, 0x14d93f0c55095499},
                        {0x000000000003ed82, 0xea2177d8d5100000, 0x0000000380f3cf69, 0x86ddce906c8cdb4d},
                        {0x0000000000000067, 0x00000000000075da, 0x4fcf7212bebfdd89, 0xaf29109cc0000000},
                        {0xdfd83d690e5f073e, 0x93d7d7a9d87056f0, 0x0ec6680cabb95f09, 0xb1db9b0fecbfaabe},
                        {0x0000000000400000, 0x00129af7f2440efe, 0x0000000000002000, 0x8b4eb00000000000},
                        {0x0da24e08451a8d1a, 0xffffffffffffffff, 0x000000000dd2966b, 0x000000000dd2966b},
                        {0x0f812a265e560f2b, 0x0000000000400000, 0x1000000000000000, 0xb1db9b0fecbfaabe},
                        {0xdf9a26c8470349dd, 0x996d1b60923c18a6, 0x000000000000000d, 0xb1db9b0fecbfaabe},
                        {0xd0abd7d3688aa0d7, 0x58aee9fdc3f41b74, 0x58aee9fdc3f41b74, 0xca9d54bd4e78980e},
                        {0xdfd3a0870f60e072, 0x1000000000000000, 0x4a6c986967d5ace8, 0xc9d368e6546c1f00},
                        {0x00000000a865d7d4, 0xdfd83d690e5f073e, 0x3d0e482377794618, 0x6465f271027abfa8},
                        {0x000000000003ed82, 0x00000000a865d7d4, 0xc7dee68fffbaf900, 0xb36eb1caa58ee7dc},
                        {0xe79541e25d0dba6b, 0xe5baa16ee5b5419e, 0xf0fe55be95a18d13, 0x00000000a865d7d4},
                        {0xf5bad73c74be6d8a, 0x31a7445bdf8bcb5c, 0x4fcf7212bebfdd89, 0x0ec6680cabb95f09},
                        {0x00000bea6a6af755, 0xb1db9b0fecbfaabe, 0x05ada4e53975b451, 0xffffffffffffffff},
                        {0x00000000000075da, 0x996d1b60923c18a6, 0xe5baa16ee5b5419e, 0xf3fbe985738811dd},
                        {0x0000008000000000, 0x000000000dd2966b, 0x44a705073f90be80, 0x6465f271027abfa8},
                        {0x6edd225600000000, 0x16b3a918e4278c9d, 0x7fc92593c865b4c2, 0x0000000000010000},
                        {0xff98837fda2a5bdf, 0x86ddce906c8cdb4d, 0x27429c30e8b6cff7, 0x37269c228e8e3db1},
                        {0x7c6bcb08155fac38, 0x686f332000000000, 0x4cf560811e3465c5, 0x0000000000010000},
                        {0xc7dee68fffbaf900, 0xbad28e0ca5854070, 0x00000bea6a6af755, 0x8000000000000000},
                        {0xbd6192029dd91d60, 0xa73c905bcbc01878, 0x00129af7f2440efe, 0xc10a152d71cb3f16},
                        {0x0000000000400000, 0x000000000dd2966b, 0x2d21e3da342cd6be, 0xe5baa16ee5b5419e},
                        {0x986a686578456056, 0xf3fbe985738811dd, 0x0000000000000080, 0xc10a152d71cb3f16},
                        {0x0000000000000080, 0x314320aa7da5b1ef, 0xea59a91078581c00, 0x9d8dbb3a5bde4347},
                        {0xf48119b103954df1, 0x3b0d936889b10a5d, 0x9480583abdfb5837, 0x0000000100000000},
                        {0xb36eb1caa58ee7dc, 0x0000020000000000, 0x31523358d080e093, 0x16b3a918e4278c9d},
                        {0x86ddce906c8cdb4d, 0x0000000000010000, 0x000000000003ed82, 0x2d21e3da342cd6be},
                        {0x9d8dbb3a5bde4347, 0x0da24e08451a8d1a, 0x6d159abfb3030000, 0x86ddce906c8cdb4d},
                        {0xa8519a5b46242cc0, 0x31523358d080e093, 0xf5bad73c74be6d8a, 0x000000000000015b},
                        {0x7f2e6910bdea3ffd, 0x8c91e2fe14041a34, 0x0000000000000000, 0xd251a40a022b9000},
                        {0x0f812a265e560f2b, 0xc10a152d71cb3f16, 0xc10a152d71cb3f16, 0xe35a000000000000},
                        {0xd27d2fde3497614c, 0x0000000380f3cf69, 0xfad4dc0000000000, 0xd27d2fde3497614c},
                        {0x0000000001000000, 0xe35a000000000000, 0xdfd83d690e5f073e, 0x2d21e3da342cd6be},
                        {0x16b3a918e4278c9d, 0x38be984c83ce8648, 0x8c91e2fe14041a34, 0x4cf560811e3465c5},
                        {0x0000000000000004, 0x27429c30e8b6cff7, 0xff98837fda2a5bdf, 0xbad28e0ca5854070},
                        {0x1234769364d9eac9, 0xfad4dc0000000000, 0xd27d2fde3497614c, 0x05ada4e53975b451},
                        {0x000000000000000d, 0x14d93f0c55095499, 0x00020e6dfbb7c441, 0x4a6c986967d5ace8},
                        {0x0000000000400000, 0x9d8dbb3a5bde4347, 0x63eb500cce126b70, 0x2e00000000000000},
                        {0x62daff171a9fae42, 0xbad28e0ca5854070, 0x4fcf7212bebfdd89, 0x4ab9cfc9a41744c4},
                        {0x262a15662b298944, 0xb040414dd8c98a14, 0x0000000000000001, 0x16b3a918e4278c9d},
                        {0x31a7445bdf8bcb5c, 0x9d8dbb3a5bde4347, 0x0000000000000040, 0x0f812a265e560f2b},
                        {0x867e3492977cb1bb, 0x44a705073f90be80, 0xa73c905bcbc01878, 0x00000000a865d7d4},
                        {0x000000000003ed82, 0x0000000000002000, 0x0000000000002000, 0x25474d793f2c7d32},
                        {0x68323fe289df33d1, 0x000000000000000d, 0x0000000000000004, 0x37269c228e8e3db1},
                        {0x8c91e2fe14041a34, 0xca9d54bd4e78980e, 0x867e3492977cb1bb, 0x00004a9e26b7f794},
                        {0x6edd225600000000, 0x14d93f0c55095499, 0xbe55668178139c8e, 0xfad4dc0000000000},
                        {0x0000000000000000, 0xd251a40a022b9000, 0x6465f271027abfa8, 0x996d1b60923c18a6},
                        {0x000000000003ed82, 0x14d93f0c55095499, 0x7dc2ae94e4000000, 0xbebf0929f41aa230},
                        {0x000000000003ed82, 0x0000000000000004, 0x996d1b60923c18a6, 0xf5bad73c74be6d8a},
                        {0x8b4eb00000000000, 0x000000000dd2966b, 0x1234769364d9eac9, 0xca9d54bd4e78980e},
                        {0x0000000000000080, 0x0000008000000000, 0x7c6bcb08155fac38, 0x44a705073f90be80},
                        {0xd27d2fde3497614c, 0x90e1bc8ba22d3294, 0x000000000dd2966b, 0x0000000000000000},
                        {0x0000008000000000, 0x31a7445bdf8bcb5c, 0xe79541e25d0dba6b, 0xea59a91078581c00},
                        {0x25474d793f2c7d32, 0x7f2e6910bdea3ffd, 0xea59a91078581c00, 0x0000000100000000},
                        {0x2d21e3da342cd6be, 0x0000000000400000, 0x90e1bc8ba22d3294, 0x00004a9e26b7f794},
                        {0x27429c30e8b6cff7, 0xfad4dc0000000000, 0x000000a3714b9ad2, 0xff98837fda2a5bdf},
                        {0xdfd3a0870f60e072, 0x0000000000002000, 0xc3bd5e2cd52318a8, 0x0000000380f3cf69},
                        {0x1000000000000000, 0x7c6bcb08155fac38, 0x2d21e3da342cd6be, 0x867e3492977cb1bb},
                        {0x4cf560811e3465c5, 0x00004a9e26b7f794, 0x27429c30e8b6cff7, 0x86ddce906c8cdb4d},
                        {0x86ddce906c8cdb4d, 0x14d93f0c55095499, 0xa8519a5b46242cc0, 0xff98837fda2a5bdf},
                        {0x0000800000000000, 0xb36eb1caa58ee7dc, 0x0000000380f3cf69, 0xea59a91078581c00},
                        {0xc3bd5e2cd52318a8, 0x90e1bc8ba22d3294, 0x93d7d7a9d87056f0, 0x9420000000000000},
                        {0xf2a6b292a535dc4e, 0x1234769364d9eac9, 0x0000000001000000, 0x4a6c986967d5ace8},
                        {0xdfd83d690e5f073e, 0x314320aa7da5b1ef, 0xcb9848f06e9659f6, 0x9d8dbb3a5bde4347},
                        {0x4a6c986967d5ace8, 0xb1db9b0fecbfaabe, 0xb1db9b0fecbfaabe, 0x02ab7bb54e687499},
                        {0x61fd04828c93ce01, 0xc10a152d71cb3f16, 0xf0fe55be95a18d13, 0xfad4dc0000000000},
                        {0xbd6192029dd91d60, 0xe35a000000000000, 0x867e3492977cb1bb, 0x2d21e3da342cd6be},
                        {0x00020e6dfbb7c441, 0x31523358d080e093, 0xc3bd5e2cd52318a8, 0x0f812a265e560f2b},
                        {0x79780d4e5b2b3b2a, 0x1000000000000000, 0x4cf560811e3465c5, 0x7dc2ae94e4000000}};
  uint64_t y = -78;
  uint64_t e[100][8] = {{0xa446650ec071dac4, 0xa446650ec071dab8, 0x7403df17459a76b6, 0xb5ed98afd713160a,
                         0xffffffffffffffee, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x2fc04ec21c2c7962, 0x21126b946dfa9ff3, 0xa17cf03d7fffffb5, 0xffe943d033f290b2,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc36ad99775160000, 0xee44d799faab63ea, 0xeb2004f356ba1fed, 0xffffffffffff9605,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x4c458333e7d90cc0, 0xffffffffffdd7a9e, 0x80aa2c10e8824091, 0xa5ceca3e17283917,
                         0xfffffffffffffff9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffffffffffffffb2, 0xffffffffffffffff, 0xc0e51e1a1d6b1f3d, 0x5f2d7aded9582d1a,
                         0xfffffffffffffff4, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xdb388d74963a96e8, 0x4c6c1a47f297edbb, 0xa5ceca3e1728392c, 0x151c77caa1e5f4f9,
                         0xffffffffffffffeb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x151c77caa1e5f500, 0xfed0f43802478049, 0x40b088f9fdfe3621, 0xde3fffffffffffe0,
                         0x0000000000000020, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x3fac93841a56921c, 0xe1cb35379fe29552, 0xffffffffffffec45, 0xffffce337af6d403,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x819609d2470e8e00, 0x01fac48d6a064c7e, 0x40b088f9fdfe3618, 0x9281dfee68c70416,
                         0x0000000000000004, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8d3c98a8cc08fdfa, 0x9281dfee68c7041e, 0x1a15c020150821b6, 0x8e065fffffffffc3,
                         0x0000000000000023, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffffec80, 0x9281dfee68c70435, 0xb722f830a0fa5d36, 0x6b134320eb895776,
                         0x0000000000000022, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0b8c0407eb788b70, 0x9324f7ffffffffcd, 0xffffffffffff95f9, 0x2e1e6c3fffffffff,
                         0xffffffffffffffe0, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x4c6c1a47f297ede8, 0xffffce337af6d3ce, 0xffffffffffdc1793, 0xa446650ec071dac3,
                         0xfffffffffffffff4, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x52e98fe25ce55150, 0x6ba43d9625c2fe67, 0xc36ad9977515ffc0, 0xfd8c0c0db783c90c,
                         0xfffffffffffffff0, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffffffffb2000000, 0x172823897cd986ef, 0x323c6d7890a933ec, 0x3b62b09000e90c37,
                         0xffffffffffffffe9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfab4b4ae4b9fa2a8, 0x819609d2470e8de4, 0x151c77caa1e5f4c2, 0xffffffffec7fffeb,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x058bfb55d801d906, 0xfa54c8742f436e73, 0x4517c2287e230f51, 0xc0e51e1a1d6b1f3c,
                         0x0000000000000020, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfab4b4ae4b9fa2a8, 0xaeaecea287ffffe4, 0x7f8c4c23ad850b1b, 0x68f021913e999acb,
                         0xffffffffffffffe1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfc00000000000000, 0xfffffffffffffff1, 0xffe943d033f290e7, 0x2fc04ec21c2c7961,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x68f021913e999ad0, 0xffff63ffffffffe1, 0x80aa2c10e8824091, 0x8e065fffffffffb5,
                         0x0000000000000023, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc36ad99775160000, 0xb722f830a0fa5d5e, 0x323c6d7890a933de, 0x3b62b09000e90c37,
                         0xffffffffffffffe9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xdd6ca3771c1ea294, 0xcf16c125dd99f9f1, 0x0000000000000017, 0x2b8cd695e6c003da,
                         0x0000000000000023, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdb388d74963a96e8, 0xdddb6a4bf9e05aab, 0xffffffffec7fffbf, 0xa93ed956cc8a8ea9,
                         0x0000000000000003, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffffd900, 0x4c458333e7d90cbf, 0x4c6c1a47f297edae, 0x52e98fe25ce5511a,
                         0xffffffffffffffe9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x7403df17459a76c2, 0x2b8cd695e6c00422, 0xffffffffffffffd5, 0xedb2d47676776873,
                         0xfffffffffffffff8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xeb2004f356ba2000, 0x2e1e6c3fffffffbf, 0x389f89cbffffffe0, 0x394bc2191b35c2fa,
                         0x000000000000001b, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x323c6d7890a93412, 0xfffffffffffffbf9, 0x0122d03602c601db, 0x3b62b09000e90c02,
                         0xffffffffffffffe9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffe943d033f290e8, 0xb1ffffffffffffff, 0xfed0f4380247805d, 0x151c77caa1e5f4cf,
                         0xffffffffffffffeb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc0e51e1a1d6b1f3e, 0xfb1fffffffffffd2, 0xffffffccb0f83d67, 0x8f9431155adca5cb,
                         0x000000000000001f, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf43c4a400dc582e0, 0xa5ceca3e17283934, 0x8d3c98a8cc08fdf3, 0x172823897cd986d8,
                         0xffffffffffffffda, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xe1cb35379fe29560, 0x172823897cd986b5, 0x151c77caa1e5f4da, 0xa5ceca3e1728394d,
                         0xfffffffffffffff9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfffffffffecda264, 0xa9cd7bef151fffff, 0xfffffeeeb5b6cdba, 0xe86b0ffeed152e89,
                         0x0000000000000024, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffffe09e, 0xffffffffffdc1793, 0xaecb3e49e18a8041, 0xa17cf03d7fffffe7,
                         0x0000000000000018, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xcc1d49fd9f0bcb1c, 0xf43c4a400dc5829b, 0x7f8c4c23ad850b14, 0xcf16c125dd99fa17,
                         0x0000000000000017, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffec800000, 0xfa54c8742f436e9b, 0xfffffffffff63fff, 0x8e065fffffffffff,
                         0x0000000000000023, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd88c397af1e90214, 0x0000000000000049, 0xfffffffbc9d62b18, 0xfffffffbc9d62b65,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x46a5284f41c760e6, 0xffffffffec7ffffb, 0x1fffffffffffffff, 0xcf16c125dd99fa17,
                         0x0000000000000017, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdf082efa5cff7eaa, 0x40c1a89371b07d27, 0xfffffffffffffbdb, 0xcf16c125dd99fa1b,
                         0x0000000000000017, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6ba43d9625c2fe7e, 0xfab4b4ae4b9fa268, 0xfab4b4ae4b9fa28c, 0x44102e521741aba0,
                         0x0000000000000010, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xcd8516d9507b9d44, 0x1fffffffffffffbb, 0x52e98fe25ce5514b, 0x819609d2470e8de9,
                         0x0000000000000010, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffccb0f83d68, 0xcc1d49fd9f0bcb1b, 0x65a60531990ca46b, 0x68f021913e999abd,
                         0xffffffffffffffe1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfffffffffecda264, 0xffffffccb0f83d67, 0x1a15c020150821ff, 0x5445d4418e755abb,
                         0x0000000000000017, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7085ed07a5d13366, 0x0122d03602c60195, 0x9281dfee68c703f0, 0xffffffccb0f83d1e,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x21126b946dfa9ff4, 0xdf092c01e36809ad, 0xaecb3e49e18a8032, 0x7f8c4c23ad850b29,
                         0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfffc5e939368a41a, 0xcf16c125dd99fa1b, 0x4517c2287e230f1b, 0x000000000000004c,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffdc1794, 0x40c1a89371b07d6b, 0x0122d03602c601ad, 0xa93ed956cc8a8e64,
                         0x0000000000000003, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffd90000000000, 0xfffffffbc9d62b65, 0x151c77caa1e5f4ff, 0x68f021913e999abb,
                         0xffffffffffffffe1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x389f89cc00000000, 0x15427a6a7bf32808, 0x10b68cf8f102ecdd, 0xffffffffffb1ffd9,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x1f87ef0b8718020e, 0xe86b0ffeed152e3c, 0x09b46919184ca294, 0x323c6d7890a93406,
                         0xffffffffffffffef, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x172823897cd986f0, 0x2e1e6c3fffffffda, 0x8d3c98a8cc08fdda, 0xffffffffffb1ffe8,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x1a15c02015082200, 0x13d8b82591665da3, 0xfffc5e939368a3e1, 0xffffffffffffffff,
                         0x0000000000000026, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4c458333e7d90cc0, 0x0b8c0407eb788b36, 0xfa54c8742f436e69, 0x2eed8c275412c74b,
                         0x0000000000000013, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffec800000, 0xfffffffbc9d62b65, 0x3fac93841a56921b, 0x0122d03602c601ce,
                         0x0000000000000008, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8f9431155adca5cc, 0xa93ed956cc8a8e7b, 0xffffffffffffd8b5, 0x2eed8c275412c74b,
                         0x0000000000000013, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffffd900, 0xfd8c0c0db783c92d, 0x98ae7cfb552777f0, 0xfed0f43802478016,
                         0x000000000000001d, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x80aa2c10e8824092, 0x01dd16260c0ed75f, 0xc0e51e1a1d6b1f2c, 0xffffffb1ffffffd2,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x5445d4418e755af8, 0xffff63ffffffffc9, 0xf8f45af078bb9335, 0x15427a6a7bf3281a,
                         0xfffffffffffffff9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xe86b0ffeed152e8a, 0xffffffffffb1ffd6, 0xfffffffffecda263, 0x3fac93841a56921b,
                         0xfffffffffffffff2, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfed0f4380247805e, 0xd88c397af1e901e3, 0xc36ad9977515fffb, 0xe86b0ffeed152e68,
                         0x0000000000000024, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb722f830a0fa5d80, 0xf8f45af078bb9302, 0x21126b946dfa9fe4, 0xffffffffffff95fb,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x3fdbfce622a080ea, 0x2b8cd695e6c00401, 0xffffffffffffffd5, 0xeb2004f356ba1fff,
                         0x000000000000000d, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x46a5284f41c760e6, 0x2eed8c275412c747, 0x2eed8c275412c711, 0xba93ffffffffffc5,
                         0x0000000000000008, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdddb6a4bf9e05ad8, 0xfffffeeeb5b6cdc1, 0x9324f7ffffffffff, 0xdddb6a4bf9e05a8b,
                         0x000000000000000d, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffb2000000, 0xba93ffffffffffff, 0xcc1d49fd9f0bcad6, 0x3fac93841a5691d7,
                         0xfffffffffffffff2, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x15427a6a7bf3282a, 0xb5ed98afd7131609, 0x2b8cd695e6c00416, 0x8d3c98a8cc08fdcf,
                         0xffffffffffffffe8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfffffffffffffec8, 0x09b46919184ca2bd, 0x1f87ef0b87180202, 0x13d8b82591665d92,
                         0x0000000000000015, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7403df17459a76c2, 0x9324f7fffffffffa, 0xdddb6a4bf9e05a8b, 0x4517c2287e230f11,
                         0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfffffffffffffc0a, 0xa5ceca3e17283961, 0xff5f9a7d4e02342b, 0x52e98fe25ce5514f,
                         0xffffffffffffffe9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffffffffec800000, 0xfed0f4380247805d, 0x8e4d9c19366343af, 0xfbffffffffffffe1,
                         0xfffffffffffffff1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xe14646f5e358e7e4, 0x13d8b82591665dc1, 0xaecb3e49e18a8009, 0x3b62b09000e90c2f,
                         0xffffffffffffffe9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x5f2d7aded9582d48, 0x4c6c1a47f297eddc, 0xffffffffffffff7c, 0x15427a6a7bf32829,
                         0xfffffffffffffff9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xdf092c01e36809f8, 0xfed0f4380247804e, 0xffffffffffffec4f, 0x46a5284f41c760e5,
                         0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x058bfb55d801d906, 0x151c77caa1e5f4d7, 0x0b8c0407eb788b5b, 0xffffffccb0f83d35,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfffffffffecda264, 0xfffffffffff63fff, 0xfffffffffff63fff, 0xa446650ec071dac3,
                         0xfffffffffffffff4, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x40b088f9fdfe3652, 0xfffffffffffffbea, 0xfffffffffffffec7, 0x323c6d7890a93411,
                         0xffffffffffffffef, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x2b8cd695e6c00428, 0x44102e521741ab91, 0x058bfb55d801d8c8, 0xffe943d033f290bf,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x389f89cc00000000, 0xa5ceca3e17283940, 0x01fac48d6a064cb5, 0x9324f7ffffffffc6,
                         0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0xeb2004f356ba2000, 0x68f021913e999a8f, 0x40c1a89371b07d4d,
                         0x000000000000001f, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfffffffffecda264, 0xa5ceca3e17283961, 0xaeaecea287fffff9, 0xe1cb35379fe29539,
                         0x0000000000000013, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfffffffffecda264, 0xfffffffffffffec7, 0x40c1a89371b07d6b, 0x21126b946dfa9fc5,
                         0x0000000000000003, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8e06600000000000, 0xfffffffbc9d62b3b, 0x7403df17459a76c1, 0x44102e521741abb6,
                         0x0000000000000010, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffffd900, 0xffffd8ffffffffff, 0x172823897cd986ef, 0x151c77caa1e5f4da,
                         0xffffffffffffffeb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xdddb6a4bf9e05ad8, 0xdb388d74963a96a7, 0xfffffffbc9d62b39, 0xffffffffffffffff,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffffd90000000000, 0xdf092c01e36809f7, 0x7085ed07a5d13356, 0x98ae7cfb552777b9,
                         0x0000000000000006, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa446650ec071dac4, 0x3fdbfce622a080de, 0x98ae7cfb552777d9, 0xffffffb1ffffffb8,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x3fac93841a56921c, 0xffffffffec7ffff2, 0xdb388d74963a96e7, 0xffe943d033f290bb,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x09b46919184ca2be, 0x9324f7fffffffff4, 0xffffce337af6d3b7, 0x1f87ef0b8718020d,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xcd8516d9507b9d44, 0xfffffffffff63fbb, 0x5c4d4e570f4e7ccf, 0xfffffeeeb5b6cdc6,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x2000000000000000, 0x172823897cd986eb, 0x3fac93841a5691f6, 0x058bfb55d801d8f8,
                         0x0000000000000025, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8d3c98a8cc08fdfa, 0xffe943d033f290d0, 0x09b46919184ca2bd, 0xe86b0ffeed152e7e,
                         0x0000000000000024, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe86b0ffeed152e8a, 0xa5ceca3e17283938, 0xb722f830a0fa5d79, 0x1f87ef0b871801da,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffd9000000000000, 0x5445d4418e755af7, 0xfffffeeeb5b6cdcb, 0x98ae7cfb552777ff,
                         0x0000000000000006, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x5c4d4e570f4e7cd0, 0xdb388d74963a96ac, 0xf43c4a400dc582b3, 0xde3fffffffffffd2,
                         0x0000000000000020, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x11359751a996e03c, 0x7403df17459a7678, 0xffffffffb1fffffa, 0x52e98fe25ce5514f,
                         0xffffffffffffffe9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xcc1d49fd9f0bcb1c, 0xfd8c0c0db783c8e9, 0xf799c6be4e3096fc, 0xfed0f4380247801f,
                         0x000000000000001d, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x52e98fe25ce55150, 0xcf16c125dd99fa05, 0xcf16c125dd99f9e5, 0x2fc04ec21c2c792b,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x24e8a0392af73bb2, 0x2eed8c275412c72e, 0x9281dfee68c703fb, 0x9324f7ffffffffb6,
                         0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4c458333e7d90cc0, 0xba93ffffffffffc6, 0x058bfb55d801d8c0, 0x3fac93841a5691f3,
                         0xfffffffffffffff2, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xff5f9a7d4e023432, 0xf8f45af078bb9335, 0x5c4d4e570f4e7cc0, 0x46a5284f41c760aa,
                         0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfd6bf22038d3f934, 0x1fffffffffffffda, 0x8d3c98a8cc08fdf5, 0xaeaecea287ffffe8,
                         0xffffffffffffffd9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}};

  uint64_t z[100][8] = {0};
  vwmul_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 8; j++) {
      if (z[i][j] != e[i][j]) {
        return 1 + i;
      }
    }
  }

  return 0;
}

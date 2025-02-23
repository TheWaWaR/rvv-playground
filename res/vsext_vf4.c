#include <stddef.h>
#include <stdint.h>

void vsext_vf4(size_t n, const uint64_t x[], const uint64_t y[][4]);

int main() {
  uint64_t x[100] = {
      0x4fcf7212bebfdd89, 0xa6a669d1baba633e, 0xaf29109cc0000000, 0x7f2e6910bdea3ffd, 0xdfd83d690e5f073e,
      0xf48119b103954df1, 0x1735808ee4398bca, 0x0010000000000000, 0xc3bd5e2cd52318a8, 0x0000000000002000,
      0x1234769364d9eac9, 0xea2177d8d5100000, 0x00020e6dfbb7c441, 0xbad28e0ca5854070, 0x8000000000000000,
      0xcb9848f06e9659f6, 0xbad28e0ca5854070, 0x38be984c83ce8648, 0x9420000000000000, 0x686f332000000000,
      0xa8519a5b46242cc0, 0xfad4dc0000000000, 0x1000000000000000, 0xc9d368e6546c1f00, 0x7fc92593c865b4c2,
      0x8b4eb00000000000, 0x2d21e3da342cd6be, 0x000000000000015b, 0x000000000000000d, 0x05ada4e53975b451,
      0x314320aa7da5b1ef, 0x0000000380f3cf69, 0x7dc2ae94e4000000, 0x02ab7bb54e687499, 0xc7dee68fffbaf900,
      0x6465f271027abfa8, 0x0000000000000004, 0x0000000000000001, 0x16b3a918e4278c9d, 0xc10a152d71cb3f16,
      0x0000000000002000, 0x0000020000000000, 0x00000000000075da, 0x1735808ee4398bca, 0x7f2e6910bdea3ffd,
      0x4cf560811e3465c5, 0xe5baa16ee5b5419e, 0x0000000000010000, 0x000000000003ed82, 0xbd6192029dd91d60,
      0x0000000100000000, 0x8f09996552504a5d, 0x61fd04828c93ce01, 0xdfd3a0870f60e072, 0x34f2a050c605b6b0,
      0x86ddce906c8cdb4d, 0x7dc2ae94e4000000, 0x867e3492977cb1bb, 0x44a705073f90be80, 0x0000000000000067,
      0x0000000000002000, 0x0000000000000040, 0xea59a91078581c00, 0xdfd3a0870f60e072, 0xe35a000000000000,
      0x0ec6680cabb95f09, 0x0000800000000000, 0x1234769364d9eac9, 0x000000a3714b9ad2, 0x8a4a182923bdf75a,
      0x3d0e482377794618, 0x3d0e482377794618, 0xc7dee68fffbaf900, 0xdf9a26c8470349dd, 0x0100000000000000,
      0xfecee737556609f5, 0x0010000000000000, 0x4a6c986967d5ace8, 0x6edd225600000000, 0x0000000000000080,
      0x314320aa7da5b1ef, 0x63eb500cce126b70, 0x00129af7f2440efe, 0x27429c30e8b6cff7, 0x8a4a182923bdf75a,
      0xcb9848f06e9659f6, 0x38be984c83ce8648, 0x8c91e2fe14041a34, 0x62daff171a9fae42, 0x63eb500cce126b70,
      0x9480583abdfb5837, 0x3b0d936889b10a5d, 0xaf29109cc0000000, 0x58aee9fdc3f41b74, 0x996d1b60923c18a6,
      0xb1db9b0fecbfaabe, 0xc9d368e6546c1f00, 0xc3bd5e2cd52318a8, 0x5052886f7169c8c5, 0x7dc2ae94e4000000};
  uint64_t y[100][4];
  uint64_t e[100][4] = {{0x4fcf7212bebfdd89, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa6a669d1baba633e, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xaf29109cc0000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x7f2e6910bdea3ffd, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdfd83d690e5f073e, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xf48119b103954df1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x1735808ee4398bca, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0010000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc3bd5e2cd52318a8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000002000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1234769364d9eac9, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea2177d8d5100000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x00020e6dfbb7c441, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xbad28e0ca5854070, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x8000000000000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xcb9848f06e9659f6, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xbad28e0ca5854070, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x38be984c83ce8648, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9420000000000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x686f332000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa8519a5b46242cc0, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfad4dc0000000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x1000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc9d368e6546c1f00, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x7fc92593c865b4c2, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8b4eb00000000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x2d21e3da342cd6be, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000000015b, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000000000d, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x05ada4e53975b451, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x314320aa7da5b1ef, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000380f3cf69, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7dc2ae94e4000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x02ab7bb54e687499, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc7dee68fffbaf900, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x6465f271027abfa8, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000004, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x16b3a918e4278c9d, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc10a152d71cb3f16, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000002000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000020000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000000075da, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1735808ee4398bca, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7f2e6910bdea3ffd, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4cf560811e3465c5, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe5baa16ee5b5419e, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000010000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000003ed82, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xbd6192029dd91d60, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000100000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8f09996552504a5d, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x61fd04828c93ce01, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdfd3a0870f60e072, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x34f2a050c605b6b0, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x86ddce906c8cdb4d, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x7dc2ae94e4000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x867e3492977cb1bb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x44a705073f90be80, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000067, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000002000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000040, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea59a91078581c00, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xdfd3a0870f60e072, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xe35a000000000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0ec6680cabb95f09, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000800000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1234769364d9eac9, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000a3714b9ad2, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8a4a182923bdf75a, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x3d0e482377794618, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x3d0e482377794618, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc7dee68fffbaf900, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xdf9a26c8470349dd, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0100000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfecee737556609f5, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0010000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4a6c986967d5ace8, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6edd225600000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000080, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x314320aa7da5b1ef, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x63eb500cce126b70, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00129af7f2440efe, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x27429c30e8b6cff7, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8a4a182923bdf75a, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xcb9848f06e9659f6, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x38be984c83ce8648, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8c91e2fe14041a34, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x62daff171a9fae42, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x63eb500cce126b70, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9480583abdfb5837, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x3b0d936889b10a5d, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xaf29109cc0000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x58aee9fdc3f41b74, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x996d1b60923c18a6, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb1db9b0fecbfaabe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc9d368e6546c1f00, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc3bd5e2cd52318a8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x5052886f7169c8c5, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7dc2ae94e4000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000}};

  vsext_vf4(100, x, y);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 4; j++) {
      if (y[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}

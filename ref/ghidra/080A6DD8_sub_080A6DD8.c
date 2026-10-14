// sub_080A6DD8 at 0x080A6DD8 (thumb)

undefined4 sub_080A6DD8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08096AB8(param_1,*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1000,1);
    sub_08096AB8(param_1,*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1800,1);
    sub_08096AB8(param_1,*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x2000,1);
    sub_08096AB8(param_1,*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0xa00,2);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  uVar1 = (uint)*(byte *)(param_1 + 0x71);
  if (5 < uVar1) {
    uVar1 = 5;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x28) = &DAT_082b60e8 + uVar1 * 8;
  if ((DAT_0200520c & 0x7f) != 3) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


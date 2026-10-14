// sub_080C9754 at 0x080C9754 (thumb)

undefined4 sub_080C9754(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0xc);
  if ((bVar1 < 2) && (bVar1 != 4)) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x2c) + 0xc);
    if ((bVar1 < 2) &&
       (((*(byte *)(*(int *)(param_1 + 0x2c) + 0xe) < 10 && (bVar1 != 4)) &&
        ((*(byte *)(DAT_0202f5c0 + 10) & 1) != 0)))) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c2e4 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}


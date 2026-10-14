// sub_080E7510 at 0x080E7510 (thumb)

undefined4 sub_080E7510(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(*(int *)(param_1 + 0x28) + 0xe0b) & 0xfc) == 0) &&
     (bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 3), bVar1 != 0)) {
    if (bVar1 < 2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e930 + (uint)*(byte *)(param_1 + 0x10) * 4));
    }
    sub_080177F4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}


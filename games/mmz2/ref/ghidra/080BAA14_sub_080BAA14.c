// sub_080BAA14 at 0x080BAA14 (thumb)

undefined4 sub_080BAA14(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_080127E4(param_1,0x7100);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x12) = 0x20;
  iVar1 = (uint)*(byte *)(param_1 + 0x10) * 2;
  if ((char)(&DAT_0834715c)[iVar1] == 0) {
    *(int *)(param_1 + 0x60) = (char)(&DAT_0834715d)[iVar1] * 0x280;
    *(int *)(param_1 + 0x68) = (char)(&DAT_0834715d)[(uint)*(byte *)(param_1 + 0x10) * 2] * -8;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    *(int *)(param_1 + 0x5c) = (char)(&DAT_0834715c)[iVar1] * 0x280;
    *(int *)(param_1 + 100) = (char)(&DAT_0834715c)[(uint)*(byte *)(param_1 + 0x10) * 2] * -8;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  sub_080BAAD8(param_1);
  return in_lr;
}


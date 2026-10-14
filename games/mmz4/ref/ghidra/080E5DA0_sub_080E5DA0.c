// sub_080E5DA0 at 0x080E5DA0 (thumb)

undefined4 sub_080E5DA0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(byte *)(param_1 + 10) = bVar1 | 0x13;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 & 0xef | 3;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08865a1c + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080E5E3C(param_1);
  return in_lr;
}


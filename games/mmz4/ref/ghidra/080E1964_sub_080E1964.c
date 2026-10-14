// sub_080E1964 at 0x080E1964 (thumb)

undefined4 sub_080E1964(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,1);
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 0) {
    if ((bVar1 & 0x80) == 0) {
      if ((bVar1 & 0x40) == 0) {
        *(byte *)(param_1 + 0x25) = bVar1 & 0x1f;
      }
      else {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
      }
    }
    else {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080E1934(param_1);
  return in_lr;
}


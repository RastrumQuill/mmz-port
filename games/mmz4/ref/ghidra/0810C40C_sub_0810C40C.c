// sub_0810C40C at 0x0810C40C (thumb)

undefined4 sub_0810C40C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0801CF00(param_1,0x430a);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x10) & 1;
  *(byte *)(param_1 + 0x4a) =
       *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*(byte *)(param_1 + 0x10) & 1) << 4);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x10) >> 1 & 1;
  bVar1 = *(byte *)(param_1 + 0x10) >> 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)((bVar1 & 1) << 5);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_0810C4C0(param_1);
  return in_lr;
}


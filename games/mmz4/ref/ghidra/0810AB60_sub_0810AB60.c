// sub_0810AB60 at 0x0810AB60 (thumb)

undefined4 sub_0810AB60(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_088696f8 + (uint)*(byte *)(param_1 + 0x11) * 4));
    *(byte *)(param_1 + 0xd) = bVar1;
  }
  else {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_088696fa + (uint)bVar1 * 4));
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0810AB00(param_1);
  return in_lr;
}


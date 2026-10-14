// sub_0810C274 at 0x0810C274 (thumb)

undefined4 sub_0810C274(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0801CF00(param_1,0x4305);
    uVar1 = 0x800;
  }
  else {
    sub_0801CF00(param_1,0x4307);
    uVar1 = 0x8800;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = 0x5800;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 4);
  sub_0810C198(param_1);
  return in_lr;
}


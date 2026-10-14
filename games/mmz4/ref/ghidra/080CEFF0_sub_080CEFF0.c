// sub_080CEFF0 at 0x080CEFF0 (thumb)

undefined4 sub_080CEFF0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined auStack_2c [4];
  undefined4 local_28 [3];
  byte abStack_1c [4];
  
  sub_08128B5C(auStack_2c,&DAT_08129b34,3);
  local_28[0] = 0xb700;
  local_28[1] = 0xb702;
  local_28[2] = 0xb702;
  sub_08128B5C(abStack_1c,&DAT_08129b44,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = auStack_2c[bVar1];
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,*(undefined2 *)(local_28 + bVar1));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&UNK_088637d8 + (uint)abStack_1c[bVar1] * 0x18,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080CF0D4(param_1);
  return in_lr;
}


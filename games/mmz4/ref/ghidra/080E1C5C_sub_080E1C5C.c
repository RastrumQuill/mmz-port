// sub_080E1C5C at 0x080E1C5C (thumb)

undefined4 sub_080E1C5C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[0] = 0x8900;
  local_14[1] = 0x8904;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,*(undefined2 *)(local_14 + bVar1));
  sub_080E1CD4(param_1);
  return in_lr;
}


// sub_080BD63C at 0x080BD63C (thumb)

undefined4 sub_080BD63C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_40 [4];
  int local_30 [4];
  byte abStack_20 [4];
  
  sub_08128BBC(local_40,0,0x10);
  local_40[0] = 0x8905;
  sub_08128BBC(local_30,0,0x10);
  local_30[0] = 0x200;
  sub_08128BBC(abStack_20,0,4);
  bVar1 = *(byte *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = local_30[bVar1];
  iVar2 = iVar3 * *(short *)((int)&DAT_08128c10 +
                            ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  iVar3 = iVar3 * (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x11)];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,*(undefined2 *)(local_40 + bVar1));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&UNK_088616e0 + (uint)abStack_20[bVar1] * 0x18,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080BDA58(param_1);
  return in_lr;
}


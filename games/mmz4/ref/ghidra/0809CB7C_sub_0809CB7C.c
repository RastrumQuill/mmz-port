// sub_0809CB7C at 0x0809CB7C (thumb)

undefined4 sub_0809CB7C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  sub_0801CF00(param_1,*(byte *)(param_1 + 0x11) + 0xa926);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885df54,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    uVar1 = 0x1c00;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
    uVar1 = 0xffffe400;
  }
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0x300;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x54) - *(int *)(iVar2 + 0x54);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x58) - *(int *)(iVar2 + 0x58);
  *(undefined *)(param_1 + 0x12) = 0x50;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0809CB1C(param_1);
  return in_lr;
}


// sub_08083D0C at 0x08083D0C (thumb)

undefined4 sub_08083D0C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6e03);
    sub_080B9E5C(param_1,0,*(undefined *)(param_1 + 0x13),*(undefined *)(param_1 + 0xbe));
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x13) * 0x100 + -0x80;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe40;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(byte *)(param_1 + 0x12) < 0x20) {
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x380 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x380;
    }
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 == 0) {
      return in_lr;
    }
  }
  sub_08083ED4(param_1);
  sub_0801DD2C(3,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}


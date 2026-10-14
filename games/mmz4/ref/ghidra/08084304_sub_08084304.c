// sub_08084304 at 0x08084304 (thumb)

undefined4 sub_08084304(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x1c00);
    sub_08005784(param_1 + 0x74,&DAT_0885b480);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar2 + 0xa00);
  if (sVar1 != 0) {
    iVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + -0xa00;
  }
  iVar2 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xb4));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    sub_08005784(param_1 + 0x74,&DAT_0885b468);
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


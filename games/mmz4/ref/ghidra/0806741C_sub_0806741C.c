// sub_0806741C at 0x0806741C (thumb)

undefined4 sub_0806741C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa906);
    sub_08002B10(0x62);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x05' < *(char *)(param_1 + 0x71)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar1 = *(int *)(param_1 + 0x2c);
        iVar3 = *(int *)(param_1 + 0x54);
        iVar4 = -0x5300;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x2c);
        iVar3 = *(int *)(param_1 + 0x54);
        iVar4 = 0x5300;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(iVar1 + 0x54) - (iVar3 + iVar4);
      uVar2 = FUN_081288bc(*(int *)(param_1 + 0x5c) >> 1,0x3c);
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      *(undefined4 *)(param_1 + 0x60) = 0xfffff100;
      sub_08005784(param_1 + 0x74,&DAT_08857e28);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(int *)(param_1 + 0xb8) < iVar1) {
      sub_08002B10(0x5f);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


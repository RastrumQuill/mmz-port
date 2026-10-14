// sub_080CE728 at 0x080CE728 (thumb)

undefined4 sub_080CE728(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0xbd) != '\0')) {
      iVar3 = *(int *)(param_1 + 0x54) - *(int *)(*(int *)(param_1 + 0x28) + 0xc4);
      *(int *)(param_1 + 100) = iVar3;
      if (iVar3 < 0) {
        *(int *)(param_1 + 100) = -iVar3;
      }
      iVar3 = *(int *)(param_1 + 100) << 3;
      *(int *)(param_1 + 100) = iVar3;
      iVar3 = FUN_080fe2f8(iVar3,0x3000);
      iVar3 = iVar3 + 1;
    }
    else {
      iVar3 = 1;
    }
    *(int *)(param_1 + 100) = iVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar3 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar3;
    if (iVar3 == 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 2:
    *(undefined *)(param_1 + 0x13) = 0x18;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = 0x200;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x68);
    if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
      *(int *)(param_1 + 0x68) = -*(int *)(param_1 + 0x68);
    }
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1700);
    if ((sVar2 != 0) || (uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), 0x6000 < uVar4)) {
      *(undefined *)(param_1 + 0xbc) = 1;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080CE510(param_1);
    }
  }
  return in_lr;
}


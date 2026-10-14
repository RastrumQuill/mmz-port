// sub_0806DF64 at 0x0806DF64 (thumb)

undefined4 sub_0806DF64(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08005784(param_1 + 0x74,&DAT_088590a0);
    sub_0806F318(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    sub_0801CF00(param_1,0xad00);
    *(undefined2 *)(param_1 + 0x50) = 0xea;
    *(undefined2 *)(param_1 + 0x52) = 0xea;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    sVar1 = (short)((uint)*(byte *)(param_1 + 0x12) * 0xd0 >> 8) + 0xd0;
    *(short *)(param_1 + 0x50) = sVar1;
    *(short *)(param_1 + 0x52) = sVar1;
    uVar4 = (uint)*(byte *)(param_1 + 0x12);
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    iVar3 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar3;
    uVar4 = iVar3 * 0x1000000;
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    cVar5 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar5;
    cVar2 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) << 4,0x18);
    DAT_0202dae5 = '\x10' - cVar2;
    if (cVar5 == '\0') {
      sub_0806F2C8(param_1);
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
      sub_0801CF00(param_1,0xad00);
      sub_0801CFF0(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0xc3) = 0;
      sub_0806F11C(param_1);
    }
  default:
    goto switchD_0806df78_caseD_6;
  }
  if (uVar4 == 0) {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_0806df78_caseD_6:
  return in_lr;
}


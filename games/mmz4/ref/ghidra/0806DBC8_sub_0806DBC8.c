// sub_0806DBC8 at 0x0806DBC8 (thumb)

undefined4 sub_0806DBC8(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08005784(param_1 + 0x74,&DAT_088590a0);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0xc3) = 1;
    sub_0806F318(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    sub_0801CF00(param_1,0xad00);
    *(undefined2 *)(param_1 + 0x50) = 0xd0;
    *(undefined2 *)(param_1 + 0x52) = 0xd0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0806dbdc_caseD_1:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    DAT_0202dae5 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) << 4,0x18);
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_1 + 0xf) + '\x01';
LAB_0806dd1e:
      *(char *)(param_1 + 0xf) = cVar2;
    }
switchD_0806dbdc_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0806dbdc_caseD_1;
  case 2:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xf) + '\x01';
    goto LAB_0806dd1e;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar3 = *(short *)((int)&DAT_08128c10 + (((uint)*(byte *)(param_1 + 0x12) << 0x19) >> 0x17)) *
            -0x1a;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    sVar1 = (short)((uint)iVar3 >> 8) + 0xea;
    *(short *)(param_1 + 0x50) = sVar1;
    *(short *)(param_1 + 0x52) = sVar1;
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    sub_0806F2C8(param_1);
    sub_0801CF00(param_1,0xad00);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0xe) = 2;
    cVar2 = '\0';
    goto LAB_0806dd1e;
  default:
    goto switchD_0806dbdc_caseD_6;
  }
}


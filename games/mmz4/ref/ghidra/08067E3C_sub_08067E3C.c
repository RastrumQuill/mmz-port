// sub_08067E3C at 0x08067E3C (thumb)

undefined4 sub_08067E3C(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08857f90);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x54) + -0x3b00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54) + 0x3b00;
    }
    *(int *)(param_1 + 100) = iVar3;
    iVar3 = *(int *)(param_1 + 0x58) + -0x2100;
    *(int *)(param_1 + 0x68) = iVar3;
    uVar5 = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = 2;
    }
    *(undefined *)(param_1 + 0x13) = uVar5;
    *(undefined *)(param_1 + 0x12) = 0xc4;
    uVar4 = sub_080DE7D4(param_1,*(undefined4 *)(param_1 + 100),iVar3,*(undefined *)(param_1 + 0x13)
                         ,0xc4);
    *(undefined4 *)(param_1 + 200) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(int *)(iVar1 + 0xec) == 0) {
    uVar4 = 0x40;
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  if (*(char *)(param_1 + 0x13) == '\x02') {
    uVar6 = 0;
    if (*(int *)(iVar1 + 0xec) < 1) goto LAB_08067ee8;
LAB_08067eec:
    iVar7 = *(int *)(param_1 + 100);
    iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar7 <= iVar3) {
      if (iVar3 - iVar7 < 0x4001) {
        iVar3 = (*(int *)(iVar1 + 0x1bc) + 0x2c0) - *(int *)(param_1 + 0x5c);
      }
      else {
        iVar3 = (*(int *)(iVar1 + 0x1bc) + 0x240) - *(int *)(param_1 + 0x5c);
      }
      goto LAB_08067fb0;
    }
    if (iVar7 - iVar3 < 0x4001) {
LAB_08067fa0:
      iVar3 = *(int *)(iVar1 + 0x1bc);
      iVar7 = -0x2c0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x1bc);
      iVar7 = -0x240;
    }
  }
  else {
    uVar6 = *(uint *)(iVar1 + 0xec) >> 0x1f;
LAB_08067ee8:
    if (uVar6 != 0) goto LAB_08067eec;
    iVar7 = *(int *)(param_1 + 100);
    iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar3 < iVar7) {
      if (iVar7 - iVar3 < 0x41) {
        iVar3 = (*(int *)(iVar1 + 0x1bc) + 0x2c0) - *(int *)(param_1 + 0x5c);
      }
      else {
        iVar3 = (*(int *)(iVar1 + 0x1bc) + 0x240) - *(int *)(param_1 + 0x5c);
      }
      goto LAB_08067fb0;
    }
    if (iVar7 - iVar3 < 0x41) goto LAB_08067fa0;
    iVar3 = *(int *)(iVar1 + 0x1bc);
    iVar7 = -0x240;
  }
  iVar3 = iVar3 + iVar7 + *(int *)(param_1 + 0x5c);
LAB_08067fb0:
  *(int *)(iVar1 + 0x1bc) = iVar3;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x19;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


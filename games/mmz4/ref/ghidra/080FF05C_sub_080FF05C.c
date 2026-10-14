// sub_080FF05C at 0x080FF05C (thumb)

undefined4 sub_080FF05C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0') {
    if ((iVar3 == 0) || (*(char *)(iVar3 + 0xd) != '\x03')) {
      iVar3 = *(int *)(param_1 + 0x58) + -0x100;
      *(int *)(param_1 + 0x58) = iVar3;
      if (iVar3 < *(int *)(param_1 + 0xb8)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      }
    }
    else {
      sub_08002B10(0x185);
      *(undefined *)(param_1 + 0x12) = 0x20;
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080ff18c:
      *(char *)(param_1 + 0xd) = cVar1;
    }
  }
  else {
    DAT_0202daec = DAT_0202daec + 2;
    if ((iVar3 == 0) || (*(char *)(iVar3 + 0xd) != '\x03')) {
      *(undefined *)(param_1 + 0xd) = 1;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == -1) {
        cVar1 = '\0';
        goto LAB_080ff18c;
      }
    }
    else {
      if (cVar1 == '\x01') {
        *(int *)(param_1 + 0x58) = iVar4 + 0x100;
        iVar3 = *(int *)(param_1 + 0xb8) + 0x1100;
        if (iVar3 < iVar4 + 0x100) {
          *(int *)(param_1 + 0x58) = iVar3;
          *(undefined *)(param_1 + 0xd) = 2;
        }
      }
      else if (cVar1 == '\x02') {
        *(int *)(param_1 + 0x58) = iVar4 + -0x100;
        iVar3 = *(int *)(param_1 + 0xb8) + 0x1000;
        if (iVar4 + -0x100 < iVar3) {
          *(int *)(param_1 + 0x58) = iVar3;
          *(undefined *)(param_1 + 0xd) = 3;
        }
      }
      else {
        *(int *)(param_1 + 0x58) = iVar4 + 0x100;
        iVar3 = *(int *)(param_1 + 0xb8) + 0x1000;
        if (iVar3 < iVar4 + 0x100) {
          *(int *)(param_1 + 0x58) = iVar3;
        }
      }
      *(undefined *)(param_1 + 0x12) = 0x20;
    }
  }
  iVar3 = *(int *)(param_1 + 0x58) - *(int *)(iVar5 + 0x58);
  if (iVar3 < 0x2400) {
    uVar2 = 0xa904;
  }
  else if (iVar3 < 0x3400) {
    uVar2 = 0xa905;
  }
  else {
    if (0x43ff < iVar3) {
      sub_0801CF00(param_1,0xa907);
      goto LAB_080ff1dc;
    }
    uVar2 = 0xa906;
  }
  sub_0801CF00(param_1,uVar2);
LAB_080ff1dc:
  sub_0801CFF0(param_1);
  if (iVar4 == *(int *)(param_1 + 0x58)) {
    *(undefined *)(param_1 + 0xbd) = 0;
  }
  else if (*(char *)(param_1 + 0xbd) == '\0') {
    sub_08002B10(0x78);
    *(char *)(param_1 + 0xbd) = '\x01';
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return in_lr;
}


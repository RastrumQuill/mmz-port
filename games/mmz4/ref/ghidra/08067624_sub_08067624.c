// sub_08067624 at 0x08067624 (thumb)

undefined4 sub_08067624(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa90f);
    uVar3 = sub_080C844C(param_1,1,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0xfffffe00;
    if (-0x200 < iVar4) goto LAB_080676b6;
  }
  else if (iVar4 < 0x200) {
    uVar3 = 0x200;
LAB_080676b6:
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0xbc) + 0x5e00;
    if (iVar4 <= *(int *)(param_1 + 0x54)) goto LAB_080676f0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xc0) + -0x5e00;
    if (*(int *)(param_1 + 0x54) <= iVar4) goto LAB_080676f0;
  }
  *(int *)(param_1 + 0x54) = iVar4;
LAB_080676f0:
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      sub_08005784(param_1 + 0x74,&DAT_08857de0);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if ((*(int *)(param_1 + 0x2c) != 0) && (*(char *)(*(int *)(param_1 + 0x2c) + 0xd) != '\0')) {
    *(undefined *)(param_1 + 0x25) = 0xf;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (0x18 < bVar1) {
    if ((*(int *)(param_1 + 0x2c) == 0) || (*(char *)(*(int *)(param_1 + 0x2c) + 0xd) == '\0')) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0x10;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


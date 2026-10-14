// sub_0806C458 at 0x0806C458 (thumb)

undefined4 sub_0806C458(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa17);
    sub_08002B10(0xcb);
    *(undefined4 *)(param_1 + 0x5c) = 0x600;
    *(undefined4 *)(param_1 + 100) = 0x20;
    if (*(short *)(param_1 + 0xa4) < 0x10) {
      uVar3 = 0x480;
    }
    else if (*(short *)(param_1 + 0xa4) < 0x20) {
      uVar3 = 0x440;
    }
    else {
      uVar3 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x8d;
    }
    else {
      uVar1 = 0xf3;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined *)(param_1 + 0x13) = 6;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0xf);
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xaa1f);
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,&DAT_08858e50);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  if (cVar2 == '\x01') {
    bVar5 = false;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc4)) {
        bVar5 = true;
      }
LAB_0806c540:
      if (!bVar5) goto LAB_0806c58c;
    }
    else if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0xc4)) goto LAB_0806c540;
    sub_0801CF00(param_1,0xaa18);
    sub_08005784(param_1 + 0x74,&DAT_08858e38);
  }
  else {
    if ((cVar2 != '\x02') || (*(char *)(param_1 + 0x71) < '\x03')) goto LAB_0806c58c;
    sub_08002B10(0xd2);
    sub_080CA0E0(param_1,0,0);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0806c58c:
  iVar6 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       (iVar6 * *(short *)((int)&DAT_08128c10 +
                          ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) >> 8);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (iVar6 * (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] >> 8);
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 < iVar6) {
    iVar4 = iVar6 - *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 0x5c) = iVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 200) + 0x1800;
    if (*(int *)(param_1 + 0x54) < iVar4) {
      *(int *)(param_1 + 0x54) = iVar4;
      *(undefined *)(param_1 + 0xd) = 0x18;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0xcc) + -0x1800;
    if (iVar4 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar4;
      *(undefined *)(param_1 + 0xd) = 0x18;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


// sub_0807FDA8 at 0x0807FDA8 (thumb)

undefined4 sub_0807FDA8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_0807fdbc_caseD_1;
  case 2:
    sub_0801CF00(param_1,0x1a00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(char *)(param_1 + 0xc0) == '\0')) {
        iVar4 = iVar4 * 0x60;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar4 >> 8;
      }
      iVar4 = *(int *)(param_1 + 0x5c) + -0x10;
      *(int *)(param_1 + 0x5c) = iVar4;
      if (iVar4 < -0x200) {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      }
      if ((*(char *)(param_1 + 0x11) != '\0') &&
         (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54))) goto LAB_0807ffa0;
    }
    else {
      if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(char *)(param_1 + 0xc0) != '\0')) {
        iVar4 = iVar4 * 0x60;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar4 >> 8;
      }
      iVar4 = *(int *)(param_1 + 0x5c) + 0x10;
      *(int *)(param_1 + 0x5c) = iVar4;
      if (0x200 < iVar4) {
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
      }
      if ((*(char *)(param_1 + 0x11) != '\0') &&
         (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54))) {
LAB_0807ffa0:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    sub_08080594(param_1);
    cVar2 = sub_08080614(param_1);
    goto joined_r0x0807ffb8;
  case 4:
    sub_0801CF00(param_1,0x1a02);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if ('\0' < *(char *)(param_1 + 0x71)) {
      *(undefined *)(param_1 + 0xc1) = 1;
    }
    cVar2 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar2 + '\x01';
    cVar2 = sub_08128A9C(cVar2,6);
    if (cVar2 == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sub_080D64A4(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
      }
      else {
        sub_080D64A4(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
      }
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x5c) = iVar4 + 10;
      if (0 < iVar4 + 10) {
        *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
        goto LAB_0808009c;
      }
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar4 + -10;
      if (iVar4 + -10 < 0) {
        *(undefined *)(param_1 + 0xe) = 0;
LAB_0808009c:
        *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) ^ 1;
      }
    }
    cVar2 = sub_08080594(param_1);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) ^ 1;
    }
  default:
    goto switchD_0807fdbc_caseD_6;
  }
  sub_0801CF00(param_1,0x1a07);
  if (*(byte *)(param_1 + 0x12) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = *(byte *)(param_1 + 0x12) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(undefined *)(param_1 + 0xc2) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_08002B10(0x54);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0807fdbc_caseD_1:
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if ((0xb < bVar1) && (cVar2 = sub_08128A9C(*(undefined *)(param_1 + 0x13),6), cVar2 == '\0')) {
    sub_080D0894(3,param_1 + 0x54);
  }
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x54) + iVar4;
  *(int *)(param_1 + 0x54) = iVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x5c) = iVar4 + -0x10;
    if (iVar4 + -0x10 < -0x200) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0807fec8;
    }
    if ((*(char *)(param_1 + 0x11) != '\0') && (iVar5 < *(int *)(DAT_0202dbf0 + 0x54)))
    goto LAB_0807fec4;
  }
  else {
    *(int *)(param_1 + 0x5c) = iVar4 + 0x10;
    if (iVar4 + 0x10 < 0x201) {
      if ((*(char *)(param_1 + 0x11) == '\0') || (iVar5 <= *(int *)(DAT_0202dbf0 + 0x54)))
      goto LAB_0807feca;
LAB_0807fec4:
      cVar2 = *(char *)(param_1 + 0xe) + '\x03';
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    }
LAB_0807fec8:
    *(char *)(param_1 + 0xe) = cVar2;
  }
LAB_0807feca:
  sub_08080594(param_1);
  cVar2 = sub_08080614(param_1);
joined_r0x0807ffb8:
  if (cVar2 == '\x01') {
    if (0x2f2 < *(int *)(param_1 + 0x5c) + 0x179U) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else if (cVar2 == '\x02') {
    *(undefined *)(param_1 + 0xb9) = 0x3c;
    *(undefined *)(param_1 + 0x11) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0807fdbc_caseD_6:
  sub_0801CFF0(param_1);
  return in_lr;
}


// sub_080DCBEC at 0x080DCBEC (thumb)

undefined4 sub_080DCBEC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0xf;
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_08017700(param_1,0xda01);
    bVar1 = *(byte *)(param_1 + 10);
    uVar4 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar4 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080dcd84:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08017700(param_1,0xda00);
      sub_080177F4(param_1);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        iVar3 = *(int *)(param_1 + 0xb4) - ((uVar4 * 2 >> 0x11 & 0x3f) * 0x100 + 0x2000);
      }
      else {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        iVar3 = *(int *)(param_1 + 0xb4) + (uVar4 * 2 >> 0x11 & 0x3f) * 0x100 + 0x2000;
      }
      DAT_0202f608 = uVar4 & 0x7fffffff;
      *(int *)(param_1 + 0xb8) = iVar3;
      *(undefined *)(param_1 + 0xd) = 0;
    }
    return in_lr;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      return in_lr;
    }
    goto LAB_080dcd84;
  }
  if (bVar1 != 0) {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar3 < -0x1bf) {
      if (*(char *)(param_1 + 0x71) == '\x03') {
        sub_080177CC(param_1,0xda00,3,4);
      }
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar3 + -4;
    }
    cVar5 = *(char *)(param_1 + 0x12);
    iVar3 = *(int *)(param_1 + 0x54);
    if (cVar5 == '\x0f') goto LAB_080dccd6;
    if (iVar3 < *(int *)(param_1 + 0xb8)) goto LAB_080dccc0;
  }
  else {
    if (iVar3 < 0x1c0) {
      *(int *)(param_1 + 0x5c) = iVar3 + 4;
    }
    else if (*(char *)(param_1 + 0x71) == '\x03') {
      sub_080177CC(param_1,0xda00,3,4);
    }
    cVar5 = *(char *)(param_1 + 0x12);
    iVar3 = *(int *)(param_1 + 0x54);
    if (cVar5 == '\x0f') goto LAB_080dccd6;
    if (*(int *)(param_1 + 0xb8) < iVar3) {
LAB_080dccc0:
      uVar2 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x5c),0x18);
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  if (cVar5 != '\x0f') {
    return in_lr;
  }
LAB_080dccd6:
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (DAT_020302c0 + -0x9800 <= iVar3) {
      return in_lr;
    }
  }
  else if ((iVar3 < 0x45001) && (iVar3 <= DAT_020302c0 + 0x97ff)) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  return in_lr;
}


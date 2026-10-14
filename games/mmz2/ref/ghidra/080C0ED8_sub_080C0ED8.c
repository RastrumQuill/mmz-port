// sub_080C0ED8 at 0x080C0ED8 (thumb)

undefined4 sub_080C0ED8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x03') {
      sub_080127E4(param_1,0x1d02);
      sub_080128D4(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_08348840;
      *(undefined2 *)(param_1 + 0x26) = 0x2401;
      *(undefined *)(param_1 + 0xbd) = 3;
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x54) + -0x2000;
      sub_080032EC(0xf2);
    }
    else {
      if (*(char *)(param_1 + 0x10) == '\x06') {
        sub_080127E4(param_1,0x1d02);
        sub_080128D4(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        *(undefined **)(param_1 + 0x30) = &DAT_08348840;
        *(undefined2 *)(param_1 + 0x26) = 0x2401;
        *(undefined *)(param_1 + 0xbd) = 3;
        iVar2 = *(int *)(param_1 + 0x54) + 0x2000;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54);
      }
      *(int *)(param_1 + 0xc0) = iVar2;
    }
    *(undefined *)(param_1 + 0x12) = 0x1a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_080128D4(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  piVar4 = (int *)(param_1 + 0xc0);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == *piVar4) goto LAB_080c0fec;
  if (*(char *)(param_1 + 0x10) == '\x03') {
    *(int *)(param_1 + 0x54) = iVar2 + -0x300;
    iVar3 = *piVar4;
    if (iVar3 <= iVar2 + -0x300) goto LAB_080c0fec;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x06') goto LAB_080c0fec;
    *(int *)(param_1 + 0x54) = iVar2 + 0x300;
    iVar3 = *piVar4;
    if (iVar2 + 0x300 <= iVar3) goto LAB_080c0fec;
  }
  *(int *)(param_1 + 0x54) = iVar3;
LAB_080c0fec:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if ((*(char *)(param_1 + 0x10) == '\x03') || (*(char *)(param_1 + 0x10) == '\x06')) {
      sub_080127E4(param_1,0x1d13);
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    *(undefined *)(param_1 + 0xd) = 0x13;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


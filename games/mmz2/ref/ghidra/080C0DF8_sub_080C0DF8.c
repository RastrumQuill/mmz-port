// sub_080C0DF8 at 0x080C0DF8 (thumb)

undefined4 sub_080C0DF8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\a')) {
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined *)(*(int *)(param_1 + 0x28) + 0xc1) = 0;
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_08348840;
      *(undefined2 *)(param_1 + 0x26) = 0x2401;
      *(undefined *)(param_1 + 0xbd) = 3;
      sub_080032EC(0xf2);
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
    }
    *(undefined *)(param_1 + 0x12) = 0x2e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_080128D4(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  piVar4 = (int *)(param_1 + 0xc0);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == *piVar4) goto LAB_080c0ea8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(int *)(param_1 + 0x54) = iVar2 + -0x300;
    iVar3 = *piVar4;
    if (iVar3 <= iVar2 + -0x300) goto LAB_080c0ea8;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\a') goto LAB_080c0ea8;
    *(int *)(param_1 + 0x54) = iVar2 + 0x300;
    iVar3 = *piVar4;
    if (iVar2 + 0x300 <= iVar3) goto LAB_080c0ea8;
  }
  *(int *)(param_1 + 0x54) = iVar3;
LAB_080c0ea8:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\a')) {
      *(undefined *)(param_1 + 0xbd) = 2;
    }
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


// sub_0802E184 at 0x0802E184 (thumb)

undefined4 sub_0802E184(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined *)(param_1 + 0xba) = 0;
  piVar3 = (int *)(param_1 + 0xcc);
  iVar1 = *piVar3;
  *piVar3 = iVar1 + -1;
  if (iVar1 + -1 != -1) {
    return in_lr;
  }
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 0xf;
  if (uVar2 < 5) {
    if ((*(byte *)(param_1 + 0xbc) & 1) != 0) goto LAB_0802e22a;
    *(undefined *)(param_1 + 0xb8) = 1;
  }
  else if (uVar2 < 10) {
    if (((*(byte *)(param_1 + 0xbc) & 2) != 0) ||
       ((int)*(short *)(DAT_02022e98 + 10) < *(short *)(DAT_02022e98 + 8) + -6)) {
LAB_0802e22a:
      *piVar3 = 0;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xb9) = 1;
  }
  else {
    if ((*(byte *)(param_1 + 0xbc) & 4) != 0) goto LAB_0802e22a;
    *(undefined *)(param_1 + 0xba) = 1;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0xb4;
  return in_lr;
}


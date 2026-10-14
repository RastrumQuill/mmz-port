// sub_080CD678 at 0x080CD678 (thumb)

undefined4 sub_080CD678(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  sub_080128D4();
  if (*(char *)(param_1 + 0x11) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
      iVar2 = *(int *)(param_1 + 0x58) * 7 + -0x800;
      iVar1 = DAT_0202d004;
LAB_080cd714:
      iVar2 = iVar2 + iVar1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      *(int *)(param_1 + 0x58) = iVar2 >> 3;
      goto LAB_080cd720;
    }
    iVar4 = *(int *)(param_1 + 0x58) * 7;
    iVar2 = DAT_0202d004;
  }
  else {
    if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
      iVar2 = *(int *)(param_1 + 0x58) * 7;
      iVar1 = *(int *)(param_1 + 0x68);
      goto LAB_080cd714;
    }
    iVar4 = *(int *)(param_1 + 0x58) * 7 + 0x800;
    iVar2 = *(int *)(param_1 + 0x68);
  }
  iVar4 = iVar4 + iVar2;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  *(int *)(param_1 + 0x58) = iVar4 >> 3;
  iVar4 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
LAB_080cd720:
  piVar3 = (int *)(param_1 + 0xb4);
  iVar4 = *piVar3 * 7 + iVar4;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  *piVar3 = iVar4 >> 3;
  *(char *)(param_1 + 0x24) = (char)(iVar4 >> 0xe);
  iVar4 = *piVar3 * (int)(short)(&DAT_080ef450)[*piVar3 >> 0xb & 0xff];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58) - ((iVar4 >> 8) + 0x1000);
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((*(int *)(param_1 + 0x54) < DAT_0202ed50 + -0xf000) ||
       (DAT_0202ed50 + 0xefff < *(int *)(param_1 + 0x54))) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}


// sub_0806D5B0 at 0x0806D5B0 (thumb)

undefined4 sub_0806D5B0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (((1 < *(byte *)(iVar3 + 0xc)) ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) ||
     (iVar2 = sub_08048BE8(param_1), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  iVar2 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xd) != '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar2 < -0x4000) {
        iVar2 = -0x4000;
      }
      if (iVar2 < 1) goto LAB_0806d660;
    }
    else {
      if (0x4000 < iVar2) {
        iVar2 = 0x4000;
      }
      if (-1 < iVar2) goto LAB_0806d660;
    }
    iVar2 = 0;
    goto LAB_0806d660;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar2 < -0x2000) {
      iVar2 = -0x2000;
    }
    if (0 < iVar2) goto LAB_0806d62c;
  }
  else {
    if (0x2000 < iVar2) {
      iVar2 = 0x2000;
    }
    if (iVar2 < 0) {
LAB_0806d62c:
      iVar2 = 0;
    }
  }
  *(undefined *)(param_1 + 0xd) = *(undefined *)(iVar3 + 0xd);
LAB_0806d660:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + iVar2;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + iVar2;
  return in_lr;
}


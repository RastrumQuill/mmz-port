// sub_08075838 at 0x08075838 (thumb)

undefined4 sub_08075838(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  iVar2 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x200);
  if (iVar2 == 0) {
    uVar3 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x200);
    if ((uVar3 & 0x400) != 0) {
      uVar4 = 1;
    }
LAB_080758bc:
    if (uVar4 == 0) {
      sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x600);
      if (sVar1 == 0) {
        return in_lr;
      }
      iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar2 = iVar2 - *(int *)(param_1 + 0x58);
      if (0x7fe < iVar2 + 0x3ffU) {
        return in_lr;
      }
      iVar2 = *(int *)(param_1 + 0x58) + iVar2;
      goto LAB_080758fc;
    }
  }
  else {
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x54) = iVar2 + -0x80;
      uVar4 = sub_08008FEC(iVar2 + -0x280,*(int *)(param_1 + 0x58) + 0x200);
      uVar4 = -(uVar4 & 0x400) >> 0x1f;
      goto LAB_080758bc;
    }
    iVar2 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = iVar2 + 0x80;
    uVar3 = sub_08008FEC(iVar2 + 0x280,*(int *)(param_1 + 0x58) + 0x200);
    if ((uVar3 & 0x400) == 0) goto LAB_080758bc;
  }
  iVar2 = *(int *)(param_1 + 0x58) + 0x80;
LAB_080758fc:
  *(int *)(param_1 + 0x58) = iVar2;
  return in_lr;
}


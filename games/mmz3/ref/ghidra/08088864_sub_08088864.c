// sub_08088864 at 0x08088864 (thumb)

undefined8 sub_08088864(int param_1,int param_2,int param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc2) != '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_3;
    sVar2 = sub_08009A3C();
    if (sVar2 == 0) {
      *(char *)(param_1 + 0xc2) = '\0';
    }
    goto LAB_080888ec;
  }
  if (param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar3;
    if (param_2 < 1) {
      iVar3 = sub_08009F80(iVar3,*(undefined4 *)(param_1 + 0x58));
      if (0 < iVar3) goto LAB_0808889e;
    }
    else {
      iVar3 = sub_08009E14(iVar3,*(undefined4 *)(param_1 + 0x58));
      if (iVar3 < 0) {
LAB_0808889e:
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
      }
    }
  }
  if (param_3 != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_3;
    if (param_3 < 1) {
      iVar3 = sub_08009C90(*(undefined4 *)(param_1 + 0x54));
      if (iVar3 < 1) goto LAB_080888ec;
    }
    else {
      iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
      if (-1 < iVar3) goto LAB_080888ec;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  }
LAB_080888ec:
  iVar3 = DAT_0202e48c + 0x1000;
  bVar1 = *(int *)(param_1 + 0x58) < iVar3;
  if (bVar1) {
    *(int *)(param_1 + 0x58) = iVar3;
  }
  return CONCAT44(in_lr,(uint)bVar1);
}


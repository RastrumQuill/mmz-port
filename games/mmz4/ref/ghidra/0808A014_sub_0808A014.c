// sub_0808A014 at 0x0808A014 (thumb)

undefined8 sub_0808A014(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    iVar3 = -0x800;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = 0x800;
    }
    sVar1 = sub_08007C7C(iVar3 + *(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
    if (sVar1 != 0) goto LAB_0808a048;
  }
  else {
LAB_0808a048:
    iVar3 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if ((0x7ff < iVar3) || (*(int *)(DAT_0202dbf0 + 0x58) <= *(int *)(param_1 + 0x58))) {
      uVar2 = 0;
      goto LAB_0808a082;
    }
    sVar1 = 0;
  }
  *(undefined *)(param_1 + 0xd) = 7;
  *(char *)(param_1 + 0xe) = (char)sVar1;
  uVar2 = 1;
LAB_0808a082:
  return CONCAT44(in_lr,uVar2);
}


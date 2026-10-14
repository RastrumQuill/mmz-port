// sub_080858D4 at 0x080858D4 (thumb)

undefined8 sub_080858D4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  uVar1 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar2 = uVar1 * 0xc00 + -0x600;
  if (uVar1 == 0) {
    iVar2 = sub_08008120(*(int *)(param_1 + 0x4c) + iVar2,*(undefined4 *)(param_1 + 0x50));
    if (iVar2 < 1) goto LAB_0808591e;
  }
  else {
    iVar2 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar2);
    if (-1 < iVar2) goto LAB_0808591e;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
  uVar3 = 2;
LAB_0808591e:
  iVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if ((*(int *)(param_1 + 0x50) + -0x600 < iVar2) && (*(int *)(param_1 + 0x58) < 0)) {
    *(int *)(param_1 + 0x50) = iVar2 + 0x600;
    uVar3 = uVar3 | 8;
  }
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (((iVar2 + -0x600) - *(int *)(param_1 + 0x50) < 0x440) && (0 < *(int *)(param_1 + 0x58))) {
    *(int *)(param_1 + 0x50) = iVar2 + -0x600;
    uVar3 = uVar3 | 1;
  }
  return CONCAT44(in_lr,uVar3);
}


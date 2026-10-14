// sub_0802B670 at 0x0802B670 (thumb)

undefined8 sub_0802B670(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar1 - *(int *)(param_1 + 0x50) < 0x440) {
    *(int *)(param_1 + 0x50) = iVar1;
  }
  uVar3 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar1 = *(int *)(param_1 + 0x4c) + -0xe00 + uVar3 * 0x1c00;
  iVar4 = *(int *)(param_1 + 0x50) + -0x800;
  if (uVar3 == 0) {
    iVar1 = sub_08008120(iVar1,iVar4);
    if (iVar1 < 1) goto LAB_0802b6e0;
  }
  else {
    iVar1 = sub_08007EE0(iVar1,iVar4);
    if (-1 < iVar1) {
LAB_0802b6e0:
      uVar2 = 0;
      goto LAB_0802b6e2;
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  uVar2 = 1;
LAB_0802b6e2:
  return CONCAT44(in_lr,uVar2);
}


// sub_0802B6E8 at 0x0802B6E8 (thumb)

undefined8 sub_0802B6E8(int param_1)

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
  iVar1 = *(int *)(param_1 + 0x4c) + -0x2000 + uVar3 * 0x4000;
  iVar4 = *(int *)(param_1 + 0x50) + -0x800;
  if (uVar3 == 0) {
    iVar1 = sub_08008120(iVar1,iVar4);
    if (iVar1 < 1) goto LAB_0802b754;
  }
  else {
    iVar1 = sub_08007EE0(iVar1,iVar4);
    if (-1 < iVar1) {
LAB_0802b754:
      uVar2 = 0;
      goto LAB_0802b756;
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  uVar2 = 1;
LAB_0802b756:
  return CONCAT44(in_lr,uVar2);
}


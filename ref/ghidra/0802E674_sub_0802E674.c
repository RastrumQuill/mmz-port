// sub_0802E674 at 0x0802E674 (thumb)

undefined8 sub_0802E674(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if ((iVar1 - *(int *)(param_1 + 0x50) < 0x440) && (0 < *(int *)(param_1 + 0x58))) {
    *(int *)(param_1 + 0x50) = iVar1;
    uVar4 = 1;
  }
  uVar2 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar1 = *(int *)(param_1 + 0x4c) + -0x1c00 + uVar2 * 0x3800;
  iVar3 = *(int *)(param_1 + 0x50) + -0xd00;
  if (uVar2 == 0) {
    iVar1 = sub_08008120(iVar1,iVar3);
    if (0 < iVar1) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
      uVar4 = uVar4 | 2;
    }
  }
  else {
    iVar1 = sub_08007EE0(iVar1,iVar3);
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
      uVar4 = uVar4 | 2;
    }
  }
  return CONCAT44(in_lr,uVar4);
}


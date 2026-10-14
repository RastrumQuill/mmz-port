// sub_0803A7F8 at 0x0803A7F8 (thumb)

undefined8 sub_0803A7F8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x50) < 0x440) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc);
  }
  uVar4 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar6 = uVar4 * 0x3000 + -0x1800;
  iVar2 = *(int *)(param_1 + 0x50);
  iVar5 = iVar2 + -0x2000;
  if (uVar4 == 0) {
    iVar5 = sub_08008120(*(int *)(param_1 + 0x4c) + iVar6,iVar5);
    if (iVar5 < 1) goto LAB_0803a862;
  }
  else {
    iVar5 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar6,iVar5);
    if (-1 < iVar5) {
LAB_0803a862:
      cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar6,iVar2 + -0x1000);
      if (cVar1 == '\0') {
        uVar3 = 2;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_0803a87e;
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar5;
  uVar3 = 1;
LAB_0803a87e:
  return CONCAT44(in_lr,uVar3);
}


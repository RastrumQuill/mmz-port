// sub_0805F778 at 0x0805F778 (thumb)

undefined8 sub_0805F778(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar2;
  uVar5 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar6 = uVar5 * 0x2000 + -0x1000;
  if (uVar5 == 0) {
    iVar3 = sub_08008120(*(int *)(param_1 + 0x4c) + iVar6,iVar2 + 0x800);
    if (iVar3 < 1) goto LAB_0805f7d6;
  }
  else {
    iVar3 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar6,iVar2 + 0x800);
    if (-1 < iVar3) {
LAB_0805f7d6:
      cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar6,iVar2 + -0x800);
      if (cVar1 == '\0') {
        uVar4 = 2;
        goto LAB_0805f822;
      }
      iVar6 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xc0);
      iVar2 = iVar6;
      if (iVar6 < 0) {
        iVar2 = -iVar6;
      }
      if (0x3000 < iVar2) {
        if (iVar6 < 0) {
          if (uVar5 == 0) {
LAB_0805f81c:
            uVar4 = 3;
            goto LAB_0805f822;
          }
        }
        else if (uVar5 != 0) goto LAB_0805f81c;
      }
      uVar4 = 0;
      goto LAB_0805f822;
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
  uVar4 = 1;
LAB_0805f822:
  return CONCAT44(in_lr,uVar4);
}


// sub_08073C80 at 0x08073C80 (thumb)

undefined8 sub_08073C80(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x58) + param_2;
    *(int *)(param_1 + 0x58) = iVar2;
    if (param_2 < 0) {
      iVar2 = sub_08009D5C(*(undefined4 *)(param_1 + 0x54),iVar2);
      if (0 < iVar2) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
        uVar1 = 2;
        goto LAB_08073cc4;
      }
    }
    else {
      iVar2 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),iVar2);
      if (iVar2 < 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
        uVar1 = 1;
        goto LAB_08073cc4;
      }
    }
  }
  uVar1 = 0;
LAB_08073cc4:
  return CONCAT44(in_lr,uVar1);
}


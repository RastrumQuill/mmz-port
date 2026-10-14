// sub_08073758 at 0x08073758 (thumb)

undefined8 sub_08073758(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = DAT_0202e130;
  iVar5 = *(int *)(param_1 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar1 = *(int *)(param_1 + 0x58) - param_3;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) + param_3;
  }
  if (DAT_0202e130 != 0) {
    iVar2 = sub_0801EFE8(DAT_0202e130,0);
    iVar3 = sub_0801F004(iVar3,0);
    if (((uint)((iVar2 - iVar5) + param_2) <= (uint)(param_2 * 2)) &&
       ((uint)((iVar3 - iVar1) + param_3) <= (uint)(param_3 * 2))) {
      uVar4 = 1;
      goto LAB_080737ba;
    }
  }
  uVar4 = 0;
LAB_080737ba:
  return CONCAT44(in_lr,uVar4);
}


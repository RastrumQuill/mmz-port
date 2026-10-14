// sub_0803D120 at 0x0803D120 (thumb)

undefined8 sub_0803D120(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  iVar1 = sub_0801EFE8(uVar3,0);
  iVar2 = sub_0801F004(uVar3,0);
  iVar1 = iVar1 - *(int *)(param_1 + 0x54);
  iVar2 = iVar2 - *(int *)(param_1 + 0x58);
  if (((iVar1 + 0x1000U < 0x2001) && (iVar2 + 0x1000U < 0x2001)) &&
     (iVar1 * iVar1 + iVar2 * iVar2 < 0x1000001)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}


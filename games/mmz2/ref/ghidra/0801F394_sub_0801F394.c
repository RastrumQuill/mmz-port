// sub_0801F394 at 0x0801F394 (thumb)

undefined8 sub_0801F394(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_2 + 0x8c);
  if (*(int *)(param_2 + 0x94) < iVar3) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(int *)(param_2 + 0x94) - iVar3;
    uVar1 = *(int *)(param_1 + 4) - iVar3;
    if (uVar2 < uVar1) {
      if ((int)uVar2 < (int)uVar1) {
        uVar1 = uVar1 - uVar2;
      }
      if (param_3 != 0) {
        *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - uVar1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return CONCAT44(in_lr,uVar1);
}


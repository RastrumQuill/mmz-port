// sub_080708D0 at 0x080708D0 (thumb)

undefined8 sub_080708D0(int param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = -0x1400;
  }
  else {
    iVar3 = 0x1400;
  }
  sVar1 = sub_08008CFC(param_2 + iVar3,param_3);
  if (sVar1 == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = 0x1400;
    }
    else {
      iVar3 = -0x1400;
    }
    sVar1 = sub_08008CFC(param_2 + iVar3,param_3);
    if (sVar1 == 0) {
      uVar2 = 0;
      goto LAB_08070924;
    }
  }
  uVar2 = 1;
LAB_08070924:
  return CONCAT44(in_lr,uVar2);
}


// sub_080A08BC at 0x080A08BC (thumb)

undefined8 sub_080A08BC(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * 0x1400;
  iVar3 = *(int *)(param_1 + 0x58);
  sVar1 = sub_08007C7C(iVar4,iVar3);
  if ((sVar1 == 0) || (iVar4 = sub_08008534(iVar4,iVar3), iVar3 + -0x2200 <= iVar4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}


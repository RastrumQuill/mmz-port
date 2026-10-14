// sub_080820B0 at 0x080820B0 (thumb)

undefined8 sub_080820B0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  if ((iVar4 == 0) || (iVar3 = *(int *)(iVar4 + 0x2c), iVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x54) - *(int *)(iVar4 + 0x54) >> 8;
    iVar4 = *(int *)(iVar3 + 0x58) - *(int *)(iVar4 + 0x58) >> 8;
    iVar4 = sub_080FE124(iVar1 * iVar1 + iVar4 * iVar4);
    uVar2 = (uint)(iVar4 << 0x10) >> 8;
  }
  return CONCAT44(in_lr,uVar2);
}


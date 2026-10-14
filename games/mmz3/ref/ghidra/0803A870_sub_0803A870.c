// sub_0803A870 at 0x0803A870 (thumb)

undefined8 sub_0803A870(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(iVar1 + 0x54) +
            (int)*(short *)(&DAT_0835b034 + (uint)*(byte *)(iVar1 + 0x147) * 8);
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x54) -
            (int)*(short *)(&DAT_0835b034 + (uint)*(byte *)(iVar1 + 0x147) * 8);
  }
  iVar3 = iVar3 - *(int *)(param_1 + 0x54);
  iVar1 = (*(int *)(iVar1 + 0x58) +
          (int)*(short *)(&DAT_0835b036 + (uint)*(byte *)(iVar1 + 0x147) * 8)) -
          *(int *)(param_1 + 0x58);
  if (((iVar3 + 0x1000U < 0x2001) && (iVar1 + 0x1000U < 0x2001)) &&
     (iVar3 * iVar3 + iVar1 * iVar1 < 0x1000001)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


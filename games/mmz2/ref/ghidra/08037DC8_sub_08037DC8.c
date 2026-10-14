// sub_08037DC8 at 0x08037DC8 (thumb)

undefined8 sub_08037DC8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (uint)*(byte *)(param_1 + 0x10) * 4;
  if (*(byte *)(param_1 + 0x2b4) != param_2) {
    iVar1 = iVar1 + 2;
  }
  return CONCAT44(in_lr,(uint)*(ushort *)(&DAT_08335e00 + iVar1));
}


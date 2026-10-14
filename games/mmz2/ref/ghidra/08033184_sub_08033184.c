// sub_08033184 at 0x08033184 (thumb)

undefined8 sub_08033184(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = (int)*(short *)(param_1 + 0x2ea);
  if ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & param_2) != 0) {
    if ((*(byte *)(param_1 + 0x196) & param_2) == 0) {
      iVar2 = 0x100;
    }
    else {
      iVar2 = 0x800;
    }
    iVar1 = iVar1 + iVar2;
    if (0x2000 < iVar1) {
      iVar1 = 0x2000;
    }
    *(short *)(param_1 + 0x2ea) = (short)iVar1;
  }
  return CONCAT44(in_lr,iVar1);
}


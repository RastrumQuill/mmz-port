// sub_080331E8 at 0x080331E8 (thumb)

undefined8 sub_080331E8(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = (int)*(short *)(param_1 + 0x2ea);
  if ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & param_2) != 0) {
    if ((*(byte *)(param_1 + 0x196) & param_2) == 0) {
      iVar2 = iVar2 + -0x100;
    }
    else {
      iVar2 = iVar2 + -0x800;
    }
    iVar1 = (int)*(short *)(param_1 + 0x2e8);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    *(short *)(param_1 + 0x2ea) = (short)iVar2;
  }
  return CONCAT44(in_lr,iVar2);
}


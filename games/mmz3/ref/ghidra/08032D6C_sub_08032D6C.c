// sub_08032D6C at 0x08032D6C (thumb)

undefined8 sub_08032D6C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x216) & 0x8000) == 0) {
    if (*(byte *)(param_1 + 0x11d) == 0) {
      iVar1 = 0x380;
    }
    else {
      iVar1 = (int)((0x100 - (uint)*(byte *)(param_1 + 0x11d)) * 7) >> 1;
    }
    iVar1 = iVar1 >> *(sbyte *)(param_1 + 0x18e);
  }
  else {
    iVar1 = 0x380;
  }
  return CONCAT44(in_lr,iVar1);
}


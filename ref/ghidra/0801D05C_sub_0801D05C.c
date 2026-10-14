// sub_0801D05C at 0x0801D05C (thumb)

uint sub_0801D05C(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x1fe);
  iVar1 = uVar2 - (param_2 & 0xffff);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(ushort *)(param_1 + 0x1fe) = (ushort)iVar1;
  return uVar2 - iVar1 & 0xffff;
}


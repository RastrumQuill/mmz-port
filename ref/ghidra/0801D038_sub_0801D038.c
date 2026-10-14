// sub_0801D038 at 0x0801D038 (thumb)

uint sub_0801D038(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x1fe);
  uVar1 = uVar2 + (param_2 & 0xffff);
  if (9999 < uVar1) {
    uVar1 = 9999;
  }
  *(ushort *)(param_1 + 0x1fe) = (ushort)uVar1;
  return uVar1 - uVar2 & 0xffff;
}


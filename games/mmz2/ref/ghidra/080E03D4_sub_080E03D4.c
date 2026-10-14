// sub_080E03D4 at 0x080E03D4 (thumb)

undefined4 sub_080E03D4(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x5e2) & 0x20) == 0) {
    uVar1 = 0x1300;
  }
  else {
    uVar1 = 0x3700;
  }
  DAT_02000f90 = DAT_02000f90 & 0xf0ff | uVar1;
  *(byte *)(param_1 + 0x5e2) = *(byte *)(param_1 + 0x5e2) + 1 & 0x3f;
  return in_lr;
}


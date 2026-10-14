// sub_08002F98 at 0x08002F98 (thumb)

undefined4 sub_08002F98(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_04000000;
  DAT_02000f90 = DAT_02000f90 & 0xf17;
  DAT_04000000 = DAT_02000f90 | uVar1 & 0xf0e8;
  DAT_040000d4 = 0x2000f94;
  DAT_040000d8 = 0x4000008;
  DAT_040000dc = 0x8400000e;
  uVar2 = DAT_040000dc;
  return in_lr;
}


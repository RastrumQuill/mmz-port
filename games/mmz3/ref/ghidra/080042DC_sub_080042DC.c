// sub_080042DC at 0x080042DC (thumb)

undefined4 sub_080042DC(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_04000000;
  DAT_020023c0 = DAT_020023c0 & 0xf17;
  DAT_04000000 = DAT_020023c0 | uVar1 & 0xf0e8;
  DAT_040000d4 = 0x20023c4;
  DAT_040000d8 = 0x4000008;
  DAT_040000dc = 0x8400000e;
  uVar2 = DAT_040000dc;
  return in_lr;
}


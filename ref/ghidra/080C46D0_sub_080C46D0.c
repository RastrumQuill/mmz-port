// sub_080C46D0 at 0x080C46D0 (thumb)

undefined4 sub_080C46D0(ushort *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_2 << 0x18) >> 0x17;
  *param_1 = (ushort)(byte)(&DAT_082cc228)[uVar1] + (ushort)(byte)(&DAT_082cc229)[uVar1] * 0x20 &
             0x3ff | (ushort)(((param_3 & 0xf) << 0x18) >> 0xc);
  return in_lr;
}


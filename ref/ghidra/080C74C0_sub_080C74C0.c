// sub_080C74C0 at 0x080C74C0 (thumb)

undefined4 sub_080C74C0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  sub_080C7BAC((&DAT_080d2b5c)[(uint)*(ushort *)(&DAT_080d2c08 + uVar1) * 3],
               *(undefined4 *)(&DAT_080d2c04 + uVar1));
  return in_lr;
}


// sub_080360E0 at 0x080360E0 (thumb)

undefined4 sub_080360E0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08036CBC(param_1,2);
  *(byte *)(param_1 + 0x2b8) =
       (byte)(-((uint)*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & uVar1 & 0xff)
             >> 0x1f);
  return in_lr;
}


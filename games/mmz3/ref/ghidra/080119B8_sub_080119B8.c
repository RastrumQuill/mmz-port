// sub_080119B8 at 0x080119B8 (thumb)

undefined4 sub_080119B8(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)(byte)DAT_0202f4aa;
  if (uVar2 < 0x40) {
    uVar1 = 0;
  }
  else if (uVar2 < 0x80) {
    uVar1 = (ushort)((uVar2 - 0x40) * 0x4000 >> 0x10);
  }
  else if (uVar2 < 0xc0) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = (ushort)((uint)((0x10 - ((int)(uVar2 - 0xc0) >> 2)) * 0x10000) >> 0x10);
  }
  DAT_02002402 = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
  sub_08009550(param_1,param_2);
  return in_lr;
}


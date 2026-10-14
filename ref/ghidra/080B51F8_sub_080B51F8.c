// sub_080B51F8 at 0x080B51F8 (thumb)

undefined4 sub_080B51F8(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_2 & 0xff) - 1 < 0x4e) {
    uVar1 = (param_2 << 0x18) >> 0x1b;
    if ((((int)(uint)*(byte *)(param_1 + 0x1a4 + uVar1) >> (param_2 & 7) & 1U) == 0) ||
       (((int)(uint)*(byte *)(param_1 + 0x1ae + uVar1) >> (param_2 & 7) & 1U) != 0)) {
      uVar1 = (uint)*(ushort *)(&DAT_082b6eaa + (param_2 & 0xff) * 0xc);
    }
    else {
      uVar1 = 0x11c;
    }
    sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[uVar1],0x11,10);
  }
  return in_lr;
}


// sub_08022300 at 0x08022300 (thumb)

undefined4 sub_08022300(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x150);
  if (uVar1 != 0) {
    sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[uVar1 & 0xffff],(int)uVar1 >> 0x10 & 0xff,
                 uVar1 >> 0x18);
  }
  return in_lr;
}


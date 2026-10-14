// sub_08027BA8 at 0x08027BA8 (thumb)

undefined4 sub_08027BA8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x150);
  if (uVar1 != 0) {
    sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[uVar1 & 0xffff],(int)uVar1 >> 0x10 & 0xff,
                 uVar1 >> 0x18);
  }
  return in_lr;
}


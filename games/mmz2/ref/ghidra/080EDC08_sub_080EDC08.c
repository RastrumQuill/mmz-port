// sub_080EDC08 at 0x080EDC08 (thumb)

undefined4 sub_080EDC08(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  if (*(int *)(&DAT_0810097c)[(uint)*(ushort *)(&DAT_08100a28 + uVar1) * 3] ==
      *(int *)(&DAT_08100a24 + uVar1)) {
    sub_080EE30C((int *)(&DAT_0810097c)[(uint)*(ushort *)(&DAT_08100a28 + uVar1) * 3]);
  }
  return in_lr;
}


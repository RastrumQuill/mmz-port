// sub_080EDB3C at 0x080EDB3C (thumb)

undefined4 sub_080EDB3C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  sub_080EE228((&DAT_0810097c)[(uint)*(ushort *)(&DAT_08100a28 + uVar1) * 3],
               *(undefined4 *)(&DAT_08100a24 + uVar1));
  return in_lr;
}


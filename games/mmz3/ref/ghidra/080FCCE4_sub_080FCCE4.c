// sub_080FCCE4 at 0x080FCCE4 (thumb)

undefined4 sub_080FCCE4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_1 << 0x10) >> 0xd;
  sub_080FD3D0((&DAT_0810bf34)[(uint)*(ushort *)(&DAT_0810bfec + uVar1) * 3],
               *(undefined4 *)(&DAT_0810bfe8 + uVar1));
  return in_lr;
}


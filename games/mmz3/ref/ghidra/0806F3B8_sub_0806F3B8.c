// sub_0806F3B8 at 0x0806F3B8 (thumb)

undefined4 sub_0806F3B8(int param_1)

{
  undefined4 in_lr;
  
  sub_080B2484(1,param_1 + 0x54);
  sub_0800471C(0x2a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}


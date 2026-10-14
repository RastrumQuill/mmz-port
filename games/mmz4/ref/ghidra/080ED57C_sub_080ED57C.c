// sub_080ED57C at 0x080ED57C (thumb)

undefined4 sub_080ED57C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_080ED1F0();
  return in_lr;
}


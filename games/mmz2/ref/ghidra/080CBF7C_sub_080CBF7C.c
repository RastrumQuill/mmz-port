// sub_080CBF7C at 0x080CBF7C (thumb)

undefined4 sub_080CBF7C(int param_1)

{
  undefined4 in_lr;
  
  sub_080CBCB0(param_1,0);
  sub_080CBCB0(param_1,1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}


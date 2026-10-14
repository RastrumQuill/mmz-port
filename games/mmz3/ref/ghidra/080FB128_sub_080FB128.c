// sub_080FB128 at 0x080FB128 (thumb)

undefined4 sub_080FB128(int param_1)

{
  undefined4 in_lr;
  
  sub_080E97D4("SCORE",1,0);
  sub_080E9824(*(undefined4 *)(param_1 + 0xdf0),0xc,0);
  sub_080E97D4("HI-SCORE",0xf,0);
  sub_080E9824(*(undefined4 *)(param_1 + 0xdf8),0x1c,0);
  return in_lr;
}


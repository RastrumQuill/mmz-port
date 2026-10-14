// sub_080E7240 at 0x080E7240 (thumb)

undefined4 sub_080E7240(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  sub_08017700(param_1,0x530a);
  *(undefined4 *)(param_1 + 0x54) = 0x7200;
  *(undefined4 *)(param_1 + 0x58) = 0xe00;
  return in_lr;
}


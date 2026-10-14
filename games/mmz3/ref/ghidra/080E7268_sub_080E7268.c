// sub_080E7268 at 0x080E7268 (thumb)

undefined4 sub_080E7268(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  sub_08017700(param_1,0x530c);
  *(undefined4 *)(param_1 + 0x54) = 0x7200;
  *(undefined4 *)(param_1 + 0x58) = 0x8000;
  return in_lr;
}


// sub_080E71FC at 0x080E71FC (thumb)

undefined4 sub_080E71FC(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  sub_08017700(param_1,0x530c);
  *(undefined4 *)(param_1 + 0x54) = 0x16400;
  *(undefined4 *)(param_1 + 0x58) = 0x7a00;
  return in_lr;
}


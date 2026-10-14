// sub_080ECCE8 at 0x080ECCE8 (thumb)

undefined4 sub_080ECCE8(int param_1)

{
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xc0) != 0) {
    sub_08002B5C(0x77);
    *(short *)(param_1 + 0xc0) = 0;
  }
  sub_080E8F60(param_1);
  return in_lr;
}


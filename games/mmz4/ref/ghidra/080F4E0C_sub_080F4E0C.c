// sub_080F4E0C at 0x080F4E0C (thumb)

undefined4 sub_080F4E0C(int param_1)

{
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xc2) == 0x77) {
    sub_08002B5C(0x77);
    *(short *)(param_1 + 0xc2) = 0;
  }
  sub_080E8F60(param_1);
  return in_lr;
}


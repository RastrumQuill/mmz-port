// sub_080E48A8 at 0x080E48A8 (thumb)

undefined4 sub_080E48A8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x11) = 1;
  sub_08002B10(0x2a);
  sub_080E4558(param_1 + 0x54,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E473C(param_1);
  return in_lr;
}


// sub_080E0594 at 0x080E0594 (thumb)

undefined4 sub_080E0594(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x11) = 0;
  sub_080E04AC(param_1 + 0x54,3,1,*(byte *)(param_1 + 10) >> 4 & 1);
  return in_lr;
}


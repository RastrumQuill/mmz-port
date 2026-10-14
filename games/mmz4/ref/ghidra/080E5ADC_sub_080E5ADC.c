// sub_080E5ADC at 0x080E5ADC (thumb)

undefined4 sub_080E5ADC(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(int *)(param_1 + 0x58) + 0x1c00;
  sub_080D0894(1,&local_10);
  sub_08002B10(0x2a);
  *(undefined *)(param_1 + 0x11) = 1;
  sub_080E57F8(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
  sub_080E597C(param_1);
  return in_lr;
}


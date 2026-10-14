// sub_080B146C at 0x080B146C (thumb)

undefined4 sub_080B146C(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x717);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (uint)*(byte *)(param_1 + 0x10) * -0x1000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B14E4(param_1);
  return in_lr;
}


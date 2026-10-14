// sub_080ABF54 at 0x080ABF54 (thumb)

undefined4 sub_080ABF54(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,*(undefined2 *)(param_1 + 0xb4));
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x25) = 0x17;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080ABEF4(param_1);
  return in_lr;
}


// sub_080A3C98 at 0x080A3C98 (thumb)

undefined4 sub_080A3C98(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080AC60C(2,param_1 + 0x54);
  }
  else {
    sub_080AC60C(1,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}


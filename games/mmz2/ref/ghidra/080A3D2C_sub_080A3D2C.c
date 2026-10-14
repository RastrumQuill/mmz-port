// sub_080A3D2C at 0x080A3D2C (thumb)

undefined4 sub_080A3D2C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_080AC60C(1,param_1 + 0x54);
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080AC60C(2,param_1 + 0x54);
  }
  else {
    sub_080A35FC(param_1 + 0x54,3,0,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}


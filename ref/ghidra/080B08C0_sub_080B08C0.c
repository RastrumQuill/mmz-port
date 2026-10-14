// sub_080B08C0 at 0x080B08C0 (thumb)

undefined4 sub_080B08C0(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C980();
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (((*(ushort *)(param_1 + 0x90) & 0x2000) != 0) && (DAT_02022874 != '\0')) {
      sub_080BC808(0x20b);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (DAT_0202365a == 0) {
    DAT_02022874 = '\0';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


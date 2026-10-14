// sub_080AD978 at 0x080AD978 (thumb)

undefined4 sub_080AD978(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C980();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (((*(ushort *)(param_1 + 0x90) & 0x2000) != 0) && (DAT_02022874 != '\0')) {
      *(undefined *)(param_1 + 0xd) = 1;
      sub_080BC808(0x2eb);
    }
  }
  else if (DAT_0202365a == 0) {
    DAT_02022874 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}


// sub_080ABC4C at 0x080ABC4C (thumb)

undefined4 sub_080ABC4C(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C980();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (((*(ushort *)(param_1 + 0x90) & 0x2000) != 0) && (DAT_02022874 != '\0')) {
      *(undefined *)(param_1 + 0xd) = 1;
      sub_080BC808(0x2ec);
    }
  }
  else if (DAT_0202365a == 0) {
    DAT_02022874 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}


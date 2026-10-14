// sub_080B01F8 at 0x080B01F8 (thumb)

undefined4 sub_080B01F8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xb7) = 0;
  }
  sub_0807F804();
  return in_lr;
}


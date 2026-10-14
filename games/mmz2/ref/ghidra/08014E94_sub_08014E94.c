// sub_08014E94 at 0x08014E94 (thumb)

undefined4 sub_08014E94(int param_1)

{
  undefined4 in_lr;
  
  if ((((DAT_0202f690 != 0) && ((DAT_02000d14 & 8) != 0)) && (*(int *)(param_1 + 0x20) == 0)) &&
     (*(char *)(param_1 + 0x17c) == '\x01')) {
    if (*(undefined **)(param_1 + 0x18) == &DAT_0832732c) {
      sub_080DE1BC();
      sub_080E0E64(&DAT_0202f8e0,0x300);
      DAT_0202ec32 = 1;
    }
  }
  return in_lr;
}


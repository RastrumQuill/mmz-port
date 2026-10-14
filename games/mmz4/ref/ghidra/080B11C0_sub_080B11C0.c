// sub_080B11C0 at 0x080B11C0 (thumb)

undefined4 sub_080B11C0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_0801CF00(param_1,0xb900);
    if (*(char *)(param_1 + 0xc2) == '\x0f') {
      sub_08005784(param_1 + 0x74,&DAT_0885fed4);
    }
    *(char *)(param_1 + 0xc2) = '\0';
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


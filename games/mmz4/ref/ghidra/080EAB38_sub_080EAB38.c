// sub_080EAB38 at 0x080EAB38 (thumb)

undefined4 sub_080EAB38(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '\x03') && (*(char *)(param_1 + 0xb8) != '\x15')) {
    *(char *)(param_1 + 0xb8) = '\x15';
    sub_0801CF00(param_1,*(byte *)(param_1 + 0x70) | 0x1500);
    sub_0801CFF0(param_1);
  }
  return in_lr;
}


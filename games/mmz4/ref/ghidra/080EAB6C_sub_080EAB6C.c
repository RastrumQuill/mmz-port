// sub_080EAB6C at 0x080EAB6C (thumb)

undefined4 sub_080EAB6C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 9) == '\x03') {
    if (*(char *)(param_1 + 0xb8) != -0x3d) {
      *(char *)(param_1 + 0xb8) = -0x3d;
      sub_0801CF00(param_1,*(byte *)(param_1 + 0x70) | 0xc300);
      sub_0801CFF0(param_1);
    }
    *(undefined2 *)(param_1 + 0xba) = 1;
  }
  return in_lr;
}


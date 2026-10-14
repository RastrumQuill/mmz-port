// sub_080C03BC at 0x080C03BC (thumb)

undefined4 sub_080C03BC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  return in_lr;
}


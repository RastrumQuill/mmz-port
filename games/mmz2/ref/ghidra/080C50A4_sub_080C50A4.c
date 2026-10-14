// sub_080C50A4 at 0x080C50A4 (thumb)

undefined4 sub_080C50A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080127E4(param_1,0x8800);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  return in_lr;
}


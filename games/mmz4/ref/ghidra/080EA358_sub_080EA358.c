// sub_080EA358 at 0x080EA358 (thumb)

undefined4 sub_080EA358(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '\x02') && (*(char *)(param_1 + 0xb8) != '\x14')) {
    *(char *)(param_1 + 0xb8) = '\x14';
    sub_0801CF00(param_1,*(byte *)(param_1 + 0x70) | 0x1400);
    sub_0801CFF0(param_1);
  }
  return in_lr;
}


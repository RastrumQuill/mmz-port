// sub_080C2408 at 0x080C2408 (thumb)

undefined4 sub_080C2408(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc000);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x71) & 4) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x80;
  }
  if (((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) && (*(char *)(param_1 + 0x73) == '\x04'))
  {
    sub_080127E4(param_1,0xc001);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}


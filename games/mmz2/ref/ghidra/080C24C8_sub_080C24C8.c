// sub_080C24C8 at 0x080C24C8 (thumb)

undefined4 sub_080C24C8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080127E4(param_1,0x909);
    uVar2 = 0;
    if ((*(int *)(param_1 + 0x54) >> 10 & 0x1fU) != 0) {
      do {
        sub_080128D4(param_1);
        uVar1 = uVar2 * 0x10000 + 0x10000;
        uVar2 = uVar1 >> 0x10;
      } while ((int)uVar1 >> 0x10 < (int)(*(int *)(param_1 + 0x54) >> 10 & 0x1fU));
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x80;
  return in_lr;
}


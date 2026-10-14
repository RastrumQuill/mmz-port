// sub_080AC7A0 at 0x080AC7A0 (thumb)

undefined4 sub_080AC7A0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    bVar1 = *(byte *)(param_1 + 0xb7) + 1;
    *(byte *)(param_1 + 0xb7) = bVar1;
    if ((bVar1 & 3) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return in_lr;
}


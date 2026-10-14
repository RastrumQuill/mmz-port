// sub_080F6584 at 0x080F6584 (thumb)

undefined4 sub_080F6584(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xe0b) = *(byte *)(param_1 + 0xe0b) & 3 | 4;
  sub_08004230(0x51);
  if (*(char *)(param_1 + 0xe08) != '\0') {
    sub_08004230();
  }
  return in_lr;
}


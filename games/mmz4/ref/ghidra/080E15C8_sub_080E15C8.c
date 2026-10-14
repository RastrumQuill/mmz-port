// sub_080E15C8 at 0x080E15C8 (thumb)

void sub_080E15C8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 0x74) + 1;
  *(char *)(param_1 + 0x74) = bVar1 - (bVar1 & 0xfe);
  return;
}


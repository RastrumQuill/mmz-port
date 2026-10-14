// sub_08016D78 at 0x08016D78 (thumb)

void sub_08016D78(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  if ((bVar1 & 0xc) != 0) {
    bVar1 = bVar1 >> 3;
    uVar2 = bVar1 & 1;
    *(char *)(param_1 + 0x44) = (char)uVar2;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(uint *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * (uVar2 * 2 + -1);
  }
  return;
}


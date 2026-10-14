// sub_080172F8 at 0x080172F8 (thumb)

void sub_080172F8(int param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x128) & 0x43) != 0) {
    if ((*(byte *)(param_1 + 0x128) & 0x80) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return;
}


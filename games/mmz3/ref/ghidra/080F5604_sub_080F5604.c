// sub_080F5604 at 0x080F5604 (thumb)

undefined4 sub_080F5604(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xbc);
  if (bVar1 != 0xff) {
    bVar2 = *(byte *)(param_1 + 0xbd);
    if ((bVar2 != 0xff) && (bVar1 < bVar2)) {
      *(byte *)(param_1 + 0xbc) = bVar2;
      *(byte *)(param_1 + 0xbd) = bVar1;
    }
  }
  bVar1 = *(byte *)(param_1 + 0xbe);
  if (bVar1 != 0xff) {
    bVar2 = *(byte *)(param_1 + 0xbf);
    if ((bVar2 != 0xff) && (bVar1 < bVar2)) {
      *(byte *)(param_1 + 0xbe) = bVar2;
      *(byte *)(param_1 + 0xbf) = bVar1;
    }
  }
  return in_lr;
}


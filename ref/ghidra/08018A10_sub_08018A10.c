// sub_08018A10 at 0x08018A10 (thumb)

undefined4 sub_08018A10(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x19a);
  uVar2 = bVar1 + 1;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  *(char *)(param_1 + 0x19a) = (char)uVar2;
  if ((bVar1 < 0x3c) && (0x3b < uVar2)) {
    if ((*(byte *)(param_1 + 0x195) < 4) || (*(byte *)(param_1 + 0x19b) < 100)) {
      sub_080BC818(0x10f,0x5a);
    }
    else {
      sub_080BC818(0x110,0x5a);
    }
  }
  return in_lr;
}


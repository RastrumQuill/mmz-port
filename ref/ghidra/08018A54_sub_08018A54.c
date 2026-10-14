// sub_08018A54 at 0x08018A54 (thumb)

undefined4 sub_08018A54(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x19b);
  uVar2 = bVar1 + 1;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  *(char *)(param_1 + 0x19b) = (char)uVar2;
  if ((bVar1 < 100) && (99 < uVar2)) {
    if ((*(byte *)(param_1 + 0x195) < 4) || (*(byte *)(param_1 + 0x19a) < 0x3c)) {
      sub_080BC818(0x10d,0x5a);
    }
    else {
      sub_080BC818(0x10e,0x5a);
    }
  }
  return in_lr;
}


// sub_08025A04 at 0x08025A04 (thumb)

undefined8 sub_08025A04(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0x10;
  bVar2 = 0;
  do {
    bVar2 = bVar2 + 1;
    uVar3 = (uint)bVar2;
    if (((*(byte *)(DAT_0203063c + uVar3) & 1) != 0) &&
       (((((*(byte *)(DAT_0203063c + uVar3) & 2) != 0 || (*(char *)(param_1 + 0x231) != '\0')) ||
         (*(byte *)(param_1 + 0xb4) == uVar3)) || (*(byte *)(param_1 + 0xb5) == uVar3)))) {
      uVar4 = uVar4 + 4 & 0xff;
    }
  } while (bVar2 < 4);
  cVar1 = sub_080259BC(param_1);
  if (cVar1 != '\0') {
    uVar4 = (uVar4 << 0x19) >> 0x18;
  }
  return CONCAT44(in_lr,uVar4);
}


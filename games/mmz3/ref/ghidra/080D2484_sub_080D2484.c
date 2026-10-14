// sub_080D2484 at 0x080D2484 (thumb)

undefined4 sub_080D2484(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 0x11) & 0x10) != 0) {
      sub_0800471C(0x2b);
      DAT_0202fbe8 = 0x380;
      DAT_0202f9e8 = 8;
    }
    sub_0800393C(&DAT_085d8b68,(DAT_0202fbe8 - 0x3c8) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8b74,(DAT_0202f9e8 - 0xd) * 0x20 + 0x200);
    sub_0801749C(param_1);
    sub_08017700(param_1,0xec01);
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&UNK_0836d350 + (*(byte *)(param_1 + 0x11) & 0xf) * 0x18,
                 param_1 + 0x54,9);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3 + -0x5000;
    DAT_02002400 = 0x3f40;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(byte *)(param_1 + 0x12) < 7) {
    DAT_02002402 = (ushort)*(byte *)(param_1 + 0x12) * 3 & 0x1f | 0x1000;
  }
  else {
    DAT_02002402 = 0x1010;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    DAT_02002400 = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}


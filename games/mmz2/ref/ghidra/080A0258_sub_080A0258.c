// sub_080A0258 at 0x080A0258 (thumb)

undefined4 sub_080A0258(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0xfe;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12);
      *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12);
      cVar2 = *(char *)(param_1 + 0x12) + -2;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080126A0(param_1);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
      return in_lr;
    }
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    sub_080127E4(param_1,0x3502);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}


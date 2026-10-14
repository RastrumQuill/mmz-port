// sub_080D54C0 at 0x080D54C0 (thumb)

undefined4 sub_080D54C0(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else {
    pbVar3 = (byte *)(param_1 + 0x7d);
    *(ushort *)(param_1 + 0x7e) = *pbVar3 + 0x4ff;
    bVar1 = *pbVar3;
    *pbVar3 = bVar1 - 1;
    if ((byte)(bVar1 - 1) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}


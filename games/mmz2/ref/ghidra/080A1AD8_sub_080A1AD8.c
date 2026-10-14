// sub_080A1AD8 at 0x080A1AD8 (thumb)

undefined4 sub_080A1AD8(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 0x12);
      if ((bVar1 & 1) == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(byte *)(param_1 + 0x12) = bVar1 - 1;
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A1B98(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    puVar4 = (ushort *)(param_1 + 0x50);
    *puVar4 = *puVar4 + 0x10;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 0x10;
    if (*puVar4 < 0x100) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083445e0,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


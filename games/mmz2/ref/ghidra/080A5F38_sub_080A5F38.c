// sub_080A5F38 at 0x080A5F38 (thumb)

undefined4 sub_080A5F38(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x24) + 0x80 & 0xff) + 0x40 & 0xff] * 4;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x24) + 0x80 & 0xff] * 4;
    sVar4 = sub_08008CFC();
    if (sVar4 == 0) {
      return in_lr;
    }
    sub_080B7F60(param_1 + 0x54,5,0);
    *(undefined *)(param_1 + 0x12) = 0x60;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080127E4(param_1,0x5c14);
        sub_08006E08(param_1 + 0x74,&DAT_08344f8c);
        *(char *)(param_1 + 0x24) = -*(char *)(param_1 + 0x24);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x24) + 0x80 & 0xff) + 0x40 & 0xff] * 4;
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) +
           (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x24) + 0x80 & 0xff] * 4;
      if (*(byte *)(param_1 + 0x12) < 0x20) {
        if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 1;
        }
        *(byte *)(param_1 + 10) = bVar1;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A5D24(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080128D4(param_1);
    uVar3 = *(ushort *)(param_1 + 0x52) + 0x18;
    *(ushort *)(param_1 + 0x52) = uVar3;
    if (uVar3 < 0xc0) {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


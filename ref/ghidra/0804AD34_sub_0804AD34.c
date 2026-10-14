// sub_0804AD34 at 0x0804AD34 (thumb)

undefined4 sub_0804AD34(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0;
    bVar1 = (byte)(*(char *)(param_1 + 0xd) - 3U) < 5;
    if (bVar1) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x1800;
      *(undefined *)(param_1 + 0x45) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    }
    *(bool *)(param_1 + 0x13) = bVar1;
  }
  else {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 10) >> 5 & 1;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  cVar2 = *(char *)(param_1 + 0x10);
  if ((((cVar2 == '\x03') || (cVar2 == '\x01')) || (cVar2 == '\x02')) &&
     ((*(char *)(param_1 + 0xd) == '\x02' ||
      ((cVar2 == '\x02' && (*(char *)(param_1 + 0xd) == '\x03')))))) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x1000) == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080033F0(param_1 + 0x6c,0);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080033F0(param_1 + 0x6c,8);
  }
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}


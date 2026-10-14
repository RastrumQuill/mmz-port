// sub_0809C814 at 0x0809C814 (thumb)

undefined4 sub_0809C814(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xb5) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  pbVar2 = (byte *)(param_1 + 0xb5);
  if (*pbVar2 >> 2 < bVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    bVar1 = *pbVar2;
    if (bVar1 != 0xff) {
      *pbVar2 = bVar1 + 1;
      if (bVar1 == 7) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
      }
      else {
        *(undefined *)(param_1 + 0x12) = 0;
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}


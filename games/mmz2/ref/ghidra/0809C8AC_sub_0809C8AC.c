// sub_0809C8AC at 0x0809C8AC (thumb)

undefined4 sub_0809C8AC(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  byte *pbVar4;
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
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  puVar3 = (ushort *)(param_1 + 0xb8);
  uVar2 = *puVar3;
  *puVar3 = uVar2 - 0x200;
  if ((ushort)(uVar2 - 0x200) < 0x300) {
    *puVar3 = 0x300;
  }
  *(char *)(param_1 + 0x24) = (char)(*puVar3 >> 8) + *(char *)(param_1 + 0x24);
  pbVar4 = (byte *)(param_1 + 0xb5);
  if (*pbVar4 >> 2 < *(byte *)(param_1 + 0x12)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    bVar1 = *pbVar4;
    if (bVar1 != 0xff) {
      *pbVar4 = bVar1 + 1;
      if (bVar1 == 0xb) {
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


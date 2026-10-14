// sub_0807C974 at 0x0807C974 (thumb)

undefined4 sub_0807C974(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  bVar1 = *(byte *)(param_1 + 0xd5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0807E7E0(param_1,0x17);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && ('\x01' < *(char *)(param_1 + 0x71))) {
    sub_08001D30(&DAT_08c44e4c,(DAT_0202e1ae - 0x2c4) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44e58,(DAT_0202dfae - 5) * 0x20 + 0x200);
    uVar3 = 0;
    do {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      local_24 = *(int *)(param_1 + 0xb8) + (uVar2 * 2 >> 0x11 & 3) * -0x1000 + -0x800;
      if ((int)uVar3 / 2 != (uint)bVar1) {
        local_28 = sub_0807E898(param_1,uVar3 & 0xff);
        sub_080B5D7C(param_1,&local_28,uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 8);
    *(undefined *)(param_1 + 0x13) = 0;
  }
  if (*(short *)(param_1 + 0x12) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


// sub_080FE2F0 at 0x080FE2F0 (thumb)

undefined4 sub_080FE2F0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    (&DAT_0202e8b4)[*(uint *)(&DAT_08867df0 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
         (byte)(1 << (*(uint *)(&DAT_08867df0 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
         (&DAT_0202e8b4)[*(uint *)(&DAT_08867df0 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
    (&DAT_02035880)[*(uint *)(&DAT_08867df0 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
         (byte)(1 << (*(uint *)(&DAT_08867df0 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
         (&DAT_02035880)[*(uint *)(&DAT_08867df0 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
    *(undefined *)(param_1 + 0x12) = 0;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(char *)(param_1 + 0x13) = (char)(uVar2 * 2 >> 0x11);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x1500;
    sub_080E16B4(&local_1c,
                 (((uint)*(byte *)(param_1 + 0x12) << 0x18) >> 0x1a) * 0x38 +
                 (uint)*(byte *)(param_1 + 0x13) & 0xff,0x100);
    sub_080D4898(param_1 + 0x54,&UNK_08867d64 + (uint)(*(byte *)(param_1 + 0x12) >> 2) * 0x1c,0,
                 *(byte *)(param_1 + 10) & 0x10);
    sub_08002B10(0xa6);
  }
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x10 < bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}


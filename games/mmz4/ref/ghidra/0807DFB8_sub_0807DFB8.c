// sub_0807DFB8 at 0x0807DFB8 (thumb)

undefined4 sub_0807DFB8(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x147);
    sub_0807E7E0(param_1,0x1b);
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
  bVar2 = *(byte *)(param_1 + 0x12);
  if ((*(char *)(param_1 + 0x13) != '\0') && (bVar2 < 0x21)) {
    if (*(int *)(param_1 + 0xd8) == 0) {
      sub_08001D30(&DAT_08c44e60,(DAT_0202e1b0 - 0x339) * 0x20 + 0x10000);
      sub_08002208(&DAT_08c44e6c,(DAT_0202dfb0 - 6) * 0x20 + 0x200);
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0x500;
      iVar1 = sub_080CF64C(param_1,&local_18,1,0);
      *(int *)(param_1 + 0xd8) = iVar1;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    bVar2 = *(byte *)(param_1 + 0x12);
  }
  if (bVar2 == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


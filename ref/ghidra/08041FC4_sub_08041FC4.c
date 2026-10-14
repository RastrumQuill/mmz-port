// sub_08041FC4 at 0x08041FC4 (thumb)

undefined4 sub_08041FC4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080014E8(&DAT_08500500,(DAT_02023090 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_0850050c,(DAT_02023100 - 7) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  cVar1 = *(char *)(param_1 + 0x13) + '\x01';
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == *(char *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  else {
    cVar1 = (&DAT_083a8013)
            [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
             (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


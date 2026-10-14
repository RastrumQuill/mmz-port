// sub_0803D7F4 at 0x0803D7F4 (thumb)

undefined4 sub_0803D7F4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xc9);
  if (cVar1 == '\0') {
    sub_08001904(0x2b,(uint)(byte)(&DAT_083a8013)
                                  [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
                                   (uint)*(byte *)(param_1 + 9) * 4 +
                                   (&DAT_083a8000)[*(byte *)(param_1 + 9)]] << 5 | 0x200);
  }
  else {
    cVar1 = cVar1 + -1;
    *(char *)(param_1 + 0xc9) = cVar1;
    if (cVar1 != '\0') {
      sub_08001904(0x2a,(uint)(byte)(&DAT_083a8013)
                                    [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
                                     (uint)*(byte *)(param_1 + 9) * 4 +
                                     (&DAT_083a8000)[*(byte *)(param_1 + 9)]] << 5 | 0x200);
    }
  }
  return in_lr;
}


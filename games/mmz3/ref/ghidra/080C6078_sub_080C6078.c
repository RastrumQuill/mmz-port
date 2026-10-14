// sub_080C6078 at 0x080C6078 (thumb)

undefined4 sub_080C6078(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  DAT_02002402 = bVar1 & 0x1f | (0x10 - (ushort)*(byte *)(param_1 + 0x12)) * 0x100;
  if (bVar1 == 0) {
    DAT_0202f4a5 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  }
  else {
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
  }
  return in_lr;
}


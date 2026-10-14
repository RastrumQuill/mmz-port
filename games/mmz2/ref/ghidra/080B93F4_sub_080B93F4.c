// sub_080B93F4 at 0x080B93F4 (thumb)

undefined4 sub_080B93F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x49) =
         *(byte *)(param_1 + 0x49) & 0xf3 | (byte)((*(byte *)(param_1 + 0x12) & 3) << 2);
    *(bool *)(param_1 + 0x22) = *(char *)(param_1 + 0x12) == '\x03';
    *(undefined *)(param_1 + 0x25) = 9;
    sub_080127E4(param_1,0x690e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}


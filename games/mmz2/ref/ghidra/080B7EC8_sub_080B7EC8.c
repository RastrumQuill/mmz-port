// sub_080B7EC8 at 0x080B7EC8 (thumb)

undefined4 sub_080B7EC8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08012580(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0x5900);
    *(undefined4 *)(param_1 + 0x54) =
         *(undefined4 *)(&DAT_08346f18 + (uint)*(byte *)(param_1 + 0x11) * 8);
    *(undefined4 *)(param_1 + 0x58) =
         *(undefined4 *)(&DAT_08346f1c + (uint)*(byte *)(param_1 + 0x11) * 8);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}


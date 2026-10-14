// sub_08087D18 at 0x08087D18 (thumb)

undefined4 sub_08087D18(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) == 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b317c + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08001EE8((int)*(short *)(param_1 + 0xc0));
      *(short *)(param_1 + 0xc0) = -1;
    }
  }
  return in_lr;
}


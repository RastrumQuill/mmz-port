// sub_08026F44 at 0x08026F44 (thumb)

undefined4 sub_08026F44(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) == '\x03') {
    if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
      sub_08001EAC(0x1b);
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ab32c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}


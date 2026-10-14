// sub_08026D20 at 0x08026D20 (thumb)

undefined4 sub_08026D20(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) == '\0') {
    if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
      sub_0808F190(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                   *(byte *)(param_1 + 10) >> 4 & 1);
      sub_08001EAC(0x1b);
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ab318 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}


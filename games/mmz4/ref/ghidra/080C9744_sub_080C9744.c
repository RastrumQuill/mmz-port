// sub_080C9744 at 0x080C9744 (thumb)

undefined4 sub_080C9744(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CFF0();
  sub_08005784(param_1 + 0x74,*(undefined4 *)(&DAT_08862cfc + *(char *)(param_1 + 0x71) * 4));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C97A8(param_1);
  }
  return in_lr;
}


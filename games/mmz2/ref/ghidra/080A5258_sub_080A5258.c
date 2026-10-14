// sub_080A5258 at 0x080A5258 (thumb)

undefined4 sub_080A5258(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x05') {
    sub_080A4E3C(param_1,1,*(byte *)(param_1 + 0x11) & 1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A4EEC(param_1);
  }
  return in_lr;
}


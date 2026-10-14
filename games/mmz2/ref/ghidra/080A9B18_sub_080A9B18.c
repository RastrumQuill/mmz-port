// sub_080A9B18 at 0x080A9B18 (thumb)

undefined4 sub_080A9B18(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}


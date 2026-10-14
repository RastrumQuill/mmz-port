// sub_080BD820 at 0x080BD820 (thumb)

undefined4 sub_080BD820(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xc702);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08002EF0(*(char *)(param_1 + 0x10) + 'Z');
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}


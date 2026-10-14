// sub_080A3C08 at 0x080A3C08 (thumb)

undefined4 sub_080A3C08(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0x71) != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_083449f4,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if ('\x04' < *(char *)(param_1 + 0x71)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A36BC(param_1);
  }
  return in_lr;
}


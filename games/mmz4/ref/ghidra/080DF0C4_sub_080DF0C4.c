// sub_080DF0C4 at 0x080DF0C4 (thumb)

undefined4 sub_080DF0C4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x1400;
    sub_080D0894(2,&local_1c);
    sub_080DEEF8(&local_1c,*(undefined *)(param_1 + 0x10),2,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined *)(param_1 + 0x74));
    sub_080DEEF8(&local_1c,*(undefined *)(param_1 + 0x10),5,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined *)(param_1 + 0x74));
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0xa00;
    sub_080D0894(1,&local_1c);
    sub_08002B10(0x2a);
    sub_080DEEF8(param_1 + 0x54,*(undefined *)(param_1 + 0x10),4,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined *)(param_1 + 0x74));
    sub_080DEEF8(param_1 + 0x54,*(undefined *)(param_1 + 0x10),3,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined *)(param_1 + 0x74));
  }
  else {
    sub_080D0894(3,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}


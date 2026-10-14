// sub_080E66F4 at 0x080E66F4 (thumb)

/* WARNING: Removing unreachable block (ram,0x080e674c) */
/* WARNING: Removing unreachable block (ram,0x080e675a) */

undefined4 sub_080E66F4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080E65E0(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0x1400;
    sub_080D0894(2,&local_14);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0xe;
    *(undefined4 *)(param_1 + 0x68) = 6;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 100) = 0xfffffff2;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865aac + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}


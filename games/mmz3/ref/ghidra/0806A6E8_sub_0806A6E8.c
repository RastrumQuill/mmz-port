// sub_0806A6E8 at 0x0806A6E8 (thumb)

undefined4 sub_0806A6E8(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 3) {
    if (((*(uint *)(*(int *)(param_1 + 0x28) + 0xd4) & 2) != 0) &&
       (*(char *)(param_1 + 0xd) != '\x05')) {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362ba8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&UNK_08362bc0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      sub_080FE2C0(param_1,*(undefined4 *)(&UNK_08362bd8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


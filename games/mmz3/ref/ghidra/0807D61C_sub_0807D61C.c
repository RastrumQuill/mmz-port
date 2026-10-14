// sub_0807D61C at 0x0807D61C (thumb)

undefined4 sub_0807D61C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && ((DAT_02030108 & 0x40) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364498 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}


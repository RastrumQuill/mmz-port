// sub_080C111C at 0x080C111C (thumb)

undefined4 sub_080C111C(int param_1)

{
  undefined4 in_lr;
  byte abStack_c [4];
  
  sub_08128BBC(abStack_c,0,2);
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (DAT_0202ea34 + 0x6fff < *(int *)(param_1 + 0x58)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc);
    }
    else if ((*(char *)(*(int *)(param_1 + 0x28) + 200) == '\0') ||
            (sub_08005784(param_1 + 0x74,
                          &DAT_08861d30 + (uint)abStack_c[*(byte *)(param_1 + 0xb4)] * 0x18),
            *(char *)(param_1 + 0xd) == '\x03')) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_08861d1c + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C1550(param_1);
  }
  return in_lr;
}


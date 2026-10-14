// sub_0803DE0C at 0x0803DE0C (thumb)

undefined4 sub_0803DE0C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
      if ((*(char *)(param_1 + 0xc) == '\0') ||
         (iVar1 = sub_0803E4D8(param_1,*(undefined4 *)(param_1 + 0x54),
                               *(undefined4 *)(param_1 + 0x58)), iVar1 == 0)) {
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08339dcc + (uint)*(byte *)(param_1 + 0xd) * 4));
        if (*(char *)(param_1 + 0x73) == '\x03') {
          sub_080127E4(param_1,0x5505);
        }
        sub_08012A14(param_1);
        return in_lr;
      }
      if (iVar1 < 1) {
        *(undefined *)(param_1 + 0x13) = 0;
      }
      else {
        *(undefined *)(param_1 + 0x13) = 0;
        sub_080AD254(2,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                     0 < *(int *)(param_1 + 0x5c));
      }
    }
    else {
      sub_080AC670(4,param_1 + 0x54,~*(uint *)(param_1 + 0x5c) >> 0x1f,0);
      sub_080032EC(0x2b);
      *(undefined *)(param_1 + 0x13) = 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
    sub_0803E09C(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
    sub_0803E09C(param_1);
  }
  return in_lr;
}


// sub_0803F03C at 0x0803F03C (thumb)

undefined4 sub_0803F03C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
      if ((*(char *)(param_1 + 0xc) == '\0') ||
         (cVar1 = sub_0803F584(param_1,*(undefined4 *)(param_1 + 0x54),
                               *(undefined4 *)(param_1 + 0x58)), cVar1 == '\0')) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        sub_08012A14(param_1);
        return in_lr;
      }
      if ('\0' < cVar1) {
        sub_080AD254(1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                     0 < *(int *)(param_1 + 0x5c));
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      sub_080AC670(4,param_1 + 0x54,~*(uint *)(param_1 + 0x5c) >> 0x1f,0);
      sub_080032EC(0x2b);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(undefined *)(param_1 + 0xd) = 0;
    }
    sub_0803F11C(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0803F11C(param_1);
  }
  return in_lr;
}


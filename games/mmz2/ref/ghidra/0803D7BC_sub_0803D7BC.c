// sub_0803D7BC at 0x0803D7BC (thumb)

undefined4 sub_0803D7BC(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12);
    cVar2 = *(char *)(param_1 + 0x71);
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
      if ((*(char *)(param_1 + 0xc) != '\0') &&
         (cVar3 = sub_0803DB6C(param_1,*(undefined4 *)(param_1 + 0x54),
                               *(undefined4 *)(param_1 + 0x58)), cVar3 != '\0')) {
        if ('\0' < cVar3) {
          sub_080AD254(2,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                       0 < *(int *)(param_1 + 0x5c));
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
        sub_0803D988(param_1);
        return in_lr;
      }
    }
    else {
      sub_080AC670(4,param_1 + 0x54,~*(uint *)(param_1 + 0x5c) >> 0x1f,0);
      sub_080032EC(0x2b);
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08339d2c + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0803DBE0(param_1,1);
    }
    sub_08012A14(param_1);
    if ((*(char *)(param_1 + 0x12) != cVar1) || (*(char *)(param_1 + 0x71) != cVar2)) {
      sub_0803DBF8(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
    sub_0803D988(param_1);
  }
  return in_lr;
}


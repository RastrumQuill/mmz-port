// sub_0802DCCC at 0x0802DCCC (thumb)

undefined4 sub_0802DCCC(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_08034598(param_1,*(char *)(param_1 + 0xc0) != '\x02');
  *(undefined *)(param_1 + 0x133) = 0;
  if (*(char *)(param_1 + 0x225) == '\x03') {
    *(undefined *)(param_1 + 0xed) = 7;
    *(undefined *)(param_1 + 0xee) = 0;
LAB_0802ddbc:
    sub_0802DF74(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x22b) == '\x03') {
    *(undefined *)(param_1 + 0xed) = 8;
    *(undefined *)(param_1 + 0xee) = 0;
LAB_0802dd86:
    sub_0802DF8C(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x22d) == '\x03') {
      uVar2 = sub_08032C9C(param_1);
      *(undefined2 *)(param_1 + 0x138) = uVar2;
      *(undefined *)(param_1 + 0xed) = 9;
      *(undefined *)(param_1 + 0xee) = 0;
    }
    else {
      if (cVar1 != '\x02') {
        *(undefined *)(param_1 + 0xee) = 0;
        cVar1 = sub_0803462C(param_1);
        if (cVar1 != '\0') {
          *(undefined *)(param_1 + 0xed) = 0xb;
          sub_0802DFF0(param_1);
          return in_lr;
        }
        if (*(char *)(param_1 + 0x13b) == '\0') {
          if ((*(uint *)(param_1 + 0x218) & 0x40) != 0) {
            *(undefined *)(param_1 + 0xed) = 3;
            sub_0802DEE0(param_1);
            return in_lr;
          }
          if ((*(uint *)(param_1 + 0x218) & 0x80) != 0) {
            *(undefined *)(param_1 + 0xed) = 5;
            sub_0802DF3C(param_1);
            return in_lr;
          }
          *(undefined *)(param_1 + 0xed) = 1;
          sub_0802DE88(param_1);
          return in_lr;
        }
        if ((*(uint *)(param_1 + 0x218) & 0x40) != 0) {
          *(undefined *)(param_1 + 0xed) = 4;
          sub_0802DF20(param_1);
          return in_lr;
        }
        if ((*(uint *)(param_1 + 0x218) & 0x80) != 0) {
          *(undefined *)(param_1 + 0xed) = 6;
          sub_0802DF58(param_1);
          return in_lr;
        }
        *(undefined *)(param_1 + 0xed) = 2;
        sub_0802DEC4(param_1);
        return in_lr;
      }
      *(undefined *)(param_1 + 0xee) = 0;
      if ((*(uint *)(param_1 + 0x218) & 0x40) != 0) {
        *(undefined *)(param_1 + 0xed) = 8;
        goto LAB_0802dd86;
      }
      if ((*(uint *)(param_1 + 0x218) & 0x80) == 0) {
        *(undefined *)(param_1 + 0xed) = 7;
        goto LAB_0802ddbc;
      }
      uVar2 = sub_08032C9C(param_1);
      *(undefined2 *)(param_1 + 0x138) = uVar2;
      *(undefined *)(param_1 + 0xed) = 9;
    }
    sub_0802DFA4(param_1);
  }
  return in_lr;
}


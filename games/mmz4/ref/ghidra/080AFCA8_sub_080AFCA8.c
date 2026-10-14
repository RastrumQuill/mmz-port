// sub_080AFCA8 at 0x080AFCA8 (thumb)

undefined4 sub_080AFCA8(int param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  uVar1 = uVar1 * 2 >> 0x11 & 0xff;
  pcVar2 = (char *)(param_1 + 0xb8);
  if (*pcVar2 == '\0') {
    if (0x40 < uVar1) {
      if (*(int *)(param_1 + 0x58) + 0xf00 < *(int *)(DAT_0202dbf0 + 0x58) + -0x1900) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_080AFC4C(param_1);
      *pcVar2 = '\x01';
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    if (uVar1 < 0x41) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(int *)(param_1 + 0x58) + 0xf00 <= *(int *)(DAT_0202dbf0 + 0x58) + -0x1900) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *pcVar2 = '\0';
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080AFC4C(param_1);
  return in_lr;
}


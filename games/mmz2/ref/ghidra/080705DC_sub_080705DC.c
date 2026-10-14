// sub_080705DC at 0x080705DC (thumb)

undefined4 sub_080705DC(int param_1)

{
  uint uVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbf) == -1) {
    uVar2 = 2;
    goto LAB_080706e8;
  }
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  uVar1 = uVar1 * 2 >> 0x11 & 0xf;
  if (*(char *)(param_1 + 0xd) == *(char *)(param_1 + 0xbf)) {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      if (*(char *)(param_1 + 0xb5) == '\x03') {
        uVar2 = 4;
      }
      else {
        uVar2 = 2;
      }
      if (uVar1 < 8) {
        uVar2 = 1;
      }
      goto LAB_080706e8;
    }
    if (*(char *)(param_1 + 0xbd) != '\0') {
      uVar2 = 2;
      if (*(char *)(param_1 + 0xb5) == '\x03') {
        uVar2 = 4;
      }
      *(char *)(param_1 + 0xbd) = '\0';
      goto LAB_080706e8;
    }
    uVar2 = 4;
    goto LAB_080706da;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  default:
    uVar2 = 1;
    goto LAB_080706e8;
  case 1:
    if (*(char *)(param_1 + 0xbf) == '\0') {
      uVar2 = 4;
      goto LAB_080706e8;
    }
    if (*(char *)(param_1 + 0xbd) != '\0') {
      uVar2 = 2;
      if (*(char *)(param_1 + 0xb5) == '\x03') {
        uVar2 = 4;
      }
      *(char *)(param_1 + 0xbd) = '\0';
      goto LAB_080706e8;
    }
    uVar2 = 4;
    break;
  case 3:
  case 7:
    uVar2 = 1;
    if (uVar1 < 0xc) {
      uVar2 = 2;
    }
    goto LAB_080706e8;
  case 4:
    uVar2 = 1;
  }
LAB_080706da:
  if (uVar1 < 8) {
    uVar2 = 2;
  }
LAB_080706e8:
  *(undefined *)(param_1 + 0xbf) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}


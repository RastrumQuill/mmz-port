// sub_08076B84 at 0x08076B84 (thumb)

undefined4 sub_08076B84(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf13);
    sub_08002B10(0xdc);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xfffffd80;
    }
    else {
      uVar2 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff7c0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    pcVar4 = (char *)(param_1 + 0x71);
    if ((*pcVar4 < '\x03') && (*(char *)(param_1 + 0x72) < '\x02')) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_08859bf0 + *pcVar4 * 4);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_08859bf0 + *pcVar4 * 4);
      }
      *(int *)(param_1 + 0x54) = iVar3;
    }
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_08859a78);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sub_080CBB98(param_1,3,0x84);
      sub_080CBB98(param_1,3,0x90);
    }
    else {
      sub_080CBB98(param_1,3,0xfc);
      sub_080CBB98(param_1,3,0xf0);
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined *)(param_1 + 0xd9) = 2;
    if (*(char *)(param_1 + 0x71) < '\x03') {
      return in_lr;
    }
  }
  else {
    if (cVar1 != '\x02') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0x17;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(char *)(param_1 + 0x71) < '\x05') {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_08859970);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


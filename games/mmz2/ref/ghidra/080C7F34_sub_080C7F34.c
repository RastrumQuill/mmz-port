// sub_080C7F34 at 0x080C7F34 (thumb)

undefined4 sub_080C7F34(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202e916 = 0x300;
    DAT_0202e316 = 9;
    sub_080127E4(param_1,0xc308);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 1) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfe;
      sub_080127E4(param_1,0xc310);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 2) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfd;
      sub_080127E4(param_1,0xc30e);
      *(undefined *)(param_1 + 0xd) = 3;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc31c);
    *(undefined *)(param_1 + 0x12) = 0x22;
    cVar2 = '\n';
    break;
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc31d);
    cVar2 = '\x01';
    break;
  case 3:
    sub_080128D4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 4) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfb;
    sub_080127E4(param_1,0xc30f);
    cVar2 = '\x01';
    break;
  default:
    goto switchD_080c7f48_caseD_4;
  case 10:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x380;
    uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar3 < 0x4000) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  *(char *)(param_1 + 0xd) = cVar2;
switchD_080c7f48_caseD_4:
  return in_lr;
}


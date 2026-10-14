// sub_080C3864 at 0x080C3864 (thumb)

undefined4 sub_080C3864(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xc200);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x700;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 2) == 0) {
      if ((bVar1 & 1) != 0) {
        *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfe;
        uVar3 = 0xc201;
LAB_080c3922:
        sub_080127E4(param_1,uVar3);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else {
      sub_080127E4(param_1,0xc202);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x02';
    }
    break;
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080127E4(param_1,0xc200);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -1;
    }
    break;
  case 3:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    uVar3 = 0xc203;
    goto LAB_080c3922;
  case 4:
    sub_080128D4(param_1);
    iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (*(int *)(param_1 + 0x58) < iVar2) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0xc0;
      iVar2 = *(int *)(param_1 + 0x58) + 0xc0;
    }
    else {
      iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54));
    }
    *(int *)(param_1 + 0x58) = iVar2;
    break;
  default:
    return in_lr;
  }
  return in_lr;
}


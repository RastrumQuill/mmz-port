// sub_08083280 at 0x08083280 (thumb)

undefined4 sub_08083280(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + -1;
  }
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((sVar2 == 0) ||
     (cVar1 = sub_08083FD8(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x5000),
     cVar1 != '\0')) {
    if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


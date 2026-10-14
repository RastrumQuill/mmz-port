// sub_08040DD4 at 0x08040DD4 (thumb)

undefined4 sub_08040DD4(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa201);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    if (*(char *)(param_1 + 0xc0) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0xc4) + 0x54) + 0x7000 < *(int *)(param_1 + 0x54)) {
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\x03';
      }
      *(char *)(param_1 + 0xc0) = cVar1;
      *(char *)(param_1 + 0xc2) = cVar1;
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0x20;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
  }
  sub_080128D4(param_1);
  uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


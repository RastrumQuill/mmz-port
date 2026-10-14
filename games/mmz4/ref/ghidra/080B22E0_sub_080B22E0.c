// sub_080B22E0 at 0x080B22E0 (thumb)

undefined4 sub_080B22E0(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xb5) | 0xc500);
    *(undefined4 *)(param_1 + 0x5c) = 0x2c0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd40;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x11) < 2) && (cVar1 = sub_080B29B4(param_1), cVar1 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xf) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar2 = 0x20;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = sub_080B2918(param_1);
    if ((cVar1 == '\0') && (cVar1 = sub_080B27D8(param_1), cVar1 == '\0')) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar2 = 0x18;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  return in_lr;
}


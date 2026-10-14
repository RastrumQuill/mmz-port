// sub_08046A70 at 0x08046A70 (thumb)

undefined4 sub_08046A70(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa504);
    sub_08006E08(param_1 + 0x74,&DAT_0833aa94);
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar1 = 0x100;
    }
    else {
      uVar1 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  piVar2 = (int *)(param_1 + 0xe0);
  if ((*piVar2 != 0) && (iVar3 = sub_0801E4D8(*piVar2), iVar3 != 0)) {
    *piVar2 = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(int *)(param_1 + 0xb8) < iVar3) {
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xd4);
    }
  }
  else if (*piVar2 == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  return in_lr;
}


// sub_08076918 at 0x08076918 (thumb)

undefined4 sub_08076918(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1404);
    *(undefined *)(param_1 + 0xb9) = 1;
    sub_08006E08(param_1 + 0x74,&DAT_0833faf4);
    uVar3 = 0x180;
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      uVar3 = 0xfffffe80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    sVar1 = sub_08008CFC(iVar2,*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      if (*(int *)(param_1 + 0x5c) < 0) {
        uVar3 = sub_080771C0(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)
                            );
      }
      else {
        uVar3 = sub_080771E0(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)
                            );
      }
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 == 0) {
      return in_lr;
    }
    uVar3 = sub_0807721C(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    sub_08076E8C(param_1);
  }
  return in_lr;
}


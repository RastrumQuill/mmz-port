// sub_08076770 at 0x08076770 (thumb)

undefined4 sub_08076770(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1404);
    sub_08006E08(param_1 + 0x74,&DAT_0833fa94);
    *(undefined *)(param_1 + 0xb9) = 1;
    uVar4 = 0x180;
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      uVar4 = 0xfffffe80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  sVar2 = sub_08008CFC(iVar3,*(undefined4 *)(param_1 + 0x58));
  if ((sVar2 != 0) &&
     (cVar1 = sub_080771A0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     cVar1 == '\0')) {
    if (*(int *)(param_1 + 0x5c) < 0) {
      uVar4 = sub_080771C0(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      uVar4 = sub_080771E0(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((sVar2 != 0) &&
     (cVar1 = sub_080771A0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     cVar1 == '\0')) {
    uVar4 = sub_0807721C(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    sub_08076E8C(param_1);
  }
  return in_lr;
}


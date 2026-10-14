// sub_080254B0 at 0x080254B0 (thumb)

undefined4 sub_080254B0(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = bVar2 | 1;
    sub_08015EEC(param_1,0x1000);
    uVar1 = sub_0808F900(param_1);
    *(undefined4 *)(param_1 + 0x220) = uVar1;
    *(undefined4 *)(param_1 + 0x54) = 0x380;
    sub_08001EAC(7);
    sub_0808D634(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_080254c8_caseD_2;
  case 3:
    goto switchD_080254c8_caseD_3;
  default:
    goto switchD_080254c8_caseD_4;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  sub_08015F80(param_1);
  if (*(int *)(iVar3 + 0x4c) < *(int *)(param_1 + 0x4c)) {
    if (*(int *)(param_1 + 0x220) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x220) + 0x11) = 1;
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
    sub_08015EEC(param_1,0x1400);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080254c8_caseD_2:
    iVar3 = sub_08009E9C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (*(int *)(param_1 + 0x58) < 0x700) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    sub_08015F80(param_1);
    if ((iVar3 <= *(int *)(param_1 + 0x50)) && (0x6ff < *(int *)(param_1 + 0x58))) {
      *(int *)(param_1 + 0x50) = iVar3;
      sub_08015EEC(param_1,0x202);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080254c8_caseD_3:
      sub_08015F80(param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        sub_08015EEC(param_1,0);
        sub_08015F80(param_1);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
  }
switchD_080254c8_caseD_4:
  return in_lr;
}


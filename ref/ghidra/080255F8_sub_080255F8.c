// sub_080255F8 at 0x080255F8 (thumb)

undefined4 sub_080255F8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(int *)(iVar2 + 0x4c) == *(int *)(param_1 + 0x4c)) {
      uVar1 = 0;
    }
    else if (*(int *)(iVar2 + 0x4c) < *(int *)(param_1 + 0x4c)) {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      uVar1 = 0xfffffc80;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      uVar1 = 0x380;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08015EEC(param_1,0x1000);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    sub_08001EAC(7);
    uVar1 = sub_0808F900(param_1);
    *(undefined4 *)(param_1 + 0x220) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08025610_caseD_1:
    sub_08015F80(param_1);
    if (*(int *)(param_1 + 0x4c) >> 10 == *(int *)(iVar2 + 0x4c) >> 10) {
      if (*(int *)(param_1 + 0x220) != 0) {
        *(undefined *)(*(int *)(param_1 + 0x220) + 0x11) = 1;
      }
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
      sub_08015EEC(param_1,0x1001);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08025610_caseD_2:
      sub_08015F80(param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        sub_08015EEC(param_1,0x1600);
LAB_08025720:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    }
switchD_08025610_caseD_4:
    return in_lr;
  case 1:
    goto switchD_08025610_caseD_1;
  case 2:
    goto switchD_08025610_caseD_2;
  case 3:
    sub_08015F80(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08025720;
  default:
    goto switchD_08025610_caseD_4;
  }
}


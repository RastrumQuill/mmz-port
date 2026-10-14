// sub_08045E90 at 0x08045E90 (thumb)

undefined4 sub_08045E90(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      *(undefined *)(param_1 + 0x13) = 5;
      *(undefined *)(param_1 + 0xcb) = 0x14;
    }
    else if (*(short *)(param_1 + 0x8c) < 0x30) {
      *(undefined *)(param_1 + 0x13) = 4;
      *(undefined *)(param_1 + 0xcb) = 0x18;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 3;
      *(undefined *)(param_1 + 0xcb) = 0x20;
    }
  }
  sub_080297C0(param_1);
  if ((*(char *)(param_1 + 0xf) == '\0') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0x12) = 1;
    uVar1 = 1;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0xcb);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
      *(undefined *)(iVar3 + 0xd) = 3;
      *(undefined *)(iVar3 + 0xe) = 0;
      sub_08086074(param_1,1,*(undefined *)(param_1 + 0x13));
      sub_08001EAC(0xa3);
    }
    if (*(char *)(param_1 + 0x13) != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 10;
    uVar1 = 0xe;
  }
  *(undefined *)(param_1 + 0xf) = uVar1;
  return in_lr;
}


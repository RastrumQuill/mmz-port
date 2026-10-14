// sub_08088EE0 at 0x08088EE0 (thumb)

undefined4 sub_08088EE0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_08007390(param_1 + 0x74,&DAT_08364fdc);
    sub_08017700(param_1,0xdd02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar2 = *(int *)(DAT_0202f5c0 + 0x54) - iVar3;
    if (iVar2 < 0) {
      iVar2 = iVar3 - *(int *)(DAT_0202f5c0 + 0x54);
    }
    if (iVar2 < 0x6000) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar3 = *(int *)(param_1 + 0x54);
  }
  uVar1 = sub_0800A5A4(iVar3,*(int *)(param_1 + 0x58) + 0x400);
  sub_080887E0(param_1,uVar1,0x800);
  sub_080177F4(param_1);
  return in_lr;
}


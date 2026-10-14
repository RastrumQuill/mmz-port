// sub_080B5AD4 at 0x080B5AD4 (thumb)

undefined4 sub_080B5AD4(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080B3DE4(param_1,2);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080B5CE0(param_1);
    sub_080B3E80(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
      uVar2 = sub_08099154(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
LAB_080b5baa:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_080B3E80(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) != 0) {
      iVar3 = *(int *)(param_1 + 0xc0);
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
        *(undefined4 *)(iVar3 + 0xc) = 3;
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(iVar3 + 9)] + 0xc)
        ;
        *(int *)(param_1 + 0xc0) = 0;
      }
      iVar3 = *(byte *)(param_1 + 0x12) + 1;
      *(char *)(param_1 + 0x12) = (char)iVar3;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3 * 0x10;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) break;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined *)(param_1 + 0x12) = 0;
    goto LAB_080b5baa;
  case 3:
    iVar3 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar3;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3 * 0x10;
    sub_080B3E80(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) == 0) break;
    sub_08099D0C(param_1,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    break;
  }
  if (*(byte *)(param_1 + 0xe) < 2) {
    uVar1 = sub_08099CA8(param_1,*(undefined *)(param_1 + 0x13));
    *(undefined *)(param_1 + 0x13) = uVar1;
  }
  return in_lr;
}


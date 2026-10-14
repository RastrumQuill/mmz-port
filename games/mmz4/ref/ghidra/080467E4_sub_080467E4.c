// sub_080467E4 at 0x080467E4 (thumb)

undefined4 sub_080467E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_0801D134();
  if (*(byte *)(param_1 + 0xe) < 2) {
    if ((*(byte *)(param_1 + 0xe) == 1) && (*(byte *)(param_1 + 0x11) < 4)) {
      sub_080462B0(*(undefined4 *)(param_1 + 0x2c),param_1,*(byte *)(param_1 + 0x11) + 1);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (1 < *(byte *)(iVar1 + 0xc)) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0xb8);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}


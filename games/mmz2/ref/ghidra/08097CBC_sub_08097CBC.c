// sub_08097CBC at 0x08097CBC (thumb)

undefined4 sub_08097CBC(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = 0xffffff40;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff40;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar3 = 0xc0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58);
  if (iVar4 < 0) {
    iVar4 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202e130 + 0x58);
  }
  if (iVar4 < 0x2000) {
    uVar2 = 2;
  }
  else {
    cVar1 = sub_080977C8(param_1,*(undefined4 *)(param_1 + 0x60));
    if (cVar1 == '\0') {
      sub_080978A0(param_1);
      return in_lr;
    }
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}


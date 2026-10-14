// sub_080C4A24 at 0x080C4A24 (thumb)

undefined4 sub_080C4A24(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,0x8904);
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      uVar2 = 0xfffffc40;
    }
    else {
      sub_080127E4(param_1,0x8905);
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      uVar2 = 0xffffff40;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}


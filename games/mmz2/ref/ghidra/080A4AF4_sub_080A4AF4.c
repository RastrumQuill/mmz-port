// sub_080A4AF4 at 0x080A4AF4 (thumb)

undefined4 sub_080A4AF4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0xd) == '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_080127E4(param_1,0x5203);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar3 = -0x380;
  }
  else {
    iVar3 = -0x200;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar3;
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 0x20) {
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A4614(param_1);
  }
  return in_lr;
}


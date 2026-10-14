// sub_080C5270 at 0x080C5270 (thumb)

undefined4 sub_080C5270(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08017700(param_1,0x10);
    }
    else {
      sub_08017700(param_1,*(byte *)(param_1 + 0x11) | 0xba00);
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x60) < 0x700) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x2a;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((0x3c < bVar1) && (iVar2 = sub_08009B28(iVar2,iVar3), iVar2 != 0)) {
    if (*(char *)(param_1 + 0x11) != '\0') {
      local_10 = *(undefined4 *)(param_1 + 0x54);
      local_c = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(3,&local_10);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}


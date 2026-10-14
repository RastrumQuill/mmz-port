// sub_08080A48 at 0x08080A48 (thumb)

undefined4 sub_08080A48(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
  }
  else {
    sub_080033F0(param_1 + 0x6c,1);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x4c) + -0x2900;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4c) + 0x2900;
    }
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar3 = *(int *)(param_1 + 0x50);
    iVar2 = -0x600;
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar2 = -0x1b00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar2 = 0x1b00;
    }
    *(int *)(param_1 + 0x4c) = iVar3 + iVar2;
    if (*(char *)(param_1 + 0x11) == '\x01') {
      iVar3 = *(int *)(param_1 + 0x50);
      iVar2 = -0x2000;
    }
    else {
      *(undefined *)(param_1 + 0x45) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      iVar3 = *(int *)(param_1 + 0x50);
      iVar2 = 0x1400;
    }
  }
  *(int *)(param_1 + 0x50) = iVar3 + iVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2814,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08080A04(param_1);
  return in_lr;
}


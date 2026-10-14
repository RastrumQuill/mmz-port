// sub_080B6B34 at 0x080B6B34 (thumb)

undefined4 sub_080B6B34(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  cVar1 = sub_080B4634(2,*(undefined *)(param_1 + 0x10));
  if (cVar1 < '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 0x10);
    sub_080B4434(iVar3,param_1);
  }
  else {
    *(char *)(param_1 + 0x11) = cVar1;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0x120;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_080B4FA4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    bVar2 = *(byte *)(iVar3 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080B50DC(param_1,6);
    sub_080B6BE8(param_1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 4);
  }
  return in_lr;
}


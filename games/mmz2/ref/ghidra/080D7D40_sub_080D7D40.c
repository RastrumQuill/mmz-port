// sub_080D7D40 at 0x080D7D40 (thumb)

undefined4 sub_080D7D40(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  cVar1 = sub_080D58A8(2,*(undefined *)(param_1 + 0x10));
  if (cVar1 < '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 0x10);
    sub_080D568C(iVar3,param_1);
  }
  else {
    *(char *)(param_1 + 0x11) = cVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined2 *)(param_1 + 0xb4) = 0x120;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(byte *)(param_1 + 0x4c) = *(byte *)(iVar3 + 10) >> 4 & 1;
    bVar2 = *(byte *)(iVar3 + 10) >> 4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar2 & 1) << 4);
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080127E4(param_1,0x9006);
    sub_080D7E14(param_1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
  }
  return in_lr;
}


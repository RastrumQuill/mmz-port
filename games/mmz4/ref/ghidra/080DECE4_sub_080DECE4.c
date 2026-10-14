// sub_080DECE4 at 0x080DECE4 (thumb)

undefined4 sub_080DECE4(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = DAT_0202dbf0;
  iVar4 = *(int *)(param_1 + 0x2c);
  sub_0801CFF0(param_1);
  if ((((DAT_0202e918 & 8) == 0) && (*(int *)(iVar3 + 0xec) != 0)) && (*(byte *)(iVar4 + 0xc) < 2))
  {
    if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(iVar3 + 0x54) +
              (int)*(short *)(&DAT_08865234 + (uint)*(byte *)(iVar3 + 0x174) * 2);
    }
    else {
      iVar4 = *(int *)(iVar3 + 0x54) -
              (int)*(short *)(&DAT_08865234 + (uint)*(byte *)(iVar3 + 0x174) * 2);
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
    if (*(char *)(param_1 + 0xd) == '\0') {
      iVar4 = *(int *)(param_1 + 0x58) + -0x400;
      *(int *)(param_1 + 0x58) = iVar4;
      iVar3 = *(int *)(DAT_0202dbf0 + 0x58) + *(int *)(param_1 + 0x68) +
              (int)*(short *)(&DAT_08865240 + (uint)*(byte *)(iVar3 + 0x174) * 2);
      if (iVar4 < iVar3) {
        *(int *)(param_1 + 0x58) = iVar3;
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x58) =
           *(int *)(DAT_0202dbf0 + 0x58) + *(int *)(param_1 + 0x68) +
           (int)*(short *)(&DAT_08865240 + (uint)*(byte *)(iVar3 + 0x174) * 2);
    }
    cVar1 = sub_0802B6E8(DAT_0202dbf0);
    bVar2 = cVar1 + *(char *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2;
    if (0x10 < bVar2) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080DE904(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DE904(param_1);
  }
  return in_lr;
}


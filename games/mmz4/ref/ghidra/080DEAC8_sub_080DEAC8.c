// sub_080DEAC8 at 0x080DEAC8 (thumb)

undefined4 sub_080DEAC8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(iVar2 + 0xc) < 2) &&
     (CONCAT11(*(undefined *)(iVar2 + 0x1e),*(undefined *)(iVar2 + 0x70)) != -0x56e8)) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x13) << 6;
      *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x13) << 6;
      if (*(char *)(param_1 + 0x13) == '\x04') {
        sub_0801CC9C(param_1);
        sub_0801CEEC(param_1);
        sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865276 + (uint)*(byte *)(param_1 + 0x11) * 2));
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if (*(byte *)(param_1 + 0x12) < 4) {
      *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x13) << 6;
      *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x13) << 6;
    }
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080DE904(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}


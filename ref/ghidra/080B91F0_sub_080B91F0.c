// sub_080B91F0 at 0x080B91F0 (thumb)

undefined4 sub_080B91F0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar3 = sub_080B9B78();
  iVar6 = *(int *)(iVar3 + 0x10);
  bVar1 = sub_0801C540(iVar6);
  uVar5 = (uint)bVar1;
  if (*(byte *)(param_1 + 0x12) == 0) {
    if ((*(char *)(iVar3 + 4) == '\x02') && (*(char *)(iVar3 + 1) == '\x01')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0x11) = bVar1 - 1;
      cVar2 = sub_0801C564(iVar6);
      sub_080033F0(param_1 + 0x6c,(&DAT_082b8690)[cVar2 * 2]);
      if ((int)cVar2 == (uint)*(byte *)(iVar6 + 0x19d)) {
        bVar1 = *(byte *)(param_1 + 0x41);
        bVar4 = 4;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x41);
        bVar4 = 8;
      }
      *(byte *)(param_1 + 0x41) = bVar1 & 0xf3 | bVar4;
      iVar6 = param_1;
      while (uVar5 = uVar5 - 1, uVar5 != 0) {
        iVar6 = sub_080B97F0(iVar3,iVar6);
      }
      sub_080B9324(param_1);
    }
    else {
      sub_080033F0(param_1 + 0x6c,(&DAT_082b8690)[(uint)*(byte *)(iVar6 + 0x19d) * 2]);
      *(undefined4 *)(param_1 + 0x4c) = 0x3400;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    uVar5 = uVar5 - *(byte *)(param_1 + 0x12);
    *(char *)(param_1 + 0x11) = (char)uVar5 + -1;
    cVar2 = sub_0801C564(iVar6,uVar5 & 0xff);
    sub_080033F0(param_1 + 0x6c,(&DAT_082b8690)[cVar2 * 2]);
    if ((int)cVar2 == (uint)*(byte *)(iVar6 + 0x19d)) {
      bVar1 = *(byte *)(param_1 + 0x41);
      bVar4 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x41);
      bVar4 = 8;
    }
    *(byte *)(param_1 + 0x41) = bVar1 & 0xf3 | bVar4;
    sub_080B9324(param_1);
  }
  return in_lr;
}


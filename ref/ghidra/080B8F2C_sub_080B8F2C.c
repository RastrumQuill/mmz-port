// sub_080B8F2C at 0x080B8F2C (thumb)

undefined4 sub_080B8F2C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar3 = sub_080B9B78();
  iVar9 = *(int *)(iVar3 + 0x10);
  bVar1 = sub_0801C4FC(iVar9);
  uVar4 = (uint)*(byte *)(param_1 + 0x10);
  if (*(byte *)(param_1 + 0x12) == 0) {
    if ((*(byte *)(iVar3 + 4) == uVar4) && (*(char *)(iVar3 + 1) == '\x01')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0x11) = bVar1 - 1;
      cVar2 = sub_0801C510(iVar9);
      sub_080033F0(param_1 + 0x6c,(&DAT_082b8688)[cVar2 * 2]);
      if ((int)cVar2 == (uint)*(byte *)(iVar9 + 0x18a + uVar4)) {
        bVar7 = *(byte *)(param_1 + 0x41);
        bVar6 = 4;
      }
      else {
        bVar7 = *(byte *)(param_1 + 0x41);
        bVar6 = 8;
      }
      *(byte *)(param_1 + 0x41) = bVar7 & 0xf3 | bVar6;
      iVar9 = bVar1 - 1;
      if (iVar9 != 0) {
        iVar5 = param_1;
        do {
          iVar5 = sub_080C8A9C(iVar3,iVar5,*(undefined4 *)(&DAT_082b8754 + uVar4 * 4));
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      sub_080B9088(param_1);
    }
    else {
      sub_080033F0(param_1 + 0x6c,(&DAT_082b8688)[(uint)*(byte *)(iVar9 + 0x18a + uVar4) * 2]);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(&DAT_082b86c4 + uVar4 * 8);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    uVar8 = (uint)bVar1 - (uint)*(byte *)(param_1 + 0x12);
    *(char *)(param_1 + 0x11) = (char)uVar8 + -1;
    cVar2 = sub_0801C510(iVar9,uVar8 & 0xff);
    sub_080033F0(param_1 + 0x6c,(&DAT_082b8688)[cVar2 * 2]);
    if ((int)cVar2 == (uint)*(byte *)(iVar9 + 0x18a + uVar4)) {
      bVar1 = *(byte *)(param_1 + 0x41);
      bVar7 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x41);
      bVar7 = 8;
    }
    *(byte *)(param_1 + 0x41) = bVar1 & 0xf3 | bVar7;
    sub_080B9088(param_1);
  }
  return in_lr;
}


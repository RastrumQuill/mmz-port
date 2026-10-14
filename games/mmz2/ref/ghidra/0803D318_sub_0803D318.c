// sub_0803D318 at 0x0803D318 (thumb)

undefined4 sub_0803D318(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  iVar6 = sub_0803D574(param_1,iVar9);
  if (iVar6 == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
    cVar2 = *(char *)(param_1 + 0x13);
    cVar3 = *(char *)(param_1 + 0x71);
    uVar7 = sub_0803D5D8(param_1,iVar9);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08339c54 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0xc) == '\x01') {
      uVar8 = *(undefined4 *)(iVar9 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar8;
      bVar4 = *(byte *)(iVar9 + 10) >> 4 & 1;
      if (bVar4 == 0) {
        bVar5 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar5;
      *(byte *)(param_1 + 0x4c) = bVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
      sub_080128D4(param_1);
      if (((uVar7 == bVar1) && (*(char *)(param_1 + 0x13) == cVar2)) &&
         (*(char *)(param_1 + 0x71) == cVar3)) {
        return in_lr;
      }
      sub_0803D650(param_1);
      return in_lr;
    }
  }
  sub_0803D428(param_1);
  return in_lr;
}


// sub_080D8218 at 0x080D8218 (thumb)

undefined4 sub_080D8218(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined4 in_lr;
  
  sub_080378B4(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,0);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b52c + (uint)*(byte *)(param_1 + 0xd) * 4));
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar6 = iVar3 - (iVar3 * 0xff >> 8);
    iVar4 = iVar3 * 6 >> 8;
    iVar4 = iVar6 * iVar6 + iVar4 * iVar4;
    if ((iVar4 == 0) || (0xfffff < iVar4)) {
      bVar7 = *(char *)(param_1 + 0x12) + 1;
    }
    else {
      iVar6 = sub_080EF150(0x100000,iVar4);
      iVar4 = sub_080EF1E8(0x100000,iVar4);
      if (iVar4 != 0) {
        iVar6 = iVar6 + 1;
      }
      cVar1 = sub_080EEF7C(iVar6);
      bVar7 = cVar1 + *(char *)(param_1 + 0x12);
    }
    *(byte *)(param_1 + 0x12) = bVar7;
    iVar4 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = 1;
    }
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + ((short)(&DAT_080ef450)[bVar7] * iVar3 >> 8) * iVar4;
    iVar4 = 2;
    if (0x7f < (bVar7 + 0x40 & 0xff)) {
      iVar4 = 3;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | (byte)(iVar4 << 2);
    iVar4 = sub_080EF1E8(*(byte *)(param_1 + 0xb6) + 1,0x1c);
    *(byte *)(param_1 + 0xb6) = (byte)iVar4;
    uVar5 = sub_080EF150(iVar4 << 8,0x1c);
    iVar4 = 0xa00;
    if (iVar3 < 0x1300) {
      iVar4 = sub_080EF150((iVar3 + -0xc00) * 0xa00,0x700);
    }
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) - (iVar4 * (short)(&DAT_080ef450)[uVar5 & 0xff] >> 8);
  }
  if (*(char *)(param_1 + 0xc) == '\x02') {
    sub_080BEE58(param_1,2);
  }
  else {
    uVar2 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),2);
    *(undefined *)(param_1 + 0x13) = uVar2;
  }
  sub_08012A14(param_1);
  return in_lr;
}


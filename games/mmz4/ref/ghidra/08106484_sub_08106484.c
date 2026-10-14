// sub_08106484 at 0x08106484 (thumb)

undefined4 sub_08106484(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 4);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_08868e40 + (uint)*(byte *)(param_1 + 0x11) * 2));
    bVar1 = (&DAT_08868e4a)[*(byte *)(param_1 + 0x11)];
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    uVar6 = bVar1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    *(undefined *)(param_1 + 0x25) = 1;
    uVar5 = sub_080E8658(param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    iVar4 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar4 + 0x54) + *(int *)(&DAT_08868e50 + (uint)*(byte *)(param_1 + 0x11) * 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar4 + 0x58) + *(int *)(&DAT_08868e54 + (uint)*(byte *)(param_1 + 0x11) * 8);
    if ((*(byte *)(*(int *)(iVar4 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined4 *)(param_1 + 0x5c) =
         *(undefined4 *)(&DAT_08868e78 + (uint)*(byte *)(param_1 + 0x11) * 8);
    *(undefined4 *)(param_1 + 0x60) =
         *(undefined4 *)(&DAT_08868e7c + (uint)*(byte *)(param_1 + 0x11) * 8);
    break;
  case 2:
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * 3 >> 2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) * 3 >> 2;
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') {
      return in_lr;
    }
    break;
  case 3:
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) =
         *(int *)(param_1 + 0x5c) * 3 +
         *(int *)(&DAT_08868e78 + (uint)*(byte *)(param_1 + 0x11) * 8) >> 2;
    *(int *)(param_1 + 0x60) =
         *(int *)(param_1 + 0x60) * 3 +
         *(int *)(&DAT_08868e7c + (uint)*(byte *)(param_1 + 0x11) * 8) >> 2;
    uVar6 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (uVar6 < 0x4000) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x11) == '\x01') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    }
    break;
  case 4:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x78;
    break;
  case 5:
    sub_0801CFF0(param_1);
    uVar6 = (uint)*(byte *)(param_1 + 0x12);
    bVar1 = *(byte *)(param_1 + 0x11);
    iVar7 = uVar6 + (byte)(&DAT_08868ea0)[bVar1] + 0x99;
    uVar6 = FUN_081288bc(uVar6 * uVar6,0x3c);
    iVar8 = (uVar6 & 0xffff) *
            (int)*(short *)((int)&DAT_08128c10 + ((uint)((iVar7 + 0x40) * 0x1000000) >> 0x17));
    iVar7 = (uVar6 & 0xffff) *
            (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar7 * 0x1000000) >> 0x17));
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar4 + 0x54) + *(int *)(&DAT_08868ea8 + (uint)bVar1 * 8) + iVar8 + iVar7;
    *(int *)(param_1 + 0x58) =
         ((*(int *)(iVar4 + 0x58) + *(int *)(&DAT_08868eac + (uint)*(byte *)(param_1 + 0x11) * 8)) -
         iVar7 / 2) + iVar8 / 2;
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  default:
    goto switchD_081064a4_caseD_6;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_081064a4_caseD_6:
  return in_lr;
}


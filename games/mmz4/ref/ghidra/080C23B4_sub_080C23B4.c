// sub_080C23B4 at 0x080C23B4 (thumb)

undefined4 sub_080C23B4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(iVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    if (*(char *)(iVar2 + 0xbe) == '\0') {
      iVar3 = *(int *)(param_1 + 0xb4) + 0x80;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb4) + 0x100;
    }
    *(int *)(param_1 + 0xb4) = iVar3;
    iVar3 = *(int *)(iVar4 + 0x54);
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      iVar5 = -0xc00;
    }
    else {
      iVar5 = 0xc00;
    }
    iVar7 = *(int *)(iVar4 + 0x58) + -0x2000;
    iVar6 = *(int *)(iVar2 + 0xb8);
    iVar2 = *(int *)(iVar2 + 0xc0);
    iVar4 = FUN_081288bc(*(int *)(param_1 + 0xb4) * iVar2,0x1000);
    if (iVar4 <= iVar6 - iVar7) {
      iVar2 = FUN_081288bc(iVar4 << 0xd,iVar2);
      *(uint *)(param_1 + 0x54) = iVar2 * ((bVar1 >> 4 & 1) * 2 + -1) + iVar3 + iVar5;
      *(int *)(param_1 + 0x58) = iVar7 + iVar4;
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  sub_080C24AC(param_1);
  return in_lr;
}


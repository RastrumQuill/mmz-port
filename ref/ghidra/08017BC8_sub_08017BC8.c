// sub_08017BC8 at 0x08017BC8 (thumb)

undefined8 sub_08017BC8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 in_lr;
  
  bVar6 = *(byte *)(param_1 + 0xc3);
  uVar1 = (uint)bVar6;
  *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xbe) = 3;
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 1;
  *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc0);
  *(byte *)(param_1 + 0xc0) = bVar6;
  bVar6 = *(byte *)(param_1 + 0x121);
  uVar7 = (uint)bVar6;
  iVar4 = (int)*(char *)(param_1 + 0x71);
  uVar5 = (uint)(char)*(byte *)(param_1 + 0x72);
  if (1 < uVar1) {
    if ((*(char *)(param_1 + 0xbc) == '\0') && (*(char *)(param_1 + 0xbd) == '\x01')) {
      iVar4 = (byte)(&DAT_082a8160)[uVar1] - 1;
      uVar5 = uVar7;
      if (*(byte *)(*(int *)(&DAT_082a8150 + uVar1 * 4) + iVar4) < uVar7) {
        do {
          uVar7 = uVar7 - *(byte *)(*(int *)(&DAT_082a8150 + uVar1 * 4) + iVar4);
          iVar4 = iVar4 + -1;
          uVar5 = uVar7;
        } while (*(byte *)(*(int *)(&DAT_082a8150 + uVar1 * 4) + iVar4) < uVar7);
      }
    }
    else {
      uVar7 = iVar4 + 1;
      bVar6 = *(byte *)(param_1 + 0x72);
      if (uVar7 < (byte)(&DAT_082a8160)[uVar1]) {
        uVar3 = uVar5;
        do {
          uVar3 = *(byte *)(*(int *)(&DAT_082a8150 + uVar1 * 4) + uVar7) + uVar3;
          bVar6 = (byte)uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (byte)(&DAT_082a8160)[uVar1]);
      }
    }
  }
  uVar3 = (uint)*(byte *)(param_1 + 0xd);
  uVar7 = uVar3 + 2;
  if (uVar3 == 0) {
    uVar7 = (uint)*(byte *)(param_1 + 0xe);
  }
  iVar2 = ((byte)(&DAT_082a8140)[uVar7] - 1) + uVar1;
  if ((uVar3 == 0) && (*(byte *)(param_1 + 0xe) == 1)) {
    *(byte *)(param_1 + 0x121) = bVar6;
    if ((*(char *)(param_1 + 0xbc) != '\0') || (*(char *)(param_1 + 0xbd) != '\0')) {
      sub_08018C20(param_1,iVar2,0,1);
      goto LAB_08017d08;
    }
  }
  else if (1 < uVar1) {
    sub_08018C20(param_1,iVar2,iVar4,uVar5);
    goto LAB_08017d08;
  }
  sub_08018BE8(param_1);
LAB_08017d08:
  return CONCAT44(in_lr,3);
}


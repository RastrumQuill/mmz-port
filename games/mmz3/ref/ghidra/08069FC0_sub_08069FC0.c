// sub_08069FC0 at 0x08069FC0 (thumb)

undefined4 sub_08069FC0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_0806a09e;
  }
  sub_08007390(param_1 + 0x74,&DAT_08362b38);
  sub_08017700(param_1,0xd06);
  iVar2 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (iVar2 < 1) {
    if (*(char *)(param_1 + 0x12) != '\0') goto LAB_0806a00c;
LAB_0806a018:
    iVar3 = *(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1800);
    *(int *)(param_1 + 0x60) = iVar3;
    iVar2 = *(int *)(param_1 + 0x5c) >> 8;
    iVar3 = iVar3 >> 8;
    iVar2 = sub_080FE124(iVar2 * iVar2 + iVar3 * iVar3);
    uVar4 = (uint)(iVar2 << 0x10) >> 8;
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x280;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar4);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar4);
      *(int *)(param_1 + 0x60) = iVar3;
      iVar2 = iVar2 * 0x280;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar2 >> 8;
      iVar3 = iVar3 * 0x280;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar3 >> 8;
    }
  }
  else {
    if (*(char *)(param_1 + 0x12) == '\x01') goto LAB_0806a018;
LAB_0806a00c:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x280;
  }
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806a09e:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  sVar1 = sub_08009AC0();
  if (((sVar1 != 0) || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) ||
     (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 3;
  }
  sub_080177F4(param_1);
  return in_lr;
}


// sub_0809546C at 0x0809546C (thumb)

undefined4 sub_0809546C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08366814);
    sub_08017700(param_1,0xd406);
    sub_080177F4(param_1);
    iVar2 = DAT_0202f5c0;
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar2 = (*(int *)(param_1 + 0x58) + -0x1800) - *(int *)(iVar2 + 0x58);
    *(int *)(param_1 + 0x60) = iVar2;
    iVar4 = iVar4 >> 8;
    iVar2 = iVar2 >> 8;
    iVar2 = sub_080FE124(iVar4 * iVar4 + iVar2 * iVar2);
    uVar3 = (uint)(iVar2 << 0x10) >> 8;
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar2 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar3);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar3);
      *(int *)(param_1 + 0x5c) = iVar2 * 6;
      *(int *)(param_1 + 0x60) = iVar4 * 6;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  cVar1 = sub_08094B14(param_1,*(undefined4 *)(param_1 + 0x5c));
  if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
    if (iVar2 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
      sub_08095670(param_1);
    }
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), 0x6000 < uVar3)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    sub_08095670(param_1);
  }
  return in_lr;
}


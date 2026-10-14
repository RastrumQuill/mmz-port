// sub_080BECA4 at 0x080BECA4 (thumb)

/* WARNING: Removing unreachable block (ram,0x080bed8e) */

undefined4 sub_080BECA4(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (*(int *)(param_1 + 0x58) - iVar3 < 1) {
      iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54));
      iVar3 = iVar3 - *(int *)(param_1 + 0x58);
    }
    else {
      iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54));
      iVar3 = *(int *)(param_1 + 0x58) - iVar3;
    }
    iVar4 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar6 = *(int *)(param_1 + 0x54);
    if (iVar6 - iVar4 < 1) {
      iVar4 = sub_08008868(iVar6,*(undefined4 *)(param_1 + 0x58));
      iVar4 = iVar4 - *(int *)(param_1 + 0x54);
    }
    else {
      iVar4 = sub_08008868(iVar6,*(undefined4 *)(param_1 + 0x58));
      iVar4 = *(int *)(param_1 + 0x54) - iVar4;
    }
    iVar6 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar7 = *(int *)(param_1 + 0x54);
    if (iVar7 - iVar6 < 1) {
      iVar6 = sub_08008988(iVar7,*(undefined4 *)(param_1 + 0x58));
      iVar6 = iVar6 - *(int *)(param_1 + 0x54);
    }
    else {
      iVar6 = sub_08008988(iVar7,*(undefined4 *)(param_1 + 0x58));
      iVar6 = *(int *)(param_1 + 0x54) - iVar6;
    }
    uVar5 = 0;
    if (iVar6 < iVar3) {
      uVar5 = 3;
      iVar3 = iVar6;
    }
    if (iVar4 < iVar3) {
      uVar5 = 2;
    }
    *(undefined *)(param_1 + 0xb4) = uVar5;
    sub_0801CF00(param_1,0x2508);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar5 = 0x20;
    if (*(char *)(param_1 + 0x11) != '\0') {
      uVar5 = 0x40;
    }
    *(undefined *)(param_1 + 0x12) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x12) < 0x10) {
    if (*(byte *)(param_1 + 0x12) == 0xf) {
      sub_0801CDBC(param_1);
      sub_0801CF00(param_1,0x250d);
    }
    uVar1 = (undefined2)((int)((uint)*(byte *)(param_1 + 0x12) * 0x100) >> 4);
    *(undefined2 *)(param_1 + 0x50) = uVar1;
    *(undefined2 *)(param_1 + 0x52) = uVar1;
    sub_08005784(param_1 + 0x74,&DAT_08861948 + (3 - (uint)(*(byte *)(param_1 + 0x12) >> 2)) * 0x18)
    ;
  }
  sub_0801CFF0(param_1);
  sub_080BEF08(param_1);
  sub_080BF0B0(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080BEBDC(param_1);
  }
  return in_lr;
}


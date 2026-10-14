// sub_08049734 at 0x08049734 (thumb)

undefined4 sub_08049734(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835f0c4);
    iVar6 = ((uint)*(byte *)(param_1 + 0xbc) * 0x20 + 0x10) * 0x100;
    iVar7 = *(int *)(param_1 + 0xb4);
    if (*(int *)(param_1 + 0x54) < iVar7) {
      iVar6 = -(iVar6 + -0x7800);
    }
    else {
      iVar6 = iVar6 + -0x7800;
    }
    iVar3 = sub_080FE124(0x618);
    uVar4 = FUN_080fe2f8((iVar7 + iVar6) - *(int *)(param_1 + 0x54),(uint)(iVar3 << 0x10) >> 0xf);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    uVar5 = sub_080FE124(0x618);
    *(int *)(param_1 + 0x60) = (int)((uVar5 & 0xffff) * -0x54) / 2;
    sub_08017700(param_1,0xa70a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x60) + 0x2a;
    *(int *)(param_1 + 0x60) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (0 < *(int *)(param_1 + 0x60)) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_0835f10c);
    sub_08017700(param_1,0xa70b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x60) + 0x2a;
    *(int *)(param_1 + 0x60) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    if (*(int *)(param_1 + 0xb8) < iVar6) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080498f2:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 4:
    sub_08007390(param_1 + 0x74,&DAT_0835f07c);
    sub_08017700(param_1,0xa709);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if ((uint)(*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) < 0x4600)
      goto LAB_080498e0;
LAB_080498ec:
      uVar2 = 5;
    }
    else {
      if (0x45ff < (uint)(*(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54)))
      goto LAB_080498ec;
LAB_080498e0:
      uVar2 = 4;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    cVar1 = '\0';
    goto LAB_080498f2;
  default:
    break;
  }
  return in_lr;
}


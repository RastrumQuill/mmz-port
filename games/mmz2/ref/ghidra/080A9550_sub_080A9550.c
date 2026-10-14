// sub_080A9550 at 0x080A9550 (thumb)

undefined4 sub_080A9550(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(param_1 + 0xd) < 4) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + -0x1800;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
    if (1 < *(byte *)(iVar3 + 0xc)) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x400100) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A96D8(param_1);
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
    goto LAB_080a9618;
  case 1:
    sub_080127E4(param_1,0x7a02);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080a9618:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 3:
    sub_080127E4(param_1,0x7a03);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08345468,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x200;
    break;
  default:
    break;
  }
  sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
  if ((((sVar2 != -0x7ff1) && (sVar2 != 0)) &&
      (sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
      sVar2 != -0x7ff1)) &&
     (((sVar2 != 0 &&
       (sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       sVar2 != -0x7ff1)) && (sVar2 != 0)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A96D8(param_1);
  }
  return in_lr;
}


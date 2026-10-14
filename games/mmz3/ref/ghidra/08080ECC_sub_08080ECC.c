// sub_08080ECC at 0x08080ECC (thumb)

undefined4 sub_08080ECC(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_08017700(param_1,0x5100);
    iVar3 = *(int *)(param_1 + 0x54) >> 8;
    *(int *)(param_1 + 0x54) = iVar3;
    iVar3 = FUN_080fe2f8(iVar3,0xf0);
    *(int *)(param_1 + 0x54) = iVar3 * 0xf000 + 0xb600;
    iVar3 = *(int *)(param_1 + 0x58) >> 8;
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = FUN_080fe2f8(iVar3,0xa0);
    iVar3 = iVar3 * 0xa000 + 0x3800;
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x68) = iVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 4;
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(iVar4 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 2:
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + -0x5400;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x3000;
    *(undefined *)(param_1 + 0x12) = 100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar5 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar5;
    iVar3 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58);
    iVar4 = (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 3;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 4);
    uVar1 = iVar5 * 0x1000000;
    break;
  case 4:
    puVar2 = (uint *)(iVar4 + 0xb4);
    *puVar2 = *puVar2 | 1;
    *(undefined *)(param_1 + 0x12) = 0xa0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar1 & 0x7fffffff;
      iVar4 = sub_080FE4D8(uVar1 * 2 >> 0x11,0x1400);
      sub_080BFD28(*(int *)(param_1 + 0x54) + iVar4 + -0xa00,*(undefined4 *)(param_1 + 0x58));
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x12);
    break;
  case 6:
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    iVar4 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar4;
    uVar1 = iVar4 * 0x1000000;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x200;
    iVar4 = *(int *)(param_1 + 0x60) + 4;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    sub_080177F4(param_1);
    uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x4000 < uVar1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  default:
    goto switchD_08080ee2_caseD_a;
  }
  if (uVar1 == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
switchD_08080ee2_caseD_a:
  return in_lr;
}


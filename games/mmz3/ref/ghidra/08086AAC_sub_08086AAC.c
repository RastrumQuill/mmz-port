// sub_08086AAC at 0x08086AAC (thumb)

undefined4 sub_08086AAC(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x6a03);
    iVar2 = DAT_0202f5c0;
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar2 = (*(int *)(param_1 + 0x58) - *(int *)(iVar2 + 0x58)) + -0x1800;
    *(int *)(param_1 + 0x60) = iVar2;
    iVar4 = iVar4 >> 8;
    iVar2 = iVar2 >> 8;
    sVar1 = sub_080FE124(iVar4 * iVar4 + iVar2 * iVar2);
    if (sVar1 == 0) {
      if ((*(byte *)(DAT_0202f5c0 + 10) & 0x10) == 0) {
        uVar3 = 0xfffffa00;
      }
      else {
        uVar3 = 0x600;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar2 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x5c),sVar1);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar4 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x60),sVar1);
      *(int *)(param_1 + 0x5c) = iVar2 * 6;
      *(int *)(param_1 + 0x60) = iVar4 * 6;
    }
    if (*(int *)(param_1 + 0x5c) < 1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    *(undefined *)(param_1 + 0xbd) = 1;
    sub_08007390(param_1 + 0x74,&DAT_08364e10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if ((((*(uint *)(param_1 + 0x8c) & 4) != 0) ||
      (sVar1 = sub_08009A3C(iVar4 + *(int *)(param_1 + 0x5c),iVar2), sVar1 != 0)) ||
     (sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                           *(int *)(param_1 + 0x58) + -0x1000), sVar1 != 0)) {
    *(undefined2 *)(param_1 + 0xc0) = 0;
  }
  return in_lr;
}


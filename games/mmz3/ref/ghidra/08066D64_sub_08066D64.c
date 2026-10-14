// sub_08066D64 at 0x08066D64 (thumb)

undefined4 sub_08066D64(int param_1,int *param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  cVar1 = *(char *)(iVar5 + 4);
  if ((((cVar1 == '\x03') || (cVar1 == '\x0e')) || (cVar1 == '\x0f')) &&
     (iVar6 = *(int *)(param_1 + 0x2c), (*(uint *)(iVar6 + 0x8c) & 0x200) != 0)) {
    if (*(int *)(iVar6 + 0x54) < *param_2) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = 0xfe;
    }
    *(undefined *)(iVar6 + 0xbe) = uVar2;
  }
  if (((*(uint *)(iVar5 + 4) & 0x200ff) == 0x20002) &&
     (iVar5 = *(int *)(param_1 + 0x2c), *(char *)(iVar5 + 0xd) != '\b')) {
    if (((*(uint *)(iVar5 + 0x8c) & 0x200) != 0) && (iVar6 = sub_08063614(iVar5), iVar6 == 0)) {
      *(undefined2 *)(iVar5 + 0xa4) = 1;
    }
    iVar6 = DAT_0202f5c0;
    iVar3 = *(int *)(iVar5 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(iVar5 + 100) = iVar3;
    iVar6 = (*(int *)(iVar5 + 0x58) + 0x1000) - *(int *)(iVar6 + 0x58);
    *(int *)(iVar5 + 0x68) = iVar6;
    iVar3 = iVar3 >> 2;
    iVar6 = iVar6 >> 2;
    iVar6 = sub_080FE124(iVar3 * iVar3 + iVar6 * iVar6);
    uVar7 = (uint)(iVar6 << 0x10) >> 0xe;
    if (uVar7 == 0) {
      if (*(int *)(iVar5 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
        uVar4 = 0xffffff00;
      }
      else {
        uVar4 = 0x100;
      }
      *(undefined4 *)(iVar5 + 100) = uVar4;
      *(undefined4 *)(iVar5 + 0x68) = 0;
    }
    else {
      uVar4 = FUN_080fe2f8(*(int *)(iVar5 + 100) << 8,uVar7);
      *(undefined4 *)(iVar5 + 100) = uVar4;
      uVar4 = FUN_080fe2f8(*(int *)(iVar5 + 0x68) << 8,uVar7);
      *(undefined4 *)(iVar5 + 0x68) = uVar4;
    }
    *(int *)(iVar5 + 0x5c) = *(int *)(iVar5 + 100) * 0x700 >> 8;
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x68) * 0x700 >> 8;
    *(undefined *)(iVar5 + 0xd) = 8;
    *(undefined *)(iVar5 + 0xe) = 0;
  }
  return in_lr;
}


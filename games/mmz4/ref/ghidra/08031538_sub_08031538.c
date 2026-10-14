// sub_08031538 at 0x08031538 (thumb)

undefined4 sub_08031538(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x501) &&
      (*(char *)(param_1 + 0x71) == '\0')) && ((*(uint *)(param_1 + 600) & 8) != 0)) {
    sub_0801CFC8(param_1,0x601,1,4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      sVar3 = sub_0803879C(param_1);
      iVar5 = (int)sVar3;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      sVar3 = sub_0803879C(param_1);
      iVar5 = -(int)sVar3;
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    if (*(int *)(param_1 + 0x108) == 0) {
      uVar4 = sub_080D229C(param_1);
      *(undefined4 *)(param_1 + 0x108) = uVar4;
    }
  }
  cVar1 = *(char *)(param_1 + 0x13b);
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10);
    if ((*(uint *)(param_1 + 600) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 600) & 0x10) == 0) {
        sVar3 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x5c);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        sVar3 = (short)iVar5;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x5c);
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      sVar3 = -(short)iVar5;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    if (*(int *)(param_1 + 0x108) == 0) {
      if ((bVar2 >> 4 & 1) != (*(byte *)(param_1 + 10) >> 4 & 1)) {
        sub_0801CF00(param_1,0x502);
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
    else if ((int)sVar3 != *(int *)(param_1 + 0x5c)) {
      sub_0801CF00(param_1,0x602);
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x13b) = cVar1 + -1;
    sVar3 = (short)*(undefined4 *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)sVar3;
  pbVar6 = (byte *)(param_1 + 0x174);
  sVar3 = sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar6 * 8,0);
  if (sVar3 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  sVar3 = sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar6 * 8,1);
  if (sVar3 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar3 = sub_08038528(param_1);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar3;
  sVar3 = sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*pbVar6 * 8,0);
  if (sVar3 == 0) {
    sVar3 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar6 * 8,1);
  }
  if ((0 < *(int *)(param_1 + 0x60)) || (sVar3 != 0)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


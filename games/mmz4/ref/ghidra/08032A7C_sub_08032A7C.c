// sub_08032A7C at 0x08032A7C (thumb)

undefined4 sub_08032A7C(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  bVar1 = sub_080396B4();
  if (bVar1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x95);
    if (bVar2 != 0xff) {
      if (bVar2 < bVar1) {
        bVar2 = 0;
      }
      else {
        bVar2 = bVar2 - bVar1;
      }
      *(byte *)(param_1 + 0x95) = bVar2;
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x4b00) {
        sub_0801CFC8(param_1,0x4a00,3,4);
      }
      else {
        sub_0801CFC8(param_1,0x4b00,3,4);
      }
    }
  }
  if (*(char *)(param_1 + 0x171) != '\0') {
    if (*(char *)(param_1 + 0x172) == '\0') {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x4b00) {
        sub_0801CFC8(param_1,0x4b00,3,4);
      }
    }
    else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x4a00) {
      sub_0801CFC8(param_1,0x4a00,3,4);
    }
    *(char *)(param_1 + 0x171) = '\0';
  }
  if ((*(char *)(param_1 + 0x95) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x400) == 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08030E38(param_1);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54);
    pbVar5 = (byte *)(param_1 + 0x174);
    sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,0);
    sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,1);
    if (iVar4 != *(int *)(param_1 + 0x54)) {
      sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,0);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    bVar1 = *(byte *)(param_1 + 0x142);
    if ((((bVar1 & 0x10) == 0) &&
        (sVar3 = sub_0802BAD8(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,1), sVar3 != 0)) &&
       (sVar3 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar5 * 8,0), sVar3 != 0)) {
      *(undefined *)(param_1 + 0xe) = 1;
      *(byte *)(param_1 + 0xf) = bVar1 & 0x10;
    }
    else {
      sVar3 = sub_08038528(param_1);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar3;
      sVar3 = sub_080385E8(param_1);
      if ((int)sVar3 < *(int *)(param_1 + 0x60)) {
        sVar3 = sub_080385E8(param_1);
        *(int *)(param_1 + 0x60) = (int)sVar3;
      }
    }
  }
  return in_lr;
}


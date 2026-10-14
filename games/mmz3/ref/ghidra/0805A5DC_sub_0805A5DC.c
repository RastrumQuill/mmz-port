// sub_0805A5DC at 0x0805A5DC (thumb)

undefined4 sub_0805A5DC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb403);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x6403;
    *(undefined *)(param_1 + 0xe) = 0;
    iVar8 = *(int *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 0xdc) - iVar8;
    if (iVar6 < 0x7801) {
      iVar7 = *(int *)(DAT_0202f5c0 + 0x54) - iVar8;
      if (iVar7 < 0x5001) {
        if ((iVar6 < 0xa001) &&
           (uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar5 & 0x7fffffff,
           (uVar5 * 2 >> 0x11 & 1) != 0)) {
          uVar4 = FUN_080fe2f8(iVar7,0x1a);
          *(undefined4 *)(param_1 + 0x5c) = uVar4;
          *(undefined *)(param_1 + 0x13) = 2;
        }
        else {
          uVar4 = FUN_080fe2f8(iVar8 - *(int *)(DAT_0202f5c0 + 0x54),0x1a);
          *(undefined4 *)(param_1 + 0x5c) = uVar4;
          *(undefined *)(param_1 + 0x13) = 1;
        }
      }
      else {
        uVar4 = FUN_080fe2f8(iVar7,0x34);
        *(undefined4 *)(param_1 + 0x5c) = uVar4;
        *(undefined *)(param_1 + 0x13) = 0;
      }
    }
    else {
      uVar4 = FUN_080fe2f8(*(int *)(DAT_0202f5c0 + 0x54) - iVar8,0x1a);
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      *(undefined *)(param_1 + 0x13) = 2;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffff640;
    *(undefined *)(param_1 + 0x12) = 0x10;
    iVar6 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x60) + 0x60;
  *(int *)(param_1 + 0x60) = iVar6;
  if (0x700 < iVar6) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


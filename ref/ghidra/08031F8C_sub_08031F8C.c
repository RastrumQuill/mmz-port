// sub_08031F8C at 0x08031F8C (thumb)

undefined4 sub_08031F8C(int param_1)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    iVar7 = (int)*(short *)(param_1 + 0x8c);
    if (iVar7 < (int)(uint)(*(byte *)(param_1 + 0xd8) >> 1)) {
      uVar2 = 0x18;
    }
    else {
      uVar6 = (uint)(*(byte *)(param_1 + 0xd8) >> 2);
      if ((int)(iVar7 + uVar6 * -3) < 0 == SBORROW4(iVar7,uVar6 * 3)) {
        uVar2 = 0x28;
      }
      else {
        uVar2 = 0x20;
      }
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  sub_080297C0(param_1);
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    iVar7 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (*(int *)(param_1 + 0x50) + 0x800 < iVar7) {
      *(undefined *)(param_1 + 0xd) = 0xb;
      sub_0803243C(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      uVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = uVar5;
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


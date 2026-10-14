// sub_080B0BEC at 0x080B0BEC (thumb)

undefined4 sub_080B0BEC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0xc);
  if ((bVar1 < 2) && (bVar1 != 4)) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_08369c54,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
    sub_08007390(param_1 + 0x74,&DAT_08369c54 + (0x10 - (*(int *)(iVar3 + 0xbc) >> 9)) * 0x18);
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xe) < 10) {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}


// sub_080C72BC at 0x080C72BC (thumb)

undefined4 sub_080C72BC(int param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (((uVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       uVar2 != 0 && ((uVar2 & 0x8000) == 0)) && (0 < *(int *)(param_1 + 0x60))))) {
    uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar3 < 0x2001) {
      sub_080B2484(2,param_1 + 0x54);
      sub_0800471C(0x2a);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      iVar4 = sub_080FE4D8(*(undefined2 *)(param_1 + 0x74),3);
      piVar5 = (int *)(*(int *)(param_1 + 0x78) * 8 +
                      *(int *)(&DAT_0836c0e8 + ((uint)(iVar4 << 0x10) >> 0xe)));
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      *(uint *)(param_1 + 0x60) = piVar5[1] + (uVar3 * 2 >> 0x11 & 0x1f);
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      *(uint *)(param_1 + 0x5c) = *piVar5 - (uVar3 * 2 >> 0x11 & 0x3f);
      sub_08017700(param_1,*(undefined2 *)(param_1 + 0x74));
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    iVar4 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_080177F4(param_1);
  }
  return in_lr;
}


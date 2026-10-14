// sub_080BEA10 at 0x080BEA10 (thumb)

undefined4 sub_080BEA10(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (((uVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       uVar3 != 0 && ((uVar3 & 0x8000) == 0)) && (0 < *(int *)(param_1 + 0x60))))) {
    sub_080B2484(2,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      iVar4 = sub_080FE4D8(*(undefined2 *)(param_1 + 0x74),5);
      piVar6 = (int *)(*(int *)(param_1 + 0x78) * 8 +
                      *(int *)(&DAT_0836b894 + ((uint)(iVar4 << 0x10) >> 0xe)));
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      *(uint *)(param_1 + 0x60) = piVar6[1] - (uVar5 * 2 >> 0x11 & 0xff);
      uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      *(uint *)(param_1 + 0x5c) = *piVar6 + -0x180 + (uVar5 * 0x80 >> 0x17);
      sub_08017700(param_1,*(undefined2 *)(param_1 + 0x74));
      *(undefined *)(param_1 + 0x12) = 0x5a;
      *(undefined *)(param_1 + 0x13) = 0;
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      *(uint *)(param_1 + 100) = (uVar5 * 2 >> 0x11 & 7) + 0x1e;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    if (*(int *)(param_1 + 100) < (int)(uint)*(byte *)(param_1 + 0x13)) {
      if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    iVar4 = *(int *)(param_1 + 0x60) + 0x20;
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


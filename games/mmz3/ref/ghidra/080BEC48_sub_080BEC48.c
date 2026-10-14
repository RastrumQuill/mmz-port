// sub_080BEC48 at 0x080BEC48 (thumb)

undefined4 sub_080BEC48(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
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
      iVar5 = sub_080FE4D8(*(undefined2 *)(param_1 + 0x74),5);
      piVar7 = (int *)(*(int *)(param_1 + 0x78) * 8 +
                      *(int *)(&DAT_0836b894 + ((uint)(iVar5 << 0x10) >> 0xe)));
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar8 = uVar4 & 0x7fffffff;
      DAT_0202f608 = uVar8;
      iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,0xc0);
      iVar5 = piVar7[1] - iVar5;
      *(int *)(param_1 + 0x60) = iVar5;
      iVar6 = *piVar7;
      uVar4 = uVar8 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      *(int *)(param_1 + 0x60) = iVar5 * 0xc0 >> 8;
      *(int *)(param_1 + 0x5c) = (int)((iVar6 + -0x80 + (uVar4 * 2 >> 0x11 & 0xff)) * 0xc0) >> 8;
      sub_08017700(param_1,*(undefined2 *)(param_1 + 0x74));
      *(undefined *)(param_1 + 0x12) = 0x5a;
      *(undefined *)(param_1 + 0x13) = 0;
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      *(uint *)(param_1 + 100) = (uVar4 * 2 >> 0x11 & 7) + 0x1e;
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
    iVar5 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_080177F4(param_1);
  }
  return in_lr;
}


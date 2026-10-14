// sub_080C4578 at 0x080C4578 (thumb)

undefined4 sub_080C4578(int param_1)

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
      iVar4 = sub_080FE4D8(*(undefined2 *)(param_1 + 0x74),3);
      piVar6 = (int *)(*(int *)(param_1 + 0x78) * 8 +
                      *(int *)(&DAT_0836be78 + ((uint)(iVar4 << 0x10) >> 0xe)));
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      *(uint *)(param_1 + 0x60) = piVar6[1] + (uVar5 * 2 >> 0x11 & 0x1f);
      uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      *(uint *)(param_1 + 0x5c) = *piVar6 - (uVar5 * 2 >> 0x11 & 0x3f);
      sub_08017700(param_1,*(undefined2 *)(param_1 + 0x74));
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    bVar2 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
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


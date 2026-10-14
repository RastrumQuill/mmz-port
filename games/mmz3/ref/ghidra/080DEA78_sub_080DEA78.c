// sub_080DEA78 at 0x080DEA78 (thumb)

undefined4 sub_080DEA78(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x1000 < uVar3) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801749C(param_1);
    sub_08017700(param_1,*(int *)(param_1 + 100) +
                         (uint)(byte)(&DAT_0202f4a8)
                                     [(*(byte *)(param_1 + 0x11) & 3) +
                                      ((*(byte *)(param_1 + 0x11) >> 2) + 4) * 4] * 2 & 0xffff);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836dfcc,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if ((((*(uint *)(param_1 + 0x8c) & 4) == 0) &&
      (iVar2 = sub_08009B28(*(int *)(param_1 + 0x54) + -0x400,*(undefined4 *)(param_1 + 0x58)),
      iVar2 == 0)) &&
     ((*(char *)(param_1 + 0x11) == '\x04' ||
      (iVar2 = sub_08009B28(*(int *)(param_1 + 0x54) + 0x400,*(undefined4 *)(param_1 + 0x58)),
      iVar2 == 0)))) {
    iVar2 = (*(byte *)(param_1 + 0x11) & 3) + ((*(byte *)(param_1 + 0x11) >> 2) + 4) * 4;
    uVar1 = 0;
  }
  else {
    iVar2 = (*(byte *)(param_1 + 0x11) & 3) + ((*(byte *)(param_1 + 0x11) >> 2) + 4) * 4;
    uVar1 = 1;
  }
  (&DAT_0202f4a8)[iVar2] = uVar1;
  if ((&DAT_0202f4a8)[(*(byte *)(param_1 + 0x11) & 3) + ((*(byte *)(param_1 + 0x11) >> 2) + 4) * 4]
      == '\0') {
    uVar3 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    if ((uVar3 != *(uint *)(param_1 + 100)) &&
       (uVar4 = *(uint *)(param_1 + 100) + 3, uVar3 != uVar4)) {
      sub_08017700(param_1,uVar4 & 0xffff);
    }
  }
  else {
    uVar4 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    uVar3 = *(int *)(param_1 + 100) + 1;
    if ((uVar4 != uVar3) && (uVar4 != *(int *)(param_1 + 100) + 2U)) {
      sub_08017700(param_1,uVar3 & 0xffff);
    }
  }
  uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x1000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}


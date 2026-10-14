// sub_0809A180 at 0x0809A180 (thumb)

undefined4 sub_0809A180(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x31) != '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08366e9c);
    return in_lr;
  }
  sub_08007390(param_1 + 0x74,&DAT_08366f14);
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x1e;
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        uVar6 = uVar4 & 0x7fffffff;
        DAT_0202f608 = uVar6;
        cVar2 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x1e);
        *(char *)(param_1 + 0x12) = cVar2 + '\x1e';
        uVar4 = uVar6 * 0x343fd + 0x269ec3;
        uVar6 = uVar4 & 0x7fffffff;
        if ((uVar4 * 2 >> 0x11 & 0x1f) == 0) {
          uVar6 = uVar6 * 0x343fd + 0x269ec3;
          iVar5 = (uVar6 * 2 >> 0x11 & 1) * 0x400 + -0x200;
        }
        else {
          uVar4 = uVar6 * 0x343fd + 0x269ec3;
          uVar6 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
          iVar5 = ((uVar6 * 2 >> 0x11 & 1) * -2 + 1) * (-0x80 - (uVar4 * 2 >> 0x11 & 0x7f));
        }
        DAT_0202f608 = uVar6 & 0x7fffffff;
        *(int *)(param_1 + 0x5c) = iVar5;
        bVar1 = 0 < *(int *)(param_1 + 0x5c);
        if (bVar1) {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        *(byte *)(param_1 + 10) = bVar3;
        *(bool *)(param_1 + 0x4c) = bVar1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
        sub_08017700(param_1,0xf101);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar3 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xe) = 0;
      }
      if (0x13000 < *(int *)(param_1 + 0x54) - 0xd000U) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xf100);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    cVar2 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x1e);
    *(char *)(param_1 + 0x12) = cVar2 + '\x1e';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}


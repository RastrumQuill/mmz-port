// sub_080C534C at 0x080C534C (thumb)

undefined4 sub_080C534C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar7 = bVar1 & 1;
  local_2c = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x18a);
    *(undefined *)(param_1 + 0xb8) = 1;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    iVar6 = -0x3600;
  }
  else {
    iVar6 = 0x3600;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + iVar6;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x400;
  cVar2 = sub_08128A9C(*(undefined *)(param_1 + 0x12),3);
  if (cVar2 == '\0') {
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_38 = (uVar4 * 0x80 >> 0x17) + 0x400;
    iVar6 = *(short *)((int)&DAT_08128c10 +
                      (((uint)(*(byte *)(param_1 + 0x12) >> 1) << 0x1d) >> 0x17)) * 0xc;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    iVar6 = (iVar6 >> 8) + (uVar4 * 2 >> 0x11 & 7) + 0x44;
    iVar6 = iVar6 + uVar7 * 2 * (0x140 - iVar6);
    local_3c = *(short *)((int)&DAT_08128c10 + (iVar6 * 0x1000000 + 0x40000000U >> 0x17)) * local_38
    ;
    if (local_3c < 0) {
      local_3c = local_3c + 0xff;
    }
    local_3c = local_3c >> 8;
    local_38 = *(short *)((int)&DAT_08128c10 + ((uint)(iVar6 * 0x1000000) >> 0x17)) * local_38;
    if (local_38 < 0) {
      local_38 = local_38 + 0xff;
    }
    local_38 = local_38 >> 8;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    iVar6 = sub_080C5068(param_1,param_1 + 0x54,&local_3c,uVar4 * 2 >> 0x11 & 1);
    if (iVar6 != 0) {
      *(short *)(param_1 + 0xb4) = *(short *)(param_1 + 0xb4) + 1;
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_08002B10(0x40);
    iVar6 = uVar7 * 2 + -1;
    local_28 = *(int *)(param_1 + 0x54) + iVar6 * -0x1000;
    local_24 = *(int *)(iVar3 + 0xb4);
    uVar7 = 0;
    iVar3 = local_2c * 4;
    do {
      local_34 = *(int *)(uVar7 * 8 + *(int *)(&DAT_088624fc + iVar3)) * iVar6 + local_28;
      local_30 = *(int *)(uVar7 * 8 + *(int *)(&DAT_088624fc + iVar3) + 4) + local_24;
      iVar5 = sub_080C50CC(param_1,&local_34,
                           (int)*(short *)(uVar7 * 2 + *(int *)(&DAT_0886253c + iVar3)),uVar7 & 0xff
                          );
      if (iVar5 == 0) break;
      *(short *)(param_1 + 0xb4) = *(short *)(param_1 + 0xb4) + 1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 6);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


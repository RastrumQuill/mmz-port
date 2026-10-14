// sub_0809C18C at 0x0809C18C (thumb)

undefined4 sub_0809C18C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_1 + 0x50);
  uVar5 = (uint)*(byte *)(param_1 + 0x12);
  if (uVar5 == 0) {
    iVar2 = sub_08008120(iVar6,iVar4);
  }
  else {
    iVar2 = sub_08007EE0(iVar6,iVar4);
  }
  if (iVar2 == 0) {
    uVar5 = uVar5 * 0x2000 - 0x1000;
    do {
      iVar6 = iVar6 + uVar5;
      if ((int)uVar5 < 1) {
        iVar2 = sub_08008120(iVar6,iVar4);
      }
      else {
        iVar2 = sub_08007EE0(iVar6,iVar4);
      }
    } while (iVar2 == 0);
    iVar6 = iVar6 + iVar2;
  }
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(int *)(param_1 + 0x4c) = iVar6 + (((int)((uVar3 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 0x100;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  *(int *)(param_1 + 0x50) = (((int)((uVar3 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 0x100 + iVar4;
  sub_08088120(param_1);
  *(bool *)(param_1 + 0x44) = 0 < (int)uVar5;
  if ((int)uVar5 < 1) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar5 & 0x7fffffff;
  uVar5 = uVar5 * 2 >> 0x11 & 1;
  *(char *)(param_1 + 0x45) = (char)uVar5;
  if (uVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b514c)[(uint)*(byte *)(param_1 + 0x10) * 2]);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0809C2F4(param_1);
  return in_lr;
}


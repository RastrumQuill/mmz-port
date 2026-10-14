// sub_0809CD24 at 0x0809CD24 (thumb)

undefined4 sub_0809CD24(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0801CF00(param_1,0xa919);
  }
  else {
    sub_0801CF00(param_1,0xa925);
  }
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | (byte)(uVar4 << 4);
  bVar1 = *(byte *)(iVar6 + 10) >> 5;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)uVar4;
  *pbVar5 = *pbVar5 & 0xdf | (byte)(uVar4 << 5);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar6 + 0x1c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    cVar3 = *(char *)(param_1 + 0x11);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
      uVar2 = 2;
      goto LAB_0809ce22;
    }
  }
  else {
    cVar3 = *(char *)(param_1 + 0x11);
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
      uVar2 = 2;
      goto LAB_0809ce22;
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x80;
  uVar2 = 0xfffffffe;
LAB_0809ce22:
  *(undefined4 *)(param_1 + 100) = uVar2;
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0x40;
    uVar2 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined *)(param_1 + 0x12) = 0;
  return in_lr;
}


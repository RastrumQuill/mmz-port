// sub_0806C064 at 0x0806C064 (thumb)

undefined4 sub_0806C064(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0x818);
    if ((*(byte *)(param_1 + 10) >> 4 & 1) == *(byte *)(param_1 + 0xbc)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x40;
      uVar3 = 0xfffffffc;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff40;
      uVar3 = 8;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x17;
    sub_080B1AB0(param_1 + 0x54,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1,
                 *(byte *)(param_1 + 0xbc));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  sVar2 = sub_08008CFC(iVar4,*(int *)(param_1 + 0x58) + 0x400);
  if (sVar2 == 0) {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    iVar4 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar4;
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x400);
    if (sVar2 != 0) {
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    local_24 = *(int *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + -0x1000;
    bVar6 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar6 = bVar6 | 0x10;
    }
    sub_080B0ACC(&local_24,&DAT_0833e460,0,bVar6);
    bVar6 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar6 = bVar6 | 0x10;
    }
    sub_080B0ACC(&local_24,&DAT_0833e4d0,0,bVar6);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_24 = *(int *)(param_1 + 0x54) + 0x800;
    }
    else {
      local_24 = *(int *)(param_1 + 0x54) + -0x800;
    }
    sub_080AC60C(1,&local_24);
    uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_24 = (local_24 + 0x1000) - (uVar5 * 2 >> 0x11 & 0x1fff);
    uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar5 & 0x7fffffff;
    local_20 = (local_20 + 0x1000) - (uVar5 * 2 >> 0x11 & 0x1fff);
    sub_080AC60C(2,&local_24);
    sub_080032EC(0x2a);
    sub_0801DD2C(4,param_1 + 0x54);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}


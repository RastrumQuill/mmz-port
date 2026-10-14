// sub_0806E470 at 0x0806E470 (thumb)

undefined4 sub_0806E470(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  sub_080128D4();
  bVar5 = *(byte *)(param_1 + 0xb4);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar5 = bVar5 | 0x10;
  }
  sub_080B0ACC(param_1 + 0x54,&DAT_0833e89c,0,bVar5);
  iVar6 = param_1 + 0x54;
  pbVar3 = (byte *)(param_1 + 0xb4);
  bVar5 = *pbVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar5 = bVar5 | 0x10;
  }
  sub_080B0ACC(iVar6,&DAT_0833e8b8,0,bVar5);
  bVar5 = *pbVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar5 = bVar5 | 0x10;
  }
  sub_080B0ACC(iVar6,&DAT_0833e8d4,0,bVar5);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  iVar2 = sub_080EF330(uVar1 * 2 >> 0x11,3);
  bVar5 = *pbVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar5 = bVar5 | 0x10;
  }
  sub_080B0ACC(iVar6,&UNK_0833e8f0 + iVar2 * 0x1c,0,bVar5);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  bVar5 = *pbVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar5 = bVar5 | 0x10;
  }
  sub_080B0ACC(iVar6,&UNK_0833e944 + (uVar1 * 2 >> 0x11 & 3) * 0x1c,0,bVar5);
  bVar5 = *pbVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar5 = bVar5 | 0x10;
  }
  sub_080B0ACC(iVar6,&DAT_0833e9b4,0,bVar5);
  bVar5 = *pbVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar5 = bVar5 | 0x10;
  }
  sub_080B0ACC(iVar6,&DAT_0833e9d0,0,bVar5);
  bVar5 = *pbVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar5 = bVar5 | 0x10;
  }
  sub_080B0ACC(iVar6,&DAT_0833e9ec,0,bVar5);
  local_20 = *(int *)(param_1 + 0x54);
  local_1c = *(int *)(param_1 + 0x58) + -0x2000;
  sub_080AC60C(1,&local_20);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  uVar4 = uVar1 & 0x7fffffff;
  if ((uVar1 * 2 >> 0x11 & 1) == 0) {
    uVar1 = uVar4 * 0x343fd + 0x269ec3;
    local_20 = *(int *)(param_1 + 0x54) + (uVar1 * 2 >> 0x11 & 0xf) * -0x100;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0xf) + 8) * -0x100;
    sub_080AC60C(2,&local_20);
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_20 = *(int *)(param_1 + 0x54) + (uVar1 * 2 >> 0x11 & 0xf) * 0x100;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0xf) + 0x18) * -0x100;
    sub_080AC60C(2,&local_20);
  }
  else {
    uVar1 = uVar4 * 0x343fd + 0x269ec3;
    local_20 = *(int *)(param_1 + 0x54) + (uVar1 * 2 >> 0x11 & 0xf) * 0x100;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0xf) + 8) * -0x100;
    sub_080AC60C(2,&local_20);
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_20 = *(int *)(param_1 + 0x54) + (uVar1 * 2 >> 0x11 & 0xf) * -0x100;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0xf) + 0x18) * -0x100;
    sub_080AC60C(2,&local_20);
  }
  sub_080032EC(0x2a);
  sub_0801DD2C(4,iVar6);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,iVar6);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}


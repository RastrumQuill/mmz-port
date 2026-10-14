// sub_0806F428 at 0x0806F428 (thumb)

undefined4 sub_0806F428(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  uVar5 = (uint)bVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08012580(param_1);
  if (uVar5 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  sub_080127E4(param_1,0x1800);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb4) = 0;
  uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xbf) = 0xff;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  *(uint *)(param_1 + 0x68) = (uVar5 * -2 + 1) * 0x400;
  *(bool *)(param_1 + 0xc0) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54) != uVar5;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xbe) = 2;
    local_20 = *(int *)(param_1 + 0x54) + (uVar5 * 2 + -1) * 0x2400;
    local_1c = *(undefined4 *)(param_1 + 0x58);
    iVar4 = sub_08070D3C(param_1,&local_20,0);
    *(int *)(param_1 + 0x2c) = iVar4;
    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0xbe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0833eb80,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8070c01;
  *(undefined4 *)(param_1 + 0x9c) = 0x8070cb9;
  sub_0806F594(param_1);
  return in_lr;
}


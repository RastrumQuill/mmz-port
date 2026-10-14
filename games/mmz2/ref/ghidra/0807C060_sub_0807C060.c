// sub_0807C060 at 0x0807C060 (thumb)

undefined4 sub_0807C060(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  uVar6 = DAT_0202ebbb & 1;
  if ((DAT_0202ebbb & 1) == 0) {
    uVar3 = DAT_0202ebbb & 0x20;
    if ((DAT_0202ebbb & 0x20) == 0) {
      iVar4 = sub_08065A24(param_1);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        sub_08012580(param_1);
        if (bVar1) {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(bool *)(param_1 + 0x4c) = bVar1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
        uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar5;
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
        *(undefined *)(param_1 + 0xbc) = 0;
        *(undefined *)(param_1 + 0xbd) = 4;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08006DE4(param_1 + 0x74,&DAT_083404a8,param_1 + 0x54,4);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0x807cdb9;
        sub_0807C1D0(param_1);
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar3;
      *(uint *)(param_1 + 0x90) = uVar3;
      *(char *)(param_1 + 0x94) = (char)uVar3;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar6;
      *(uint *)(param_1 + 0x90) = uVar6;
      *(char *)(param_1 + 0x94) = (char)uVar6;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}


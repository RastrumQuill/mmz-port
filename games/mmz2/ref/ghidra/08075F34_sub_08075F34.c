// sub_08075F34 at 0x08075F34 (thumb)

undefined4 sub_08075F34(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar2 = DAT_0202ebbd & 0x20;
  if ((DAT_0202ebbd & 0x20) == 0) {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(byte *)(param_1 + 0xd) = bVar2;
    *(byte *)(param_1 + 0xe) = bVar2;
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
    sub_080127E4(param_1,0x1400);
    sub_080128D4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833fa64,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8077239;
    *(undefined4 *)(param_1 + 0x9c) = 0x8077265;
    bVar2 = *(byte *)(param_1 + 0x10);
    if (bVar2 == 1) {
      uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar3 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0xbc) = uVar3;
        uVar3 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2000);
        *(undefined4 *)(param_1 + 0xc0) = uVar3;
        uVar3 = sub_0800958C(*(int *)(param_1 + 0x54) + 0x6000,*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 100) = uVar3;
        uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x68) = uVar3;
      }
    }
    else if (bVar2 == 2) {
      uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x68) = uVar3;
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      uVar3 = sub_0800958C(*(undefined4 *)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 100) = uVar3;
      uVar3 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x6000);
      *(undefined4 *)(param_1 + 0xbc) = uVar3;
      uVar3 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0xc0) = uVar3;
    }
    sub_080760F4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


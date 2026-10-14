// sub_0808BEB8 at 0x0808BEB8 (thumb)

undefined4 sub_0808BEB8(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08341ed8)[*(byte *)(param_1 + 0x10)];
  if ((byte)(*(char *)(param_1 + 0x10) - 2U) < 2) {
    bVar2 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar2 | 2;
    if (*(char *)(param_1 + 0x10) == '\x02') {
      *(byte *)(param_1 + 10) = bVar2 | 6;
      puVar5 = &DAT_08341de0;
    }
    else {
      *(byte *)(param_1 + 10) = bVar2 | 6;
      puVar5 = &DAT_08341e10;
    }
    sub_08006DE4(param_1 + 0x74,puVar5,param_1 + 0x54,0xc);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0x808c331;
  }
  else {
    iVar3 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar3 < -0x4000) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    sub_08006DE4(param_1 + 0x74,&DAT_08341cc0,param_1 + 0x54,0xc);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x808c331;
    *(undefined4 *)(param_1 + 0x9c) = 0x808c349;
    *(undefined *)(param_1 + 0xbc) = 0;
    iVar4 = sub_080093C4(*(int *)(param_1 + 0x54) + -0xa00,*(undefined4 *)(param_1 + 0x58));
    iVar3 = sub_080093C4(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58));
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    sub_080127E4(param_1,0x7501);
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
  bVar1 = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  sub_0808C06C(param_1);
  return in_lr;
}


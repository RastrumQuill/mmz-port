// sub_0806C338 at 0x0806C338 (thumb)

undefined4 sub_0806C338(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  local_20 = *(undefined4 *)(param_1 + 0x54);
  local_1c = *(int *)(param_1 + 0x58) + 0x800;
  uVar3 = sub_08099564(param_1,&local_20);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  sub_0806A1AC(param_1,param_1 + 0x54,1,0);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0xb03,0);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0833e53c,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  sub_0806C440(param_1);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return in_lr;
}


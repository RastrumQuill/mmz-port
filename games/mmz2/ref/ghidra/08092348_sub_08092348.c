// sub_08092348 at 0x08092348 (thumb)

undefined4 sub_08092348(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x8f00);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083427f8,param_1 + 0x54,0x100);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8092c05;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined *)(param_1 + 0x4d) = 1;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xdf | 0x20;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    bVar1 = *pbVar3 & 0xef | 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    bVar1 = *pbVar3 & 0xef;
  }
  *pbVar3 = bVar1;
  uVar2 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08092154(param_1);
  return in_lr;
}


// sub_0806D2F4 at 0x0806D2F4 (thumb)

undefined4 sub_0806D2F4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = sub_0809A618(param_1,param_1 + 0x54);
  *(int *)(param_1 + 0x2c) = iVar3;
  if (iVar3 == 0) {
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
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_080127E4(param_1,0xd00);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    uVar2 = 0x1000;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar2 = 0x800;
        goto LAB_0806d3ce;
      }
    }
    else if (bVar1 == 2) {
      uVar2 = 0x2000;
      goto LAB_0806d3ce;
    }
    uVar2 = 0;
  }
LAB_0806d3ce:
  *(undefined2 *)(param_1 + 0xbc) = uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0833e6c4,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x806db8d;
  *(undefined4 *)(param_1 + 0x9c) = 0x806dbb9;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  sub_0806D438(param_1);
  return in_lr;
}


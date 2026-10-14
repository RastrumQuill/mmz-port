// sub_08092DF0 at 0x08092DF0 (thumb)

undefined4 sub_08092DF0(int param_1)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  uVar4 = (uint)DAT_0202cac0;
  if ((DAT_0202cac0 & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 9;
    uVar2 = (undefined)(uVar4 & 0x10);
    *(undefined *)(param_1 + 0xe) = uVar2;
    *(undefined *)(param_1 + 0xf) = uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(uint *)(param_1 + 0x2c) = uVar4 & 0x10;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0xb9) = uVar2;
    *(undefined *)(param_1 + 0xba) = uVar2;
    sub_0801CC9C(param_1);
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_0801CF00(param_1,0x400b);
    sub_0801CFF0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885d058,param_1 + 0x54,10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8094449;
    sub_08092F14(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


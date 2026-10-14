// sub_0807A838 at 0x0807A838 (thumb)

undefined4 sub_0807A838(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined auStack_48 [8];
  short local_40 [4];
  short local_38 [4];
  short asStack_30 [4];
  short asStack_28 [4];
  
  sub_080C8D70(auStack_48,&DAT_080c9348,6);
  local_40[0] = 0x380;
  local_40[1] = 0x279;
  local_40[2] = 0;
  local_38[0] = 0;
  local_38[1] = 0x279;
  local_38[2] = 0x380;
  sub_080C8D70(asStack_30,&DAT_080c934e,6);
  sub_080C8D70(asStack_28,&DAT_080c9354,6);
  uVar2 = *(byte *)(param_1 + 0x10) & 0xfe;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = uVar2 | 1;
  }
  sub_08076600(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b1f7c,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  bVar1 = *(byte *)(param_1 + 0x10) >> 1;
  *(int *)(param_1 + 0x54) = (int)local_40[bVar1];
  *(int *)(param_1 + 0x58) = (int)local_38[bVar1];
  *(undefined *)(param_1 + 0x1f) = auStack_48[uVar2];
  *(undefined4 *)(param_1 + 0xc0) = 0x200;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)asStack_30[bVar1 >> 1];
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x10);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (int)asStack_30[bVar1 >> 1];
  }
  *(int *)(param_1 + 0x50) =
       *(int *)(param_1 + 0x50) - (int)*(short *)((int)asStack_28 + (bVar1 & 0xfe));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_0807A6E4(param_1);
  return in_lr;
}


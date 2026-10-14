// sub_08079D1C at 0x08079D1C (thumb)

undefined4 sub_08079D1C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  int local_44 [4];
  int local_34 [4];
  undefined auStack_24 [4];
  
  local_44[0] = 0;
  local_44[1] = 0x1000;
  local_44[2] = 0;
  local_44[3] = 0xffffef00;
  local_34[0] = -0xd00;
  local_34[1] = 0;
  local_34[2] = 0x1000;
  local_34[3] = 0x100;
  sub_080C8D70(auStack_24,&DAT_080c9344,4);
  sub_08076600(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&UNK_082b1e44 + (*(byte *)(param_1 + 0x10) & 1) * 0x1c,param_1 + 0x4c,
               1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(undefined *)(param_1 + 0x1f) = auStack_24[bVar1];
  *(undefined *)(param_1 + 0x12) = 0x40;
  iVar2 = *(int *)(param_1 + 0x4c) + local_44[bVar1];
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + local_34[bVar1];
  *(int *)(param_1 + 0xb8) = iVar2;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08079E54(param_1);
  return in_lr;
}


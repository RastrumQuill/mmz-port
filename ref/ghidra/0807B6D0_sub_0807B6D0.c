// sub_0807B6D0 at 0x0807B6D0 (thumb)

undefined4 sub_0807B6D0(int param_1)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  int local_74 [4];
  int local_64 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined local_24 [4];
  
  local_74[0] = 0x800;
  local_74[1] = 0x800;
  local_74[2] = 0x2000;
  local_74[3] = 0x2000;
  local_64[0] = 0x140;
  local_64[1] = 0x180;
  local_64[2] = 0x200;
  local_64[3] = 0x280;
  uStack_54 = 0xa0;
  uStack_50 = 0xc0;
  local_4c = 0x100;
  uStack_48 = 0x140;
  local_44[0] = 0xfffffa00;
  local_44[1] = 0xfffffb00;
  local_44[2] = 0xfffffc00;
  local_44[3] = 0xfffffd00;
  uStack_34 = 0xfffff400;
  uStack_30 = 0xfffff600;
  local_2c = 0xfffff800;
  uStack_28 = 0xfffffa00;
  iVar6 = *(int *)(param_1 + 0x20);
  sub_08076600(param_1,local_24);
  local_24[0] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0xf);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2070,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  bVar2 = *(byte *)(iVar6 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar5 = *(undefined4 *)(iVar6 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar6 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(iVar6 + 0x4c) - local_74[*(byte *)(param_1 + 0x11) & 3];
    iVar3 = -local_64[*(byte *)(param_1 + 0x11)];
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(iVar6 + 0x4c) + local_74[*(byte *)(param_1 + 0x11) & 3];
    iVar3 = local_64[*(byte *)(param_1 + 0x11)];
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(iVar6 + 0x50) + -0x3000;
  uVar5 = local_44[*(byte *)(param_1 + 0x11)];
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  uVar4 = sub_080C88E8((int)(short)*(undefined4 *)(param_1 + 0x54),(int)(short)uVar5);
  uVar1 = (undefined)((uVar4 & 0xffff) + 0x4000 >> 8);
  *(undefined *)(param_1 + 0x13) = uVar1;
  *(undefined *)(param_1 + 0x1f) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_0807B5C4(param_1);
  return in_lr;
}


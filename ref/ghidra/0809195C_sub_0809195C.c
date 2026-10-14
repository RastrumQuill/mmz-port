// sub_0809195C at 0x0809195C (thumb)

undefined4 sub_0809195C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  int local_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_4c[0] = 0x600;
  local_4c[1] = 0x700;
  local_4c[2] = 0xfffffd00;
  local_4c[3] = 0xffffff00;
  uStack_3c = 0x200;
  uStack_38 = 0x200;
  local_34[0] = 0x500;
  local_34[1] = 0xa00;
  local_34[2] = 0x500;
  local_34[3] = 0xb00;
  uStack_24 = 0xfffff500;
  uStack_20 = 0xfffffe00;
  iVar2 = *(int *)(param_1 + 0x20);
  sub_0800DEB4(param_1,iVar2);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b39c4)[*(byte *)(param_1 + 0x11)]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x4c) + local_4c[*(byte *)(param_1 + 0x11)];
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c) - local_4c[*(byte *)(param_1 + 0x11)];
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + local_34[*(byte *)(param_1 + 0x11)];
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) << 3;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809154C(param_1);
  return in_lr;
}


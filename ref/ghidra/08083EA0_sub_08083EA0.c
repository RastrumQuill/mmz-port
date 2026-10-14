// sub_08083EA0 at 0x08083EA0 (thumb)

undefined4 sub_08083EA0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  short asStack_28 [8];
  
  sub_080C8D70(asStack_28,&DAT_080c93d4,0x10);
  iVar2 = *(int *)(param_1 + 0x20);
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
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined2 *)(param_1 + 0xc4) = 0xffff;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x4c) + 0x500;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c) + -0x500;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2800;
  *(int *)(param_1 + 0x54) = (int)asStack_28[*(byte *)(param_1 + 0x11)];
  *(undefined4 *)(param_1 + 0x58) = 0xfffffa00;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2d24,param_1 + 0x4c,0x1000);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08083A38(param_1);
  return in_lr;
}


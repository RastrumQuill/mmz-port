// sub_08083D78 at 0x08083D78 (thumb)

undefined4 sub_08083D78(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined2 *)(param_1 + 0xc4) = 0xffff;
  uVar3 = *(undefined4 *)(iVar4 + 0xb8);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0xbc);
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = 0;
    uVar2 = 0xfff0;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = 0x380;
    uVar2 = 0xffe8;
  }
  *(undefined2 *)(param_1 + 0xc0) = uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2d24,param_1 + 0x4c,0x1000);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined *)(param_1 + 0x12) = 2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08083A38(param_1);
  return in_lr;
}


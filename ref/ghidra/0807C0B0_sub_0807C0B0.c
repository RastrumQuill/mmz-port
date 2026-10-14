// sub_0807C0B0 at 0x0807C0B0 (thumb)

undefined4 sub_0807C0B0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,8);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b210c,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
  *(int *)(param_1 + 0x50) = *(int *)(iVar4 + 0x50) + -0x1000;
  uVar3 = sub_08008360();
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(byte *)(param_1 + 0x11) < 0xc1) {
      if ((int)((uint)*(byte *)(param_1 + 0x11) * 0x1000000) < 0) goto LAB_0807c1a6;
      goto LAB_0807c1a2;
    }
    uVar2 = 0xc0;
  }
  else if (*(byte *)(param_1 + 0x11) < 0x81) {
    if (0x4f < *(byte *)(param_1 + 0x11)) goto LAB_0807c1a6;
    uVar2 = 0x50;
  }
  else {
LAB_0807c1a2:
    uVar2 = 0x80;
  }
  *(undefined *)(param_1 + 0x11) = uVar2;
LAB_0807c1a6:
  *(int *)(param_1 + 0x54) =
       (short)(&DAT_080c8e24)[(*(byte *)(param_1 + 0x11) + 0xc0 & 0xff) + 0x40] * 5;
  *(int *)(param_1 + 0x58) = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x11) + 0xc0 & 0xff] * 5;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_0807BEEC(param_1);
  return in_lr;
}


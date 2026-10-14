// sub_080869BC at 0x080869BC (thumb)

undefined4 sub_080869BC(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08076600();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,5);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2fd0,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x11);
  if ((*(ushort *)(param_1 + 0xc2) & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x4c) + -0x1900;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4c) + 0x1900;
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  iVar4 = *(int *)(param_1 + 0x50) + 0xc00;
  *(int *)(param_1 + 0x50) = iVar4;
  sVar1 = (&DAT_080c8e24)[(*(byte *)(param_1 + 0x11) + 0xc0 & 0xff) + 0x40];
  *(int *)(param_1 + 0x54) = (int)sVar1 << 2;
  sVar2 = (&DAT_080c8e24)[*(byte *)(param_1 + 0x11) + 0xc0 & 0xff];
  *(int *)(param_1 + 0x58) = (int)sVar2 << 2;
  iVar3 = *(int *)(param_1 + 0x4c) + sVar1 * 8;
  *(int *)(param_1 + 0x4c) = iVar3;
  *(int *)(param_1 + 0x50) = iVar4 + sVar2 * 8;
  *(int *)(param_1 + 0xb8) = iVar3;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_0808687C(param_1);
  sub_08001EAC(0xa5);
  return in_lr;
}


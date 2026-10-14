// sub_080875CC at 0x080875CC (thumb)

undefined4 sub_080875CC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  uVar1 = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08087400(param_1);
  return in_lr;
}


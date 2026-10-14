// sub_080CE2F8 at 0x080CE2F8 (thumb)

undefined4 sub_080CE2F8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x7e00);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x25) = (&DAT_0834994c)[*(byte *)(param_1 + 0x11)];
  iVar1 = *(int *)(iVar2 + 0x54) + *(int *)(&DAT_083498fc + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar2 = *(int *)(iVar2 + 0x58) + *(int *)(&DAT_08349924 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(int *)(param_1 + 0x58) = iVar2;
  sub_0800860C((iVar1 >> 0xc) + -1,(iVar2 >> 0xc) + -2,&DAT_08319af0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CE168(param_1);
  return in_lr;
}


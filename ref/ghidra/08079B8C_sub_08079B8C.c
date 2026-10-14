// sub_08079B8C at 0x08079B8C (thumb)

undefined4 sub_08079B8C(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x11) = 0;
  *(undefined *)(param_1 + 0x12) = 0x80;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  *(undefined *)(param_1 + 0x13) = uVar1;
  iVar2 = *(int *)(param_1 + 0x4c) + 0x800;
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x800;
  *(int *)(param_1 + 0xb8) = iVar2;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08079C40(param_1);
  return in_lr;
}


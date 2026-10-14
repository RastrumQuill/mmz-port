// sub_08081FD8 at 0x08081FD8 (thumb)

undefined4 sub_08081FD8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 8) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x2c),
     (*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x97) & 0xf0) == 0x20)) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    sub_0808184C(iVar1);
  }
  return in_lr;
}


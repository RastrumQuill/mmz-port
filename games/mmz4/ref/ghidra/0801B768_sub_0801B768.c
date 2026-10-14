// sub_0801B768 at 0x0801B768 (thumb)

void sub_0801B768(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(iVar1 + 0xc) = 2;
  *(undefined4 *)(iVar1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar1 + 9) * 4) + 8);
  DAT_02000a40 = 0;
  return;
}


// sub_08006920 at 0x08006920 (thumb)

void sub_08006920(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x70;
  (&DAT_02004ffc)[iVar1] = (char)param_1;
  (&DAT_02004ffd)[iVar1] = 0xff;
  (&DAT_02004fff)[iVar1] = 0;
  (&DAT_02004ffe)[iVar1] = 0;
  *(undefined2 *)(&DAT_02005002 + iVar1) = 0;
  *(undefined2 *)(&DAT_02005000 + iVar1) = 0;
  (&DAT_02005030)[param_1 * 0x1c] = 0x80000001;
  (&DAT_0200502c)[param_1 * 0x1c] = 0x80000001;
  *(undefined4 *)(&DAT_02005028 + iVar1) = 0x80000001;
  *(undefined4 *)(&DAT_02005024 + iVar1) = 0x80000001;
  (&DAT_02004ff0)[param_1 * 0x1c] = 0;
  (&DAT_02004ff4)[param_1 * 0x1c] = 0;
  (&DAT_02004ff8)[param_1 * 0x1c] = 0;
  return;
}


// sub_0800873C at 0x0800873C (thumb)

undefined4 sub_0800873C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  iVar1 = param_1 * 0x88;
  piVar2 = *(int **)(param_2 + 8);
  *(short *)(&DAT_0200102c + iVar1) = (short)param_1;
  (&DAT_0200102f)[iVar1] = 0;
  (&DAT_0200102e)[iVar1] = 0;
  *(undefined2 *)(&DAT_02001032 + iVar1) = 0;
  *(undefined2 *)(&DAT_02001030 + iVar1) = 0;
  (&DAT_02001060)[param_1 * 0x22] = 0x80000001;
  (&DAT_0200105c)[param_1 * 0x22] = 0x80000001;
  *(undefined4 *)(&DAT_02001058 + iVar1) = 0x80000001;
  *(undefined4 *)(&DAT_02001054 + iVar1) = 0x80000001;
  (&DAT_02001078)[param_1 * 0x22] = 0x80000001;
  (&DAT_02001074)[param_1 * 0x22] = 0x80000001;
  (&DAT_02001020)[param_1 * 0x22] = 0;
  (&DAT_02001024)[param_1 * 0x22] = 1;
  (&DAT_02001028)[param_1 * 0x22] = 0;
  if (param_1 == 0) {
    sub_08004C7C(iVar1 + 0x2001034,&DAT_02001054 + iVar1,&DAT_0202d01c,*piVar2 + (int)piVar2,
                 piVar2[2] + (int)piVar2,*(undefined4 *)(param_2 + 0xc));
  }
  else {
    sub_08004C7C(iVar1 + 0x2001034,&DAT_02001054 + iVar1,
                 ((ushort)(&DAT_02000f94)[(uint)(&DAT_0200107c)[param_1 * 0x22] >> 4] & 0x1f00) * 8
                 + 0x6000000,*piVar2 + (int)piVar2,piVar2[2] + (int)piVar2,
                 *(undefined4 *)(param_2 + 0xc + param_1 * 4));
  }
  return in_lr;
}


// sub_08009478 at 0x08009478 (thumb)

undefined4 sub_08009478(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  iVar1 = param_1 * 0x88;
  piVar2 = *(int **)(param_2 + 8);
  *(short *)(&DAT_020024ac + iVar1) = (short)param_1;
  (&DAT_020024af)[iVar1] = 0;
  (&DAT_020024ae)[iVar1] = 0;
  *(undefined2 *)(&DAT_020024b2 + iVar1) = 0;
  *(undefined2 *)(&DAT_020024b0 + iVar1) = 0;
  (&DAT_020024e0)[param_1 * 0x22] = 0x80000001;
  (&DAT_020024dc)[param_1 * 0x22] = 0x80000001;
  *(undefined4 *)(&DAT_020024d8 + iVar1) = 0x80000001;
  *(undefined4 *)(&DAT_020024d4 + iVar1) = 0x80000001;
  (&DAT_020024f8)[param_1 * 0x22] = 0x80000001;
  (&DAT_020024f4)[param_1 * 0x22] = 0x80000001;
  (&DAT_020024a0)[param_1 * 0x22] = 0;
  (&DAT_020024a4)[param_1 * 0x22] = 1;
  (&DAT_020024a8)[param_1 * 0x22] = 0;
  if (param_1 == 0) {
    sub_08005204(iVar1 + 0x20024b4,&DAT_020024d4 + iVar1,&DAT_0202e4a4,*piVar2 + (int)piVar2,
                 piVar2[2] + (int)piVar2,*(undefined4 *)(param_2 + 0xc));
  }
  else {
    sub_08005204(iVar1 + 0x20024b4,&DAT_020024d4 + iVar1,
                 ((ushort)(&DAT_020023c4)[(uint)(&DAT_020024fc)[param_1 * 0x22] >> 4] & 0x1f00) * 8
                 + 0x6000000,*piVar2 + (int)piVar2,piVar2[2] + (int)piVar2,
                 *(undefined4 *)(param_2 + 0xc + param_1 * 4));
  }
  return in_lr;
}


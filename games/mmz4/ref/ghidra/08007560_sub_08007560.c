// sub_08007560 at 0x08007560 (thumb)

undefined4 sub_08007560(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  iVar1 = param_1 * 0x88;
  piVar2 = *(int **)(param_2 + 8);
  *(short *)(&DAT_02000adc + iVar1) = (short)param_1;
  (&DAT_02000adf)[iVar1] = 0;
  (&DAT_02000ade)[iVar1] = 0;
  *(undefined2 *)(&DAT_02000ae2 + iVar1) = 0;
  *(undefined2 *)(&DAT_02000ae0 + iVar1) = 0;
  (&DAT_02000b10)[param_1 * 0x22] = 0x80000001;
  (&DAT_02000b0c)[param_1 * 0x22] = 0x80000001;
  *(undefined4 *)(&DAT_02000b08 + iVar1) = 0x80000001;
  (&DAT_02000b04)[param_1 * 0x22] = 0x80000001;
  (&DAT_02000b28)[param_1 * 0x22] = 0x80000001;
  (&DAT_02000b24)[param_1 * 0x22] = 0x80000001;
  (&DAT_02000ad0)[param_1 * 0x22] = 0;
  (&DAT_02000ad4)[param_1 * 0x22] = 1;
  (&DAT_02000ad8)[param_1 * 0x22] = 0;
  if (param_1 == 0) {
    sub_080035F8(iVar1 + 0x2000ae4,&DAT_02000b04 + param_1 * 0x22,&DAT_0202cad4,
                 *piVar2 + (int)piVar2,piVar2[2] + (int)piVar2,*(undefined4 *)(param_2 + 0xc));
  }
  else {
    sub_080035F8(iVar1 + 0x2000ae4,&DAT_02000b04 + param_1 * 0x22,
                 ((ushort)(&DAT_02000a04)[(uint)(&DAT_02000b2c)[param_1 * 0x22] >> 4] & 0x1f00) * 8
                 + 0x6000000,*piVar2 + (int)piVar2,piVar2[2] + (int)piVar2,
                 *(undefined4 *)(param_2 + 0xc + param_1 * 4));
  }
  return in_lr;
}


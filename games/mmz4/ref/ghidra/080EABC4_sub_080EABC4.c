// sub_080EABC4 at 0x080EABC4 (thumb)

undefined4 sub_080EABC4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined auStack_18 [4];
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0801CC9C(param_1);
    if ((byte)(*(char *)(param_1 + 0x10) - 3U) < 2) {
      sub_0801CEEC(param_1);
    }
    else {
      uVar2 = (uint)(*(ushort *)(&DAT_0886619c + (uint)*(byte *)(param_1 + 0x10) * 8) >> 8);
      sub_08001D30(&DAT_08c44000 + uVar2 * 5,
                   ((uint)(ushort)(&DAT_0202e040)[uVar2] -
                   (uint)((ushort)(&DAT_08c44006)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
      sub_08002208(&DAT_08c4400c + uVar2 * 0x14,
                   ((uint)(ushort)(&DAT_0202de40)[uVar2] - (uint)(byte)(&DAT_08c44013)[uVar2 * 0x14]
                   ) * 0x20 + 0x200);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_08005760(param_1 + 0x74,&DAT_088660dc,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080070B0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),auStack_18);
    iVar1 = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x54) = iVar1;
    local_14 = *(int *)(param_1 + 0x58) + 0xfff + local_14;
    *(int *)(param_1 + 0x58) = local_14;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    if (((*(int *)(DAT_0202dbf0 + 0x54) - iVar1) + 0x2000U < 0x4001) &&
       ((*(int *)(DAT_0202dbf0 + 0x58) - local_14) + 0x2000U < 0x4001)) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if (*(char *)(param_1 + 0x10) == '\a') {
      if (DAT_0202dada._1_1_ == '\0') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_080EAD7C(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_08005760(param_1 + 0x74,&DAT_0886610c,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80eadc9;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080EAD7C(param_1);
  }
  return in_lr;
}


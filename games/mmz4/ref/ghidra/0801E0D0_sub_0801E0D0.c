// sub_0801E0D0 at 0x0801E0D0 (thumb)

undefined4 sub_0801E0D0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_0202e898;
  piVar3 = DAT_0202e884;
  DAT_0202e89c = param_1;
  DAT_0202e8a0 = param_2;
  if (DAT_0202e884 != (int *)0x0) {
    do {
      piVar5 = (int *)*piVar3;
      iVar4 = piVar3[1];
      if (iVar4 != 0) {
        if (((*(ushort *)((int)piVar3 + 10) & 0x10) == 0) &&
           ((iVar2 = (*(int *)(*(short *)(piVar3 + 2) * 0xc + iVar1 + 4) + -1) * 0x100,
            iVar2 < DAT_0202e89c || (iVar2 - DAT_0202e8a0 != 0 && DAT_0202e8a0 <= iVar2)))) {
          if ((*(ushort *)((int)piVar3 + 10) & 5) != 0) {
            (&DAT_0202e440)[(int)((uint)*(ushort *)(piVar3 + 2) << 0x10) >> 0x15] =
                 (&DAT_0202e440)[(int)((uint)*(ushort *)(piVar3 + 2) << 0x10) >> 0x15] |
                 1 << (*(ushort *)(piVar3 + 2) & 0x1f);
          }
          sub_0801DF34(iVar4);
          sub_0801E204(piVar3);
        }
      }
      piVar3 = piVar5;
    } while (piVar5 != (int *)0x0);
  }
  return in_lr;
}


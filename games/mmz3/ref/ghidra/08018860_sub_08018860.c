// sub_08018860 at 0x08018860 (thumb)

undefined4 sub_08018860(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_020300e8;
  piVar3 = DAT_020300d4;
  DAT_020300ec = param_1;
  DAT_020300f0 = param_2;
  if (DAT_020300d4 != (int *)0x0) {
    do {
      piVar5 = (int *)*piVar3;
      iVar4 = piVar3[1];
      if (iVar4 != 0) {
        if (((*(ushort *)((int)piVar3 + 10) & 0x10) == 0) &&
           ((iVar2 = *(short *)(*(short *)(piVar3 + 2) * 8 + iVar1 + 4) * 0x1000,
            iVar2 < DAT_020300ec || (iVar2 - DAT_020300f0 != 0 && DAT_020300f0 <= iVar2)))) {
          if ((*(ushort *)((int)piVar3 + 10) & 5) != 0) {
            *(uint *)(&DAT_0202fe10 + ((int)((uint)*(ushort *)(piVar3 + 2) << 0x10) >> 0x15) * 4) =
                 *(uint *)(&DAT_0202fe10 +
                          ((int)((uint)*(ushort *)(piVar3 + 2) << 0x10) >> 0x15) * 4) |
                 1 << (*(ushort *)(piVar3 + 2) & 0x1f);
          }
          sub_080186C4(iVar4);
          sub_08018988(piVar3);
        }
      }
      piVar3 = piVar5;
    } while (piVar5 != (int *)0x0);
  }
  return in_lr;
}


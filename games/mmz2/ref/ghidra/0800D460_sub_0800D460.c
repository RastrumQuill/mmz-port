// sub_0800D460 at 0x0800D460 (thumb)

undefined4 sub_0800D460(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  piVar2 = &DAT_08318ff0;
  iVar1 = 0;
  do {
    if (*param_1 >> 0xc == (*piVar2 >> 0xc) + 1) {
      sub_0800860C(*piVar2 >> 0xc,*(int *)((int)&DAT_08318ff4 + iVar1) >> 0xc,
                   *(undefined4 *)(&DAT_0831924c + *(int *)((int)&DAT_08318ff8 + iVar1) * 4));
      return in_lr;
    }
    piVar2 = piVar2 + 3;
    iVar1 = iVar1 + 0xc;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x23);
  return in_lr;
}


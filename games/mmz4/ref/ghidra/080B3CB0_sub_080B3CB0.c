// sub_080B3CB0 at 0x080B3CB0 (thumb)

undefined4 sub_080B3CB0(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) ||
      (sVar1 = *(short *)(param_1 + 0xbe) + -1, *(short *)(param_1 + 0xbe) = sVar1, sVar1 == -1)) ||
     (*(char *)(param_1 + 0xb8) != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B3DC8(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xc0);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar3 = sub_0802AD94(0,param_1,&DAT_08860408);
      *piVar2 = iVar3;
      if (iVar3 == 0) goto LAB_080b3daa;
      sub_08005784(param_1 + 0x74,&DAT_08860364);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*piVar2 == 0) goto LAB_080b3daa;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54));
  if (iVar3 < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar3 = sub_0802B3CC(*piVar2);
  if (iVar3 == 0) {
    sVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    sub_0801CFC8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
    sub_0801CFF0(param_1);
    return in_lr;
  }
  sub_08005784(param_1 + 0x74,&DAT_0886034c);
  *piVar2 = 0;
LAB_080b3daa:
  sub_08128884(param_1,*(undefined4 *)(&DAT_08860334 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}


// sub_0805BA48 at 0x0805BA48 (thumb)

undefined4 sub_0805BA48(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_020301a8 & 8) != 0)) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x58);
    if ((*(char *)(param_1 + 0xd) != '\x1d') && ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001))
    {
      sVar1 = sub_0805D55C(param_1,0,0);
      if (sVar1 == 0) {
        *(undefined *)(param_1 + 0xd) = 0x1d;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    piVar3 = (int *)(param_1 + 0xc4);
    if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*piVar3 == 0)) {
      iVar2 = sub_080253D8(0x1c,param_1,&DAT_08361810);
      *piVar3 = iVar2;
    }
    iVar2 = sub_08025794(*piVar3);
    if (iVar2 != 0) {
      *piVar3 = 0;
    }
    if (*(int *)(&UNK_08361588 + (uint)*(byte *)(param_1 + 0xd) * 4) != 0) {
      sub_080FE2C0(param_1);
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&UNK_08361510 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0805BB38(param_1);
  }
  return in_lr;
}


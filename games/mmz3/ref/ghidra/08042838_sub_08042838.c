// sub_08042838 at 0x08042838 (thumb)

undefined4 sub_08042838(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    if (((*(uint *)(param_1 + 0x8c) & 1) == 0) || (*(char *)(param_1 + 0x10) != '\x01'))
    goto LAB_08042872;
    iVar3 = sub_080253D8(0xc,param_1,&DAT_0835ea2c);
  }
  else {
    iVar3 = sub_08025794();
    if (iVar3 == 0) goto LAB_08042872;
    iVar3 = 0;
  }
  *(int *)(param_1 + 0xbc) = iVar3;
LAB_08042872:
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0xd) != '\x01')) {
    psVar5 = (short *)(param_1 + 0xb8);
    sVar1 = *psVar5;
    *psVar5 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      *psVar5 = 0xc0;
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      iVar3 = sub_080FE4D8(uVar4 * 2 >> 0x11,3);
      sub_08075A5C(param_1,DAT_020302c0 + iVar3 * 0x3000 + -0x800);
    }
  }
  cVar2 = sub_080425D4(param_1);
  if (cVar2 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835e868 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835e894 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}


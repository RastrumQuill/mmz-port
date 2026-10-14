// sub_080618C0 at 0x080618C0 (thumb)

undefined4 sub_080618C0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  sub_080041E4(0xcb);
  sub_080041E4(0xcc);
  if (((DAT_020301b2 & 1) == 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    piVar5 = (int *)(param_1 + 0xbc);
    if (*piVar5 == 0) {
      *piVar5 = 0x5a;
      iVar4 = DAT_020302c0 + -0x6000;
      uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar3 = uVar1 & 0x7fffffff;
      DAT_0202f608 = uVar3;
      iVar2 = sub_080FE4D8(uVar1 * 2 >> 0x11,0xc000);
      uVar1 = uVar3 * 0x343fd + 0x269ec3;
      uVar3 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      sub_0807C914(iVar4 + iVar2,DAT_020302c4 + -0x3000 + (uVar1 * 4 >> 0x12),uVar3 * 2 >> 0x11 & 1)
      ;
    }
    *piVar5 = *piVar5 + -1;
  }
  iVar4 = 0;
  iVar2 = 0;
  do {
    iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0xb4 + iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080619F4(param_1);
  }
  else {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08361e64 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08361e6c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}


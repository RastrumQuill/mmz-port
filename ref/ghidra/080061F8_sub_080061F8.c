// sub_080061F8 at 0x080061F8 (thumb)

undefined4 sub_080061F8(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  DAT_0200520e = 0;
  DAT_02005200 = *param_1;
  DAT_02005204 = param_1[1];
  local_1c = ((DAT_02005200 >> 8) + -0x78) * 0x100;
  local_18 = ((DAT_02005204 >> 8) + -0x50) * 0x100;
  puVar1 = (undefined4 *)sub_08006D3C(&local_1c);
  if (DAT_0200520c != *(short *)puVar1) {
    DAT_02004f30 = DAT_02004f30 & 0xc1ff;
    DAT_0200520c = (short)*puVar1;
    sub_08006BE8(puVar1);
    sub_080C8A98(&local_1c,*(undefined4 *)puVar1[1]);
    iVar3 = 0;
    do {
      sub_08006920(iVar3,puVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  DAT_02021648 = 0x7fffffff;
  DAT_0202164c = 0x7fffffff;
  sub_080C8A98(&local_1c,*(undefined4 *)(puVar1[1] + 4));
  iVar4 = 0;
  iVar3 = 2;
  do {
    piVar2 = (int *)((int)&DAT_02004ff0 + iVar4);
    sub_080077D8(piVar2,puVar1,&local_1c);
    if (*piVar2 != 0) {
      sub_080C8A9C(piVar2,puVar1);
    }
    iVar4 = iVar4 + 0x70;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}


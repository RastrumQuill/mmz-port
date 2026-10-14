// sub_0808CC6C at 0x0808CC6C (thumb)

undefined4 sub_0808CC6C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08005760(param_1 + 0x74,&DAT_0885c400,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x808ce99;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  cVar4 = -1;
  if (*(char *)(param_1 + 0x10) != '\0') {
    cVar4 = '\x01';
  }
  pcVar5 = (char *)(param_1 + 0xc0);
  *pcVar5 = cVar4;
  *(undefined *)(param_1 + 0xc3) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1;
  iVar1 = sub_08008988(*(int *)(param_1 + 0x54) + -0x1600,iVar1 + -0x800);
  iVar1 = *(int *)(param_1 + 0x54) - iVar1;
  if (0x2800 < iVar1) {
    iVar1 = 0x2800;
  }
  iVar2 = sub_08008868(*(int *)(param_1 + 0x54) + 0x1600,*(int *)(param_1 + 0x58) + -0x800);
  iVar2 = iVar2 - *(int *)(param_1 + 0x54);
  if (0x2800 < iVar2) {
    iVar2 = 0x2800;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 0x68) = iVar1;
  if (iVar1 == 0x2800) {
    uVar3 = 9;
  }
  else {
    uVar3 = FUN_081288bc(iVar1,0x480);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  if (*(int *)(param_1 + 0x60) < 1) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x68) = iVar1 * 0x480;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 2;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0801CF00(param_1,0x2501);
  *(int *)(param_1 + 0x5c) = iVar1 * 0x30 * (int)*pcVar5;
  *(int *)(param_1 + 100) = (int)*pcVar5 * *(int *)(param_1 + 0x60);
  iVar1 = sub_0807F824(param_1);
  if (iVar1 != 0) {
    sub_0801CF00(param_1,0x2500);
    sub_0801CFF0(param_1);
  }
  sub_0808CDE4(param_1);
  return in_lr;
}


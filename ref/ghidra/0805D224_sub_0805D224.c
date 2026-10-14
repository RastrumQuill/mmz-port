// sub_0805D224 at 0x0805D224 (thumb)

undefined4 sub_0805D224(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(*(int *)(param_1 + 0x20) + 0x4c) + 0x600;
  *(int *)(param_1 + 0x50) = *(int *)(*(int *)(param_1 + 0x20) + 0x50) + -0x2e00;
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    iVar4 = *(int *)(param_1 + 0x4c) - ((uVar2 * 2 >> 0x11 & 0x1f) * 0x100 + -0x1000);
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    iVar3 = *(int *)(param_1 + 0x50) + (uVar2 * 2 >> 0x11 & 0xf) * -0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    sub_08079640(iVar4,iVar3,3,uVar2 * 2 >> 0x11 & 0xff);
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    sub_08079640(iVar4,iVar3,4,uVar2 * 2 >> 0x11 & 0xff);
  }
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_08001EAC(2);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}


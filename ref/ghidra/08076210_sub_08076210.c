// sub_08076210 at 0x08076210 (thumb)

undefined4 sub_08076210(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar2 + 0xc) < 2) || ((DAT_02022b64 & 8) == 0)) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x12) = 0x80;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(iVar2 + 0xbc) = 0x1f;
    }
    iVar4 = *(int *)(iVar2 + 0x4c) + 0x400;
    *(int *)(param_1 + 0x4c) = iVar4;
    iVar2 = *(int *)(iVar2 + 0x50);
    *(int *)(param_1 + 0x50) = iVar2 + -0x2e00;
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      iVar2 = iVar2 + -0x3600;
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_08079640(iVar4,iVar2,3,uVar3 * 2 >> 0x11 & 0xff);
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_08079640(iVar4,iVar2,4,uVar3 * 2 >> 0x11 & 0xff);
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
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}


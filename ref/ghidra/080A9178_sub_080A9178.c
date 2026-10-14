// sub_080A9178 at 0x080A9178 (thumb)

undefined4 sub_080A9178(int param_1)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_0809C980();
  if (*(char *)(param_1 + 0xd) == '\0') {
    sVar3 = *(short *)(param_1 + 200) + -1;
    *(short *)(param_1 + 200) = sVar3;
    if (sVar3 == -1) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x50) + 0x40;
    *(int *)(param_1 + 0x50) = iVar4;
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      iVar4 = iVar4 + ((uVar2 * 2 >> 0x11 & 0xf) + 8) * 0x100;
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_0809B340(*(int *)(param_1 + 0x4c) + -0x1800,iVar4,3,0);
        sub_0809B340(*(int *)(param_1 + 0x4c) + 0x1800,iVar4,3,0);
      }
      else {
        sub_0809B340(*(int *)(param_1 + 0x4c) + -0x800,iVar4,3,0);
        sub_0809B340(*(int *)(param_1 + 0x4c) + 0x800,iVar4,3,0);
      }
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}


// sub_080CB63C at 0x080CB63C (thumb)

undefined4 sub_080CB63C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_c = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 3) * 0x100 + -0x1000;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x54);
      local_10 = iVar3 + 0x4000;
      iVar4 = -0x800;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      local_10 = iVar3 + -0x4000;
      iVar4 = 0x800;
    }
    *(int *)(param_1 + 0x54) = iVar3 + iVar4;
    sub_080AC60C(2,&local_10);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}


// sub_0805D620 at 0x0805D620 (thumb)

undefined4 sub_0805D620(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(*(int *)(param_1 + 0x20) + 0x4c) + 0x2500;
  *(int *)(param_1 + 0x50) = *(int *)(*(int *)(param_1 + 0x20) + 0x50) + -0x1c00;
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(undefined *)(param_1 + 0x12) = 0x6c;
    DAT_02022ae1 = DAT_02022ae1 | 1;
  }
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    iVar5 = *(int *)(param_1 + 0x4c) - ((uVar3 * 2 >> 0x11 & 0x1f) * 0x100 + -0x1000);
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    iVar4 = *(int *)(param_1 + 0x50) + (uVar3 * 2 >> 0x11 & 0xf) * -0x100;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    sub_08079640(iVar5,iVar4,3,uVar3 * 2 >> 0x11 & 0xff);
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    sub_08079640(iVar5,iVar4,4,uVar3 * 2 >> 0x11 & 0xff);
  }
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_08001EAC(2);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 0x3c) {
    sub_08090414(param_1,1,0x12);
  }
  else if (bVar1 < 0x3d) {
    if (bVar1 == 0x14) {
      sub_08090414(param_1,1,0x10);
    }
    else if (bVar1 == 0x28) {
      sub_08090414(param_1,1,0x11);
    }
  }
  else if (bVar1 == 0x50) {
    sub_08090414(param_1,1,0x13);
  }
  else if (bVar1 == 100) {
    sub_08090414(param_1,1,0x14);
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}


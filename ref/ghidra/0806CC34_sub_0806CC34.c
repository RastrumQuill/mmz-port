// sub_0806CC34 at 0x0806CC34 (thumb)

undefined4 sub_0806CC34(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,6);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_08095738(param_1,1,0,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    iVar4 = *(int *)(param_1 + 0x4c) + (0xf - (uVar2 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    iVar3 = *(int *)(param_1 + 0x50) + ((uVar2 * 2 >> 0x11 & 0xf) + 0x28) * -0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    sub_08079640(iVar4,iVar3,3,uVar2 * 2 >> 0x11 & 0xff);
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    sub_08079640(iVar4,iVar3,4,uVar2 * 2 >> 0x11 & 0xff);
  }
  if ((*(char *)(param_1 + 0x12) == '\x10') || (*(char *)(param_1 + 0x12) == '\0')) {
    sub_08001EAC(2);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


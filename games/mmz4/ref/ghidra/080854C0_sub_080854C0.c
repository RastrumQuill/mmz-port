// sub_080854C0 at 0x080854C0 (thumb)

undefined4 sub_080854C0(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x8000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  cVar1 = sub_0808532C(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 2;
LAB_08085572:
    sub_08085628(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    cVar1 = *(char *)(param_1 + 0xc3);
    if (cVar1 != '\0') {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0xd) = cVar1;
    goto LAB_08085572;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar4 = sub_0807F824(param_1);
    if (iVar4 != 0) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
    if (*(char *)(param_1 + 0xf) == '\0') goto LAB_080855f6;
  }
  iVar4 = sub_08008AA4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  if (iVar4 != 0) {
    sub_080852A8(param_1,iVar4,0);
  }
  sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  if (sVar2 != 0) {
    uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0xf) = 2;
  }
  iVar4 = sub_0807F824(param_1);
  if (iVar4 == 0) {
    *(undefined *)(param_1 + 0xf) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) != 0x20001) {
    return in_lr;
  }
LAB_080855f6:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885b764 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885b77c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}


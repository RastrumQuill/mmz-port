// sub_08103694 at 0x08103694 (thumb)

undefined4 sub_08103694(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar3 = 0x28;
    uVar5 = 0x5000;
  }
  else {
    iVar3 = 0x48;
    uVar5 = 0x9000;
  }
  uVar1 = sub_08128954(iVar3 * (uint)*(byte *)(param_1 + 0x11) + (uint)DAT_0202daec & 0xffff,
                       iVar3 << 2);
  uVar2 = iVar3 * 2;
  if (uVar1 < uVar2) {
    iVar4 = *(int *)(param_1 + 100);
    iVar3 = sub_08128A24(uVar5 * uVar1,uVar2);
    iVar3 = (iVar4 - (uVar5 >> 1)) + iVar3;
  }
  else {
    iVar4 = *(int *)(param_1 + 100);
    iVar3 = sub_08128A24(uVar5 * (uVar1 + iVar3 * -2),uVar2);
    iVar3 = (iVar4 + (uVar5 >> 1)) - iVar3;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  sub_0801CFF0(param_1);
  return in_lr;
}


// sub_080AEB44 at 0x080AEB44 (thumb)

undefined4 sub_080AEB44(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0xf0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_0801CFF0(param_1);
  iVar5 = *(int *)(iVar3 + 0x54) + -0x6800;
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x200;
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((((*puVar4 & 0x800) == 0) || (uVar2 = DAT_0202e918 & 8, (DAT_0202e918 & 8) != 0)) ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1,
     iVar3 = DAT_0202dbf0, cVar1 == -1)) {
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else if ((*(uint *)(DAT_0202dbf0 + 0x8c) & 1) == 0) {
    *(int *)(DAT_0202dbf0 + 0x54) = iVar5;
    *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0x58) + 0x1300;
    *(undefined4 *)(iVar3 + 0x60) = 0;
  }
  else {
    *(byte *)(DAT_0202dbf0 + 0x142) = *(byte *)(DAT_0202dbf0 + 0x142) | 0x40;
    *(undefined *)(iVar3 + 0xd) = 4;
    *(char *)(iVar3 + 0xe) = (char)uVar2;
    *(undefined4 *)(iVar3 + 0x128) = 0xfffffe00;
    *(undefined4 *)(iVar3 + 300) = 0xfffffc00;
    *(uint *)(iVar3 + 0x130) = uVar2;
    *(undefined4 *)(iVar3 + 0x134) = 0x40;
    *(undefined2 *)(iVar3 + 0x138) = 1;
    *puVar4 = uVar2;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(uint *)(param_1 + 0x5c) = uVar2;
    *(uint *)(param_1 + 0x60) = uVar2;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


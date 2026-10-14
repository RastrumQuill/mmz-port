// sub_08088744 at 0x08088744 (thumb)

undefined4 sub_08088744(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  uVar4 = (uint)*(byte *)(param_1 + 10) << 0x18;
  uVar7 = uVar4 >> 0x1c & 1;
  uVar4 = uVar4 >> 0x1d & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    uVar6 = uVar7;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar6 = uVar7 + 2;
    }
    sub_080D8004(&local_18,3,uVar6);
    sub_0801CF00(param_1,0x1d12);
    if (uVar4 == 0) {
      *(uint *)(param_1 + 0x5c) = (uVar7 * 2 + -1) * 0x40;
      uVar3 = 0xfffffec0;
    }
    else {
      *(uint *)(param_1 + 0x5c) = (uVar7 * 2 + -1) * 0x40;
      uVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + uVar4 * 0xc00;
  sVar2 = sub_08007C7C();
  if ((sVar2 != 0) ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08128884(param_1,0x8088821);
  }
  return in_lr;
}


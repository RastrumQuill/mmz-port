// sub_08029178 at 0x08029178 (thumb)

undefined4 sub_08029178(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar5 = (uint)param_2;
  *(byte *)(param_1 + 0xd) = param_2;
  uVar6 = (uint)*(byte *)(param_1 + 0x10);
  if (uVar5 == 2) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    iVar3 = uVar6 << 1;
  }
  else {
    iVar4 = *(int *)(*(char *)(param_1 + 0x71) * 4 + *(int *)(param_1 + 0x5c));
    iVar3 = uVar6 * 2;
    piVar1 = *(int **)(&DAT_082ac950 + (iVar3 + uVar5) * 4);
    *(int **)(param_1 + 0x5c) = piVar1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    else if (iVar4 == 0) {
      uVar2 = sub_08029314(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,uVar2,param_1 + 0x4c,0);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0x802934d;
    }
    else {
      uVar2 = sub_08029314(param_1);
      sub_0800561C(param_1 + 0x74,uVar2);
    }
  }
  sub_08025C54(param_1,*(undefined2 *)(&DAT_082ac824 + (iVar3 + uVar6 + uVar5) * 2));
  return in_lr;
}


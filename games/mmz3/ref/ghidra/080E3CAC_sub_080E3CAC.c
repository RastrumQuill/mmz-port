// sub_080E3CAC at 0x080E3CAC (thumb)

undefined4 sub_080E3CAC(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(&DAT_0835b034 + (uint)*(byte *)(iVar4 + 0x147) * 8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x01') {
      uVar1 = sub_080E15D8(2);
      sub_08017700(param_1,uVar1);
      goto LAB_080e3d2e;
    }
    uVar2 = 1;
  }
  uVar1 = sub_080E15D8(uVar2);
  sub_08017700(param_1,uVar1);
LAB_080e3d2e:
  sub_080177F4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  iVar3 = *(int *)(iVar4 + 0x54) + (int)(short)iVar5;
  *(int *)(param_1 + 0x54) = iVar3;
  iVar5 = *(int *)(iVar4 + 0x58) + (iVar5 >> 0x10);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 100) = iVar3;
  *(int *)(param_1 + 0x68) = iVar5;
  *(undefined2 *)(param_1 + 0xc2) = 0x200;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xb9) = 0x20;
  if (*(char *)(iVar4 + 0x121) == '(') {
    DAT_02030108 = DAT_02030108 | 0x80;
  }
  sub_080E3DA8(param_1);
  return in_lr;
}


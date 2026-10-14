// sub_080ACB4C at 0x080ACB4C (thumb)

undefined4 sub_080ACB4C(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_34 [4];
  char acStack_24 [8];
  
  local_34[0] = 0x9c04;
  local_34[1] = 0x9c08;
  local_34[2] = 0x9c0c;
  local_34[3] = 0x9c10;
  sub_08128B5C(acStack_24,&DAT_081296c0,8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(local_34 + uVar3));
    *(int *)(param_1 + 100) = *(int *)(iVar1 + 0xb8) + acStack_24[uVar3 * 2] * -0x6800 + 0x7800;
    *(int *)(param_1 + 0x68) = *(int *)(iVar1 + 0xbc) + acStack_24[uVar3 * 2 + 1] * -0x4000 + 0x5000
    ;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar1 = *(short *)((int)&DAT_08128c10 + (((uint)*(byte *)(param_1 + 0x12) << 0x19) >> 0x17)) *
          -0x20;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + acStack_24[uVar3 * 2] * iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + acStack_24[uVar3 * 2 + 1] * iVar1;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


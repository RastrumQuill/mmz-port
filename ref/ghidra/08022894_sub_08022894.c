// sub_08022894 at 0x08022894 (thumb)

undefined4 sub_08022894(int param_1)

{
  undefined uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  puVar3 = (undefined *)(param_1 + 0xc0);
  uVar1 = *puVar3;
  *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 0;
  puVar4 = (undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xc1) = *puVar4;
  *puVar4 = 0;
  puVar2 = (undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xc2) = *puVar2;
  *puVar2 = 0;
  *(undefined *)(param_1 + 0xc3) = *puVar3;
  *puVar3 = 0;
  *(undefined *)(param_1 + 0xc1) = *puVar4;
  *puVar4 = 3;
  *(undefined *)(param_1 + 0xc2) = *puVar2;
  *puVar2 = 2;
  *(undefined *)(param_1 + 0xc3) = *puVar3;
  *puVar3 = uVar1;
  sub_08022098(param_1);
  return in_lr;
}


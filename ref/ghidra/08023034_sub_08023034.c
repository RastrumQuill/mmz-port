// sub_08023034 at 0x08023034 (thumb)

undefined4 sub_08023034(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 in_lr;
  
  puVar6 = (undefined *)(param_1 + 0xbe);
  uVar1 = *puVar6;
  puVar4 = (undefined *)(param_1 + 0xbf);
  uVar2 = *puVar4;
  puVar5 = (undefined *)(param_1 + 0xc0);
  uVar3 = *puVar5;
  *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xc1) = *puVar6;
  *puVar6 = 0;
  *(undefined *)(param_1 + 0xc2) = *puVar4;
  *puVar4 = 0;
  *(undefined *)(param_1 + 0xc3) = *puVar5;
  *puVar5 = 0;
  *(undefined *)(param_1 + 0xc1) = *puVar6;
  *puVar6 = uVar1;
  *(undefined *)(param_1 + 0xc2) = *puVar4;
  *puVar4 = uVar2;
  *(undefined *)(param_1 + 0xc3) = *puVar5;
  *puVar5 = uVar3;
  sub_08021B24(param_1);
  return in_lr;
}


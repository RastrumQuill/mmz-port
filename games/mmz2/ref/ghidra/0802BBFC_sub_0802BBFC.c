// sub_0802BBFC at 0x0802BBFC (thumb)

undefined4 sub_0802BBFC(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 in_lr;
  
  puVar8 = (undefined *)(param_1 + 0x176);
  uVar1 = *puVar8;
  puVar6 = (undefined *)(param_1 + 0x177);
  uVar2 = *puVar6;
  puVar7 = (undefined *)(param_1 + 0x178);
  uVar3 = *puVar7;
  puVar5 = (undefined *)(param_1 + 0x179);
  uVar4 = *puVar5;
  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x17a) = *puVar8;
  *puVar8 = 0;
  *(undefined *)(param_1 + 0x17b) = *puVar6;
  *puVar6 = 0;
  *(undefined *)(param_1 + 0x17c) = *puVar7;
  *puVar7 = 0;
  *(undefined *)(param_1 + 0x17d) = *puVar5;
  *puVar5 = 0;
  *(undefined *)(param_1 + 0x17a) = *puVar8;
  *puVar8 = uVar1;
  *(undefined *)(param_1 + 0x17b) = *puVar6;
  *puVar6 = uVar2;
  *(undefined *)(param_1 + 0x17c) = *puVar7;
  *puVar7 = uVar3;
  *(undefined *)(param_1 + 0x17d) = *puVar5;
  *puVar5 = uVar4;
  sub_0802A47C(param_1);
  return in_lr;
}


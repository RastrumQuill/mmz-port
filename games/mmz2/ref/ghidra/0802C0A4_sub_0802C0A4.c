// sub_0802C0A4 at 0x0802C0A4 (thumb)

undefined4 sub_0802C0A4(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 in_lr;
  
  puVar4 = (undefined *)(param_1 + 0x178);
  uVar1 = *puVar4;
  puVar3 = (undefined *)(param_1 + 0x179);
  uVar2 = *puVar3;
  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 0;
  puVar6 = (undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x17a) = *puVar6;
  *puVar6 = 0;
  puVar5 = (undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x17b) = *puVar5;
  *puVar5 = 0;
  *(undefined *)(param_1 + 0x17c) = *puVar4;
  *puVar4 = 0;
  *(undefined *)(param_1 + 0x17d) = *puVar3;
  *puVar3 = 0;
  *(undefined *)(param_1 + 0x17a) = *puVar6;
  *puVar6 = 3;
  *(undefined *)(param_1 + 0x17b) = *puVar5;
  *puVar5 = 2;
  *(undefined *)(param_1 + 0x17c) = *puVar4;
  *puVar4 = uVar1;
  *(undefined *)(param_1 + 0x17d) = *puVar3;
  *puVar3 = uVar2;
  sub_0802B59C(param_1);
  return in_lr;
}


// sub_080C6D20 at 0x080C6D20 (thumb)

void sub_080C6D20(int param_1,int param_2)

{
  byte bVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  bVar1 = **(byte **)(param_2 + 0x40);
  *(byte **)(param_2 + 0x40) = *(byte **)(param_2 + 0x40) + 1;
  puVar2 = (undefined4 *)((uint)bVar1 * 0xc + *(int *)(param_1 + 0x30));
  uVar3 = *puVar2;
  FUN_080c6c46();
  *(undefined4 *)(extraout_r1 + 0x24) = uVar3;
  uVar3 = puVar2[1];
  FUN_080c6c46();
  *(undefined4 *)(extraout_r1_00 + 0x28) = uVar3;
  uVar3 = puVar2[2];
  FUN_080c6c46();
  *(undefined4 *)(extraout_r1_01 + 0x2c) = uVar3;
  return;
}


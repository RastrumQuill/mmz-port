// sub_080E00C4 at 0x080E00C4 (thumb)

undefined4 sub_080E00C4(int param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  puVar2 = (undefined2 *)(param_1 + 0x580);
  sub_08004724(puVar2,*(undefined *)(param_1 + 0x5e0));
  sub_080047C0(param_1 + 0x5a0,*(undefined *)(param_1 + 0x5e1));
  sub_08004810(param_1 + 0x560,puVar2,param_1 + 0x5a0);
  uVar1 = (undefined2)*(undefined4 *)(param_1 + 0x5dc);
  *(undefined2 *)(param_1 + 0x594) = uVar1;
  *(undefined2 *)(param_1 + 0x58a) = uVar1;
  *puVar2 = uVar1;
  *(undefined2 *)(param_1 + 0x59e) = 0x100;
  *(undefined2 *)(param_1 + 0x596) = 0;
  *(undefined2 *)(param_1 + 0x58e) = 0;
  *(undefined2 *)(param_1 + 0x586) = 0;
  *(undefined2 *)(param_1 + 0x59c) = 0;
  *(undefined2 *)(param_1 + 0x58c) = 0;
  *(undefined2 *)(param_1 + 0x584) = 0;
  *(undefined2 *)(param_1 + 0x59a) = 0;
  *(undefined2 *)(param_1 + 0x592) = 0;
  *(undefined2 *)(param_1 + 0x582) = 0;
  *(undefined2 *)(param_1 + 0x598) = 0;
  *(undefined2 *)(param_1 + 0x590) = 0;
  *(undefined2 *)(param_1 + 0x588) = 0;
  sub_08004810(param_1 + 0x540,param_1 + 0x560,puVar2);
  *(undefined2 *)(param_1 + 0x546) = *(undefined2 *)(param_1 + 0x5c0);
  *(undefined2 *)(param_1 + 0x54e) = *(undefined2 *)(param_1 + 0x5c2);
  *(undefined2 *)(param_1 + 0x556) = *(undefined2 *)(param_1 + 0x5c4);
  sub_080044E8(param_1 + 0x540,&DAT_083124e4,param_1,0x2a);
  return in_lr;
}


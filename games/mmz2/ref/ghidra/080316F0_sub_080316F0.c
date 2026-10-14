// sub_080316F0 at 0x080316F0 (thumb)

undefined4 sub_080316F0(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined *)(param_1 + 0x30);
  *puVar1 = 3;
  *(undefined *)(param_1 + 0x34) = 0;
  *(undefined *)(param_1 + 0x32) = 0;
  *(undefined *)(param_1 + 0x33) = 1;
  *(undefined *)(param_1 + 0x31) = 1;
  *(undefined *)(param_1 + 0x35) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  sub_080313D8(puVar1,param_2);
  sub_080313F8(puVar1,param_2);
  sub_08031418(puVar1,param_2);
  sub_08031438(puVar1,param_2);
  return in_lr;
}


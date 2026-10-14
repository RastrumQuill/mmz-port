// sub_0801CB48 at 0x0801CB48 (thumb)

undefined4 sub_0801CB48(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x17c);
  uVar2 = *(undefined4 *)(param_1 + 0x180);
  *param_2 = *(undefined4 *)(param_1 + 0x178);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = *(undefined4 *)(param_1 + 0x184);
  return in_lr;
}


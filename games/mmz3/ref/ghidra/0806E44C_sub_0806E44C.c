// sub_0806E44C at 0x0806E44C (thumb)

undefined8 sub_0806E44C(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar1 = 0;
    goto LAB_0806e4b4;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar3 = (uint *)(*(int *)(param_1 + 0x28) + 0xb4);
    *puVar3 = *puVar3 & ~(1 << *(sbyte *)(param_1 + 0x11));
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  uVar2 = *(uint *)(param_1 + 0x8c);
  if ((uVar2 & 0x10000) == 0) {
    uVar2 = uVar2 & 0x20000;
    if (uVar2 == 0) goto LAB_0806e4a6;
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else {
    uVar2 = 1;
LAB_0806e4a6:
    *(char *)(param_1 + 0xd) = (char)uVar2;
  }
  sub_0806E74C(param_1);
  uVar1 = 1;
LAB_0806e4b4:
  return CONCAT44(in_lr,uVar1);
}


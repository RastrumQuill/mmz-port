// sub_080E8F3C at 0x080E8F3C (thumb)

undefined8 sub_080E8F3C(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (('\x03' < *(char *)(*(int *)(param_1 + 0x14) + 0x71)) &&
     (*(char *)(*(int *)(param_1 + 0x14) + 0x72) < '\x02')) {
    uVar1 = sub_08037A60(*(undefined4 *)(param_1 + 0x10));
    iVar2 = sub_080DB954(param_1,uVar1);
    if (iVar2 != 0) {
      *(undefined *)(param_1 + 3) = 2;
      *(int *)(param_1 + 0x14) = iVar2;
    }
  }
  return CONCAT44(in_lr,2);
}


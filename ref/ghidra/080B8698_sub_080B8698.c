// sub_080B8698 at 0x080B8698 (thumb)

undefined4 sub_080B8698(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xd2) = *(char *)(param_1 + 0xd2) + '\x04';
  iVar1 = *(int *)(param_1 + 0xd4);
  *(int *)(param_1 + 0xd4) = iVar1 + 0x300;
  if ((*(char *)(param_1 + 0xd) == '\x02') && (iVar1 - 0x5d00U < 0x300)) {
    *(undefined *)(param_1 + 0xd) = 3;
    sub_080B8A3C(*(undefined4 *)(param_1 + 0xd8));
  }
  return in_lr;
}


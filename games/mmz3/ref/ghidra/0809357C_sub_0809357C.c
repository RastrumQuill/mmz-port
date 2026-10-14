// sub_0809357C at 0x0809357C (thumb)

undefined8 sub_0809357C(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (0 < param_2) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_2;
    iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
    iVar1 = iVar1 - *(int *)(param_1 + 0x58);
    if (iVar1 < 0x800) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
      uVar2 = 1;
      goto LAB_080935aa;
    }
  }
  uVar2 = 0;
LAB_080935aa:
  return CONCAT44(in_lr,uVar2);
}


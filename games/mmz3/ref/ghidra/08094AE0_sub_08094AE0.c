// sub_08094AE0 at 0x08094AE0 (thumb)

undefined8 sub_08094AE0(int param_1,int param_2)

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
      goto LAB_08094b0e;
    }
  }
  uVar2 = 0;
LAB_08094b0e:
  return CONCAT44(in_lr,uVar2);
}


// sub_08026D38 at 0x08026D38 (thumb)

undefined8 sub_08026D38(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sVar1 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),
                       *(int *)(param_1 + 0x58) + (int)*(short *)(param_2 + 2));
  if (sVar1 == -0x7ff1) {
    uVar2 = 1;
  }
  else if (sVar1 == -0x7ff2) {
    uVar2 = 2;
  }
  else {
    sub_08008FEC(*(undefined4 *)(param_1 + 0x100),
                 *(int *)(param_1 + 0x104) + (int)*(short *)(param_2 + 2));
    uVar2 = 3;
  }
  return CONCAT44(in_lr,uVar2);
}


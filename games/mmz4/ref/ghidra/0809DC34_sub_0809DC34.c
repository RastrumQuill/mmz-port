// sub_0809DC34 at 0x0809DC34 (thumb)

undefined4 sub_0809DC34(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if (sVar1 == 0) {
    *(undefined *)(param_1 + 0xbe) = 0;
  }
  else {
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined *)(param_1 + 0xbe) = 1;
  }
  return in_lr;
}


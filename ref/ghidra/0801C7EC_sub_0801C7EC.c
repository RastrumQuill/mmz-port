// sub_0801C7EC at 0x0801C7EC (thumb)

undefined4 sub_0801C7EC(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (param_2 == 0) {
    sub_0801B244(param_1);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x94);
    uVar2 = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 0x20c) = uVar1;
    *(undefined4 *)(param_1 + 0x210) = uVar2;
    uVar1 = *(undefined4 *)(param_2 + 0xa0);
    uVar2 = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x218) = uVar1;
    *(undefined4 *)(param_1 + 0x21c) = uVar2;
  }
  sub_0801C72C(param_1,param_2);
  return in_lr;
}


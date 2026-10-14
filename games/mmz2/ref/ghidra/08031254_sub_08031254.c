// sub_08031254 at 0x08031254 (thumb)

undefined8 sub_08031254(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  uVar2 = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 500);
  uVar2 = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  return CONCAT44(param_2 + 0x1c,in_lr);
}


// sub_080281C8 at 0x080281C8 (thumb)

undefined4 sub_080281C8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                       *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  if ((uVar1 & 0xf) != 0) {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    sub_08028144(param_1);
  }
  return in_lr;
}


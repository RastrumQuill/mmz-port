// sub_0802814C at 0x0802814C (thumb)

undefined4 sub_0802814C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                       *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
  if ((uVar1 & 0xf) == 0) {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_080281C0(param_1);
  }
  return in_lr;
}


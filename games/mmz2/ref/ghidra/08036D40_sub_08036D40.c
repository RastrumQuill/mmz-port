// sub_08036D40 at 0x08036D40 (thumb)

ulonglong sub_08036D40(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_083347c4 + param_2 * 4));
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}


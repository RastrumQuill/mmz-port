// sub_08031910 at 0x08031910 (thumb)

ulonglong sub_08031910(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_083344ac + (uint)*(byte *)(param_1 + 0x174) * 4)
                      );
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}


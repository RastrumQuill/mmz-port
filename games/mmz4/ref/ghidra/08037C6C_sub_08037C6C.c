// sub_08037C6C at 0x08037C6C (thumb)

undefined4 sub_08037C6C(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x144) < 2) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0884fe0c + (uint)*(byte *)(param_1 + 0x144) * 4));
  }
  else {
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}

